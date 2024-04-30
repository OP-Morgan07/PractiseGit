#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int hcf(int a, int b)
{
    int x;
    for (int i = 1; i <= min(a, b); i++)
    {

        if (a % i == 0 && b % i == 0)
        {
            x = i;
            break;
        }
    }
    return x;
}
int main()
{
    int a;
    printf("ENTER 1ST NUMBER: ");
    scanf("%d", &a);
    int b;
    printf("ENTER 2ND NUMBER: ");
    scanf("%d", &b);

    int z = hcf(a, b);
    printf("%d", z);
    return 0;
}