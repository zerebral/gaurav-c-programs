#include <stdio.h>
#include <string.h>
struct Home
{
    char name[10];
    int age;
    char edu[10];
    
};
int main()
{
    int n, i , sum = 0;
    printf("Number of family members = ");
    scanf("%d",&n);
    printf(" Name, Age, Education of all family members\n");
    struct Home mem[5];
    
    for ( i = 0; i < n; i++)
    {
        scanf("%s %d %s", & mem[i].name, & mem[i].age, &mem[i].edu);
        sum = mem[i].age + sum;

    }

    printf("You enters following details\n\n");
    
    for ( i = 0; i < n; i++)
    {
        printf("%s\t %d\t %s\n", mem[i].name, mem[i].age, mem[i].edu);
                
    }

    printf(" And avarage family age is = %d", sum / n);
    
    return 0;
}

