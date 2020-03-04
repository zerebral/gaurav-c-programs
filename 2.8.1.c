//modify base conversion program for input numbers to be in any base upto 36

#include <stdio.h>
int main()
{
    int n, rem[10], i, q, a = 0, b = 1, base;
    printf(" Any decimal no: ");
    scanf("%d", &n);
    printf("Above no convert at which base(<36) : ");
    scanf("%d", &base);
    q = n;
    
    for(i = 0; i < n; i++)
    {
        rem[i] = q % base;
        q = q / base;
        if ( q == 0)
            i = n;
        a++;
      //  printf("%d %d %d\n", rem[i], q, a);
    }
    a--;
    for(i = a; i >= 0; i--)
    {
        printf("%d", rem[i]);

    }
    return 0;

}