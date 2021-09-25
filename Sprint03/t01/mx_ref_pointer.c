void mx_ref_pointer(int i, int ******ptr)
{   
    int *p_p1;
    int **p_p2;
    int ***p_p3;
    int ****p_p4;
    int *****p_p5;
    p_p1 = &i;
    p_p2 = &p_p1;
    p_p3 = &p_p2;
    p_p4 = &p_p3;
    p_p5 = &p_p4;
    ptr = &p_p5;   
}
