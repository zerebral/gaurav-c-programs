#include <stdio.h>

int main()
{
    int a, b = 0, n, i, rev = 0, r;
    printf("Enter No: ");
    scanf("%d", &n);
    a = n;
    for(i = 0; i < 10; i++)
    {
        n /= 10;
        if (n != 0)
            b++;
       // printf("%d",b);
    }
    n = a;
    for(i = 0; i <= b; i++)
    {
        r = n % 10;
        n /= 10;
        rev = rev * 10 + r;
    }
    printf(" Reverse of %d is %d", a, rev);
    return 0;
}


