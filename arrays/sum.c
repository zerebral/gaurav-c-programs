#include <stdio.h>
int main()
{
    int arr[100];
    int n, m, i;
    printf("Enter how many nos you have to add?");
    scanf("%d", &n);
    
    for(i = 0 ; i < n; i++)
    //if(n>0)
    {
    printf("Enter numbers =");
    scanf("%d", &arr[i]);
    }

    i = 0;
    m = 0;

    while (i < n)
    {
        m = m + arr[i];
        i++;
    }
    
    printf("Sum 0f %d numbers is = %d", n, m);
    return 0;
}
