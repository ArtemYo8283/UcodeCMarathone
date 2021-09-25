#include "header.h"

t_agent **mx_parse_agents(char *src, int count)
{
    t_agent **dst = (t_agent **)malloc(8 * count + 1);
    int strength;
    int power;
    int n;
    char *name = NULL;
    dst[count] = NULL;
    if (!src) 
    {
        return NULL;
    }
    for(int i = 0; i < count; i++) 
    {
        src = mx_strstr(src, "name: ");
        src += mx_strlen("name: ");
        n = 0;
        while (src[n] != '\n')
        {
            n++;
        }
        name = mx_strnew(n);
        name = mx_strncpy(name, src, n);
        src = mx_strstr(src, "power: ");
        src += mx_strlen("power: ");
        power = mx_atoi(src);
        src = mx_strstr(src, "strength: ");
        src += mx_strlen("strength: ");
        strength = mx_atoi(src);
        dst[i] = mx_create_agent(name, power, strength);
        free(name);
    }
    return dst; 
}

int main(int argc, char *argv[]) {
    if (argc != 3  || (mx_strcmp(argv[1], "-n")  && mx_strcmp(argv[1], "-s")  && mx_strcmp(argv[1], "-p")))
    {
        mx_printerr("usage: ./parse_agents [-p | -s | -n] [file_name]\n");
    }
    else 
    {
        char *src = mx_file_to_str(argv[2]);
        if (src)
        {
            int count = mx_count_agents(src);
            if(count == -1)
            {
                mx_printerr("error\n");
            }
            else 
            {
                t_agent **agent_set = mx_parse_agents(src, count);
                sort_agents(&agent_set, argv[1]);
                for (int i = 0; agent_set[i]; i++) 
                {
                    mx_printstr("agent: ");
                    mx_printstr(agent_set[i]->name);
                    mx_printstr(", strength: ");
                    mx_printint(agent_set[i]->strength);
                    mx_printstr(", power: ");
                    mx_printint(agent_set[i]->power);
                    mx_printchar('\n');
                }
            }
        }
        else 
        {
            mx_printerr("error\n");
        }
    }
	return 0;
}
