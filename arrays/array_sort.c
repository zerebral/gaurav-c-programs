#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, j, t;
    printf("How much number's  you have to sort?  ");
    scanf("%d", &n);
    
    printf("Enter numbers \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(j = 0; j < n; j++)
    {
        for(i = j + 1; i < n; i++)
    
        {
            if(arr[j] > arr[i])
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    

    
    /*for(i = n-1; i > 0; i--)
    
    {
        if(arr[i] < arr[i-1])
        {
            t = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = t;
        }
    }*/
    printf("Asending order is of %d numbers = \n", n);

    for(i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}
