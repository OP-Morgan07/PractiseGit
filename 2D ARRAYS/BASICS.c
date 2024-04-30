#include <stdio.h>
int main()
{

    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; // ARRAY OF ARRAYS
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    int brr[2][3] = {1, 2, 3, 4, 5, 6}; // Simpler way to initialise 2d array
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}