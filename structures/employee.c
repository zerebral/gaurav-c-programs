#include <stdio.h>
#include <string.h>

struct emp
{
    int id;
    char name[10];
    float hours;
    float salary;
};

int main()
{
    int n, i;
    float total = 0;
    
    printf("Total number of employees =\n ");
    scanf("%d", &n);

    struct emp em[10];
    
    for(i = 0; i < n; i++)

    {
        printf("Enter employee id\n");
        scanf("%d", & em[i].id);

        printf("Enter name of employee\n");
        scanf("%s" , & em[i].name);

        printf("Enter how many hours he worked =\n");
        scanf("%f", & em[i].hours);

        em[i].salary = em[i].hours * 120;
        total = total + em[i].salary;
    }

    printf("Dtails of all employees\n");
    printf("Name\t\t ID\t Hours\t salary\n");

    for(i = 0; i < n; i++)
    {

        printf("%s\t\t %d\t %.2f\t %.2f\n", em[i].name, em[i].id, em[i].hours, em[i].salary);
    }

    printf("Total salary \t= %f", total);

return 0; 

}
