//modify base conversion program for input numbers to be in any base upto 36

#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, q, a = 0, b = 1, base;
    char ascii[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9','A', 'B', 'C','D', 'E', 'F', 'G', 'H','I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int rem[36];
    printf(" Any decimal no: ");
    scanf("%d", &n);
    printf("Above no convert at which base(<36) : ");
    scanf("%d", &base);
    
    q = n;
    
    for(i = 0; i < n; i++)
    {
        rem[i] = q % base;
        q = q / base;
        if (q == 0)
            i = n;
    
        a++;
       printf("%d \t %d \t %d\n", rem[i], q, a);
    }
    a--;
    for(i = a; i >= 0; i--)
    {
        if(rem[i] >= 10)
        {
            i = rem[i];
            printf("%c", ascii[i]);
        }    
        else
        {
            printf("%d", rem[i]);

        }
        
        
    }
    return 0;

}
