#include <stdio.h> //Printing numbers n to 1
void decreasing(int n)
{
    if (n == 0)
        return;
    printf("%d ", n);
    decreasing(n - 1);
    return; // NOT COMPULSORY TO WRITE THIS RETURN
}
int main()
{
    int n;
    printf("ENTER THE VALUE OF n : ");
    scanf("%d", &n);

    decreasing(n);
    return 0;
}