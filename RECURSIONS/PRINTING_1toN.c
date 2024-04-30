#include <stdio.h>
// METHOD 1 --PARAMETERIZED WAY void increasing(int x, int n)
// {
//     if (x > n)
//         return;
//     printf("%d ", x);
//     increasing(x + 1, n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("ENTER THE VALUE OF n: ");
//     scanf("%d", &n);

//     increasing(1, n);
//     return 0;
// }
// METHOD 2 --RECURSION AFTER CALL WAY
void increasing(int n)
{
    if (n == 0)
        return;
    increasing(n - 1);
    printf("%d ", n);
    return;
}
int main()
{
    int n;
    printf("ENTER THE VALUE OF n: ");
    scanf("%d", &n);

    increasing(n);
    return 0;
}