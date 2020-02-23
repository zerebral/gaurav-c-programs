#include <stdio.h>
int main()
{
int n,i,min;
int arr[100];
printf("How many numbers you want to compare=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter No");
    scanf("%d",&arr[i]);
}
min=arr[0];
for(i=1;i<n;i++)
{
    if (min>arr[i])
    min=arr[i];
    else
    {
        min=min;
    }

    
   
}
printf("Minimum no is %d",min);
return 0;
}
