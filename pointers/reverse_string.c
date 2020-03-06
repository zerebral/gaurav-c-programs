#include <stdio.h>
#include <string.h>
int main()
{
    int i, n = 0;
    char a[25], m;
    char *p;
    printf(" Enter word ");
    scanf("%s",&a);
    
    p = &a[0];
    i = 0;
    while (a[i] != '\0')
    {
        p++;
        i++;
    }

    n = 0;
    while (i >= n)
    {
        printf("%c",*p);
        p--;
        n++;
    }

    return 0;
 

}
