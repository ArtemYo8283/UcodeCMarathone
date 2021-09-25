void mx_printchar(char c);
void mx_hexadecimal(void)
{
    for(int i = 0; i < 16; i++)
    {
        if( i < 10)
        {
            mx_printchar(i+48);
        }
        else
        {
            mx_printchar(i+55);
        }
    }
    mx_printchar('\n');
}

