double mx_pow_rec(double n, unsigned int pow)
{   
    double buf = n;
    if(pow == 0) {
        return 1;
    }
    else {
        buf = n * mx_pow_rec(n, pow-1);
        return buf;
    }   
}

