#include <stdio.h>
int main()
{
    int arr[10];
    int *p;
    int n, m, i;
    printf("Enter how many numbers you have to add ?");
    scanf("%d", &n);
    p = &arr[0];

    m = 0;
    
    for(i = 0; i < n; i++)
    
    {
        printf("Enter numbers = ");
        scanf("%d", &arr[i]);
        
        m = m + *p;
        p++;
    }

   /* i = 0;
    m = 0;

    while (i < n)
    {
        m = m + *p;
        p++;
        i++;
    }*/
    
    printf("Sum of %d numbers is = %d", n, m);
    return 0;
}
