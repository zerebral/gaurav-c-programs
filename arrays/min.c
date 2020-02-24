#include <stdio.h>
int main()
{
    int arr[10];
    int n,m,i;
    printf("Enter how much nos you have to compare =");
    scanf("%d",&n);
    
    for(i=0 ; i < n; i++)
    //if(n>0)
    {
    printf("Enter numbers = ");
    scanf("%d",&arr[i]);
    }

    i = 0;
    m = arr[0];

    while (i<n)
    {
        if(m > arr[i])
        m = arr[i];
        else
        m=m;
        i++;
    }
    
    printf("Minimum number in array of %d numbers is = %d",n ,m);
    return 0;
}
