// program counts the numbers of digits in an integer

#include <stdio.h>

int main()
{
    int a, b = 1, n, i;
    printf("Enter No: ");
    scanf("%d", &n);
    a = n;
    for(i = 0; i < 10; i++)
    {
        n /= 10;
        if (n != 0)
            b++;
       
    }
    printf("%d",b);
}



