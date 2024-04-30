#include <stdio.h>
int main()
{
    // print even numbers from 1 to 100
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
            continue; // Used to skip particular steps in a loop
        printf("%d ", i);
    }

    return 0;
}