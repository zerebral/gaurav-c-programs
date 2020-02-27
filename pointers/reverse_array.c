#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;
    int *p;
    int a[25];
    printf(" Enter array size = ");
    scanf("%d", &n);
    p = &a[0];
    for(i = 0; i < n; i++)
    {
        printf("Enter array element %d = ", i+1);
        scanf("%d", &a[i]);
        p++;
    }
    
    p--;

    printf("Reverse array is \n");

    for(i = n; i > 0; i--)
    {
        printf("%d\t", *p);
        p--;
    }

    
    return 0;
 

}
