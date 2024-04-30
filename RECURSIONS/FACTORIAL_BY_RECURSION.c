#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n==1) // Base case. This helps to finish the recursive calls and get the output.
        return 1;
    return n * fact(n - 1); // RECURSIVE CALLING. Function callling itself.
}
int main()
{
    int n;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &n);

    int z = fact(n);
    printf("%d", z);
    return 0;
}