#include <stdio.h>
int greatestOfTWO(int n, int m);
int LCM(int x, int n, int m);
int main()
{
    int n;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d", &n);
    int m;
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d", &m);

    int x = greatestOfTWO(n, m);
    int y = LCM(x, n, m);
    printf("THE LEAST COMMON MULTIPLE OF THE TWO NUMBERS IS %d", y);
    return 0;
}
int greatestOfTWO(int n, int m)
{
    if (n > m)
        return n;
    else
        return m;
}
int LCM(int x, int n, int m)
{
    if (n % m == 0 || m % n == 0)
        return x;
    else
        return n * m;
}