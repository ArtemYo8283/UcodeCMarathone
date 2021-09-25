int mx_factorial_iter(int n)
{
    if (n > 0) {
        long sum = 1;
        for (int i = 1; i <= n; i++) {
            if (sum * n > 2147483647) {
                return 0;
            }
            sum *= i;
        }
        return sum;
    }
    else if (n == 0) {
        return 1;
    }   
    else {
        return 0;
    }
}

