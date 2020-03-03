#include <stdio.h>
#include <string.h>

struct final
{
    int a;
    char b[10];
};
struct final s[5];
int fun(struct final s[5], int);

int main()
{
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("Roll no & Name");
        scanf("%d %s", &s[i].a, &s[i].b);
    }

    fun(s, i);
    return 0;
}
int fun(struct final s[5], int i)
{
    
    for( i = 0; i < 2; i++)
    if((s[i].a) == 12)
    printf("Roll no %d Name is %s\n",s[i].a,s[i].b);
}

