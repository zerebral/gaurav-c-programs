//program reads set of n single digits and convert them in single decimal integer
#include <stdio.h>

int main()
{
    int a, b , n, i, j, num = 0, c;
    printf("How many digits you have to enter? ");
    scanf("%d", &n);
    printf("Enter digits:");
    c = n;
    for( i = 0; i < n; i++)
    {
        scanf("%d", &a);
        b = 1;
        //if((n - 1) != c)
        {
            for( j = 0; j < (c-1); j++)
            {
                b = b * 10;
            }
            c--;
        }
        num = num + a * b; 
       

    }
    printf("So number is : %d", num);
    return 0;

}