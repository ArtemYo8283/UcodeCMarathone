#include "header.h"

int main(int argc, char *argv[])
{
    if(argc != 6){
        write(2,"usage: ./way_home [file_name] [x1] [y1] [x2] [y2]\n", 51);
        return 0;
    }
    char buf;
    int file = open(argv[1], O_RDONLY);
    if(file == -1) 
    {
        write(2,"map doesn't exist\n",19);
        return 0;
    }
    else
    {
        if(read(file,&buf,1) == 0) 
        {
            write(2,"map doesn't exist\n",19);
            return 0;
        }   
    }
    int length_x = 0;
    int length_y = 0;
    int count_x = 0;
    int count_y = 0;
    int x1 = mx_atoi(argv[3]);
    int y1 = mx_atoi(argv[2]);
    int x2 = mx_atoi(argv[5]);
    int y2 = mx_atoi(argv[4]);
    while(read(file,&buf,1) > 0)
    {
        if(buf == '\n')
        {
            length_y++;
        }
    }
    close(file);
    file = open(argv[1], O_RDONLY);
    while(read(file,&buf,1) > 0 && buf != '\n')
    {
        if(buf != ',')
        {
            length_x++;
        }
    }
    close(file);
    file = open(argv[1], O_RDONLY);
    while(read(file,&buf,1) > 0)
    {
        if (buf != ',' && buf != '\n')
        {
            count_x++; 
        }
        else if(buf == '\n')
        {
            if(count_x == length_x)
            {
                count_x = 0;
                count_y++;
            }
            else
            {
                write(2, "map error\n", 10);
                return 0;
            }
        }
    }
    close(file);
    file = open(argv[1], O_RDONLY);
    int y = 0;
    int x = 0;
    char arr[length_y][length_x];
    char arr1[length_y][length_x];
    while(read(file,&buf,1) > 0)
    { 
        if (buf != '\n' && buf != ',')
        {
            arr[y][x] = buf;
            arr1[y][x] = buf;
            x++;
        }
        else if (buf == '\n')
        {
            y++;
            x = 0;
        }
    }
    close(file);
    if (arr[x1][y1] == '#')
    {
        
        write(2, "entry point cannot be an obstacle\n", 34);
        return 0;
    }
    if (arr[x2][y2] == '#')
    {
        write(2, "exit point cannot be an obstacle\n", 33);
        return 0;
    }
    if (arr[x1 + 1][y1] == '#' && arr[x1 - 1][x1] == '#' && arr[x1][y1 + 1] == '#' && arr[x1][y1 - 1] == '#')
    {
        write(2, "route not found\n", 16);
        return 0;
    }
    if (arr[x2 + 1][y2] == '#' && arr[x2 - 1][y2] == '#' && arr[x2][y2 + 1] == '#' && arr[x2][y2 - 1] == '#')
    {
        write(2, "route not found\n", 16);
        return 0;
    }
    for (int i = 0; i != length_y; i++)
    {
        for (int j = 0; j != length_x; j++)
        {
            if (arr[i][j] == '.' || arr[i][j] == '#' || arr[i][j] == '\n')
            {
                continue;
            }
            else
            {
                write(2, "map error\n", 10);
                return 0;
            }
        }
    }
    if (x1 > length_x || y1 > length_y || x2 > length_x || y2 > length_y)
    {
        write(2, "points are out of map range\n", 28);
        return 0;
    }
    enum SOS sos = UP;
    char c = 65;
    int count = 0;
    for(int i = 0; i < length_y; i++)
        {
            for(int j = 0; j < length_x; j++)
            {
                if(arr[i][j] == '.')
                {
                    count++;
                }
            }
        }
    arr[x1][y1] = c;
    for(int k = 0; k < count; k++)
    {
        for(int i = 0; i < length_y; i++)
        {
            for(int j = 0; j < length_x; j++)
            {
                if(arr[i][j] == c)
                {
                    if(arr[i+1][j] != '#' && arr[i+1][j] == '.')
                    {
                        arr[i+1][j] = c + 1;
                    }
                    if(arr[i-1][j] != '#' && arr[i-1][j] == '.')
                    {
                        arr[i-1][j] = c + 1;
                    }
                    if(arr[i][j+1] != '#' && arr[i][j+1] == '.')
                    {
                        arr[i][j+1] = c + 1;
                    }
                    if(arr[i][j-1] != '#' && arr[i][j-1] == '.')
                    {
                        arr[i][j-1] = c + 1;
                    }
                }
            }
        }
        c += 1;
    }
    c = 65;
    for(int i = 0; i < length_y; i++)
    {
        for(int j = 0; j < length_x; j++)
        {
            if(arr[i][j] > c)
            {
                c = arr[i][j];
            }
        }
    }
    int dist = (int)c - 65;
    int exit = (int)arr[x2][y2] - 65;
    if(dist == exit)
    {
        arr1[x2][y2] = 'X';
    }
    else
    {
        arr1[x2][y2] = '*';
    }
    if(exit < 0)
    {
        write(2, "route not found\n", 16);
        return 0;
    }
    mx_printstr("dist=");
    mx_printint(dist);
    mx_printchar('\n');
    mx_printstr("exit=");
    mx_printint(exit);
    mx_printchar('\n');
    char c1 = arr[x2][y2];
    for(int i = x2, j = y2, k = 0; k < exit; k++)
    {
        switch(sos)
        {
            case UP:
                if(arr[i-1][j] == c1)//up
                {
                    arr[i-1][j] = '*';
                    arr1[i-1][j] = '*';
                    i--;
                    sos = UP;
                }
                else if(arr[i][j+1] == c1)//right
                {
                    arr[i][j+1] = '*';
                    arr1[i][j+1] = '*';
                    j++;
                    sos = RIGHT;
                }
                else if(arr[i][j-1] == c1)//left
                {
                    arr[i][j-1] = '*';
                    arr1[i][j-1] = '*';
                    j--;
                    sos = LEFT;
                }
                else if(arr[i+1][j] == c1)// down
                {
                    arr[i+1][j] = '*';
                    arr1[i+1][j] = '*';
                    i++;
                    sos = DOWN;
                }
            break;
            case DOWN:
                if(arr[i+1][j] == c1)// down
                {
                    arr[i+1][j] = '*';
                    arr1[i+1][j] = '*';
                    i++;
                    sos = UP;
                }
                else if(arr[i][j-1] == c1)// left
                {
                    arr[i][j-1] = '*';
                    arr1[i][j-1] = '*';
                    j--;
                    sos = RIGHT;
                }
                else if(arr[i][j+1] == c1)//right
                {
                    arr[i][j+1] = '*';
                    arr1[i][j+1] = '*';
                    j++;
                    sos = LEFT;
                }
                else if(arr[i-1][j] == c1)//up
                {
                    arr[i-1][j] = '*';
                    arr1[i-1][j] = '*';
                    i--;
                    sos = DOWN;
                }
            break;
            case RIGHT:
                if(arr[i][j+1] == c1)//right
                {
                    arr[i][j+1] = '*';
                    arr1[i][j+1] = '*';
                    j++;
                    sos = RIGHT;
                }
                else if(arr[i+1][j] == c1)// down
                {
                    arr[i+1][j] = '*';
                    arr1[i+1][j] = '*';
                    i++;
                    sos = DOWN;
                }
                else if(arr[i-1][j] == c1)//up
                {
                    arr[i-1][j] = '*';
                    arr1[i-1][j] = '*';
                    i--;
                    sos = UP;
                }
                else if(arr[i][j-1] == c1)//left
                {
                    arr[i][j-1] = '*';
                    arr1[i][j-1] = '*';
                    j--;
                    sos = RIGHT;
                }
            break;
            case LEFT:
                if(arr[i][j-1] == c1)//left
                {
                    arr[i][j-1] = '*';
                    arr1[i][j-1] = '*';
                    j--;
                    sos = LEFT;
                }
                else if(arr[i-1][j] == c1)//up
                {
                    arr[i-1][j] = '*';
                    arr1[i-1][j] = '*';
                    i--;
                    sos = UP;
                }
                else if(arr[i+1][j] == c1)// down
                {
                    arr[i+1][j] = '*';
                    arr1[i+1][j] = '*';
                    i++;
                    sos = DOWN;
                }
                else if(arr[i][j+1] == c1)//right
                {
                    arr[i][j+1] = '*';
                    arr1[i][j+1] = '*';
                    j++;
                    sos = RIGHT;
                }
            break;
        }
        c1 -= 1;
    }
    arr1[x1][y1] = '*';
    for(int i = 0; i < length_y; i++)
    {
        for(int j = 0; j < length_x; j++)
        {
            if(arr[i][j] == c && arr1[i][j] != 'X')
            {
                arr1[i][j] = 'D';
            }
        }
    }
    int file_result = open("path.txt", O_WRONLY);
    if (file_result < 0)
    {
        file_result = open("path.txt", O_CREAT | O_WRONLY);
    }
    for (int i = 0; i < length_y; i++)
    {
        for (int j = 0; j < length_x; j++)
        {
            char buffer = arr1[i][j];
            write(file_result, &buffer, 1);
        }
        write(file_result, "\n", 1);
    }
    if(close(file_result) < 0)
    {
        write(2, "error\n", 6);
    }
    return 0;
}

