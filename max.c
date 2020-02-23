#include <stdio.h>
int main()
{
int n, i, max;
int arr[100];
printf("How many numbers you want to compare=");
scanf("%d", &n);
for(i = 0; i < n; i++)
{
    printf("Enter No");
    scanf("%d", &arr[i]);
}
max=arr[0];
for(i = 1; i < n; i++)
{
    if (max < arr[i])
    max = arr[i];
    else
    {
        max = max;
    }

    
   
}
printf("Maximum no is %d", max);
return 0;
}
