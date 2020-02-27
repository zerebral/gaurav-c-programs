#include <stdio.h>
int pwr(int n, int m);
int main()
{
    int n , m , ans;
    printf("Enter number and it's power");
    scanf("%d %d", &n, &m);
    ans=pwr(n,m);
    printf("Answer=%d", ans);
    return 0;
}


int pwr(int n, int m)                /*function pwr use to get n raise to m using function*/
{
    int i, a;
    a = n;
    for(i = m; i > 1; i--)
    n = n * a;
    return (n);

}
