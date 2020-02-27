#include <stdio.h>
int main()
{
    int arr[10];
    int *p;
    int n, max, i;
    printf("Enter for how many numbers you have to enter to find maximum ?");
    scanf("%d", &n);
    p = &arr[0];

       
    for(i = 0; i < n; i++)
    
    {
        printf("Enter numbers = ");
        scanf("%d", &arr[i]);
     
    }

    
    max = *p;
    i = 1;
 
    while (i < n)
    {
        p++;
        if(max < *p)
        {
            max = *p;
        }
        i++;
    }

printf(" maximum no is = %d ",max);
return 0;    

}
