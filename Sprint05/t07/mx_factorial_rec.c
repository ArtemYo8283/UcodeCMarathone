int mx_factorial_rec(int n)
{
    long sum = 1;
    if(n == 0) {
        return 1;
    }  
    
    else if (n > 0) {
        if(n == 1) {
            return 1;
        }
        else {
            sum = mx_factorial_rec(n-1) * n;
            if (sum > 2147483647)
            {
		        sum = 0;
            }
            return sum;
        }
    }
    else {
        return 0;
    }
}

