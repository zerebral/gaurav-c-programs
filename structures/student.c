#include <stdio.h>
#include <string.h>

struct Student
{
    int roll_no;
    char name[10];
    char dept[10];
    char course[10];
    int yoj;
};
struct Student stu[450];
int fun_1(struct Student stu[450], int );
int main()
{
    int n, i;
    
    printf("Enter number of students=");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("Enter Roll No , Name of student\n");
        scanf("%d %s", &stu[i].roll_no, &stu[i].name);
        printf("Enter Department & Name of course\n");
        scanf("%s %s", &stu[i].dept, &stu[i].course);
        printf(" and year of joining\n");
        scanf("%d", &stu[i].yoj);
        
    }
    
    fun_1(stu, n);
    return 0;
    

}

int fun_1(struct Student stu[450], int n)

{
    int i, y, z = 0;
    printf("Enter joining year for which students names required\n ");
    scanf("%d", &y);
    
    printf("Name of students who join in %d\n", y);
    
    for(i = 0; i < n; i++)

    {
        if((stu[i].yoj) == y)
        {
            printf("%s\n", stu[i].name);
            z++;
        }  

    }
    printf("Total numbers of students join in %d are %d\n", y, z);
}

