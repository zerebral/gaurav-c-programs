#include <stdio.h>
int main()
{
    int a[10];
    int *p;
    int n, i;
    float avg, sum = 0;
    printf("How many numbers avarge do you want?");
    scanf("%d", &n);
    printf(" Enter %d numbers = \n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = &a[0];
    for(i = 0; i < n; i++)
    {
        sum = sum + *p;
        p++;
    } 

    avg = sum / n;
    printf("Avarage of %d given numbers = %.4f",n ,avg);
    return 0;
}
