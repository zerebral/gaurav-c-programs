//program to sum the digits in an integer

#include <stdio.h>

int main()
{
    int a, b = 0, n, i, sum = 0, r;
    printf("Enter No: ");
    scanf("%d", &n);
    a = n;
    for(i = 0; i < 10; i++)
    {
        n /= 10;
        if (n != 0)
            b++; 
    }
    

    n = a;
    for(i = 0; i <= b; i++)
    {
        r = n % 10;
        n /= 10;
        sum = sum + r;
    }
    printf(" Sum of %d's digits is %d", a, sum);
    return 0;
}


