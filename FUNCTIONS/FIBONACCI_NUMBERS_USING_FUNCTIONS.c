#include <stdio.h>
void fibo(int n)
{
    int a = 1, b = 1, c;
    printf("%d %d", a, b);
    for (int i = 1; i <= n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d", c);
    }
}
int main()
{
    int n;
    printf("ENTER THE VALUE OF  n: ");
    scanf("%d", &n);

    fibo(n);
    return 0;
}