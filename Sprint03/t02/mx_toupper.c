int mx_toupper(int i)
{
    if(i > 64 && i < 91)
    {
        return i;
    }
    else if(i > 96 && i < 123)
    {
        return (i-32);
    }
    return i;
}
