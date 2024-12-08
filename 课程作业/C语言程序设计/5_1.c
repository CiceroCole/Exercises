// 筛法求素数
#include <stdio.h>

int* primes(int n)
{
    int *isPrimes = calloc(sizeof(int),n + 1);
    for (int i = 0; i <= n; i++)
        isPrimes[i] = 1;
    
    for (int i = 2; i <= n; i++)
        if (isPrimes[i])
            for (int m = 2 * i; m <= n; m = m + i)
                isPrimes[m] = 0;
    return isPrimes;
}

void out_perimes(int n)
{
    int *a = primes(n);
    int out_count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (a[i])
        {
            printf("%4d",i);     
            if (++out_count % 10 == 0)
                putchar('\n'); 
        }
    }
}

int main()
{
    out_perimes(100);
    return 0;
}