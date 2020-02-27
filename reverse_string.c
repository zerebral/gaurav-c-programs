#include <stdio.h>
//#include <string.h>
int main()
{
    char name [ 20 ];
    int n = 0, i;
    printf("Enter a Name = ");
    scanf("%s", &name);
    i=0;
    while (name[i] != '\0')
    {
        n++;
        i++;
    }
        for(i = (n-1) ; i >= 0 ;i--)
        printf("%c", name[i]);

    return 0;
}
        







    
