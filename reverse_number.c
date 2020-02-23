#include <stdio.h>
int main()
{
    int a, b, c, n;
    printf("Enter any three digit number");
    scanf("%d", &n);
    a = n / 100;
    n = n % 100;
    b = n / 10;
    c = n % 10;
    n = 100 * c + 10 * b + a;
    printf("New no after reverse is = %d", n);
    return 0;
}
