void mx_deref_pointer(char ******str)
{
    char *p_s1;
    char **p_s2;
    char ***p_s3;
    char ****p_s4;
    char *****p_s5;
    str = &p_s5;
    p_s5 = &p_s4;
    p_s4 = &p_s3;
    p_s3 = &p_s2;
    p_s2 = &p_s1;
    p_s1 = "Follow the white rabbit!";
}
