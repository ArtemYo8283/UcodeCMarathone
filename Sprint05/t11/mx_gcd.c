int mx_gcd(int a, int b)
{
    if(a < 0) {
        a *= -1;
    }
    if(b < 0) {
        b *= -1;
    }
    if(a == 0 || b == 0) {
        return 0;
    }
    if(a == b) {
        return a;
    }
    if (a > b) {
        return mx_gcd(a - b, b);
    }
    else {
    	return mx_gcd(a, b - a);
    }
}

