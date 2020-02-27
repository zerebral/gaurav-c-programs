#include <stdio.h>
int main()
{
    int arr[10];
    int n, m, i;
    printf("Enter how many numbers you have to compare ?");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    
    {
        printf("Enter numbers = ");
        scanf("%d", &arr[i]);
    }

    i = 0;
    m = arr[0];

    while (i < n)
    {
        if(m > arr[i])
        {    
            m = arr[i];
        }
        i++;
    }
    
    printf("Minimum number in array of %d numbers is = %d", n, m);
    return 0;
}
