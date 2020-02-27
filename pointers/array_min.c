#include <stdio.h>
int main()
{
    int arr[10];
    int *p;
    int n, min, i;
    printf("Enter for how many numbers you have to enter to find minimum ?");
    scanf("%d", &n);
    p = &arr[0];

       
    for(i = 0; i < n; i++)
    
    {
        printf("Enter numbers = ");
        scanf("%d", &arr[i]);
     
    }

    
    min = *p;
    i = 1;
 
    while (i < n)
    {
        p++;
        if(min > *p)
        {
            min = *p;
        }
        i++;
    }

printf(" Minimum no is = %d ",min);
return 0;    

}
