#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Student
{
    int roll_no;
    char name[10];
    char dept[10];
    char course[10];
    int yoj;
}stu[450];

int main()
{
    int n, i;
    
    printf("Enter number of students=");
    scanf("%d", &n);
    struct Student stu[450];
    for(i = 0; i < n; i++)
    {
        printf("Enter Roll No , Name of student\n");
        scanf("%d %s", &stu[i].roll_no, &stu[i].name);
        //printf("Enter Department & Name of course\n");
        //scanf("%s %s", &stu[i].dept, &stu[i].course);
        printf(" and year of joining\n");
        scanf("%d", &stu[i].yoj);
        
    }
    
    fun_1(stu, n);
    getch();
    

}

int fun_1(struct Student st[], int a)

{
    int i, y;
    printf("Enter joining year for which students names required\n ");
    scanf("%d", &y);
    
    printf("Name of students who join in %s\n", y);
    
    for(i = 0; i < a; i++)

    {
        if(st[i].yoj == y)           //Here is the problem! with strucure member value how to use == operator 
        {
            printf("%s", st[i].name);
            
        }  

    }
    //printf("Total numbers of students join in %d are %d\n", *b, d);

    


}

