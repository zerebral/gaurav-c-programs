#include <stdio.h>
int main()
{
int n, i, min;
int arr[100];
printf("For how many numbers you want to calculate minimum = ");
scanf("%d", &n);
for(i = 0;i < n; i++)
{
    printf("Enter No");
    scanf("%d", &arr[i]);
}
min=arr[0];
for(i = 1; i < n; i++)
{
    if (min > arr[i])
    min = arr[i];
    
}
printf("Minimum no is %d", min);
return 0;
}
