#include <stdio.h>
#include <limits.h>
void SORT(int n, int arr[n]);
int main()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    SORT(n, arr);
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
void SORT(int n, int arr[n])
{
    int *ptr = arr;

    int minIndex;
    // SELECTION SORT

    for (int i = 0; i <= n - 1; i++)
    {
        int min = INT_MAX;
        for (int j = i; j <= n - 1; j++)
        {
            if (*(ptr + j) < min)
            {
                min = *(ptr + j);
                minIndex = j;
            }
        }
        int temp = *(ptr + minIndex);
        *(ptr + minIndex) = *(ptr + i);
        *(ptr + i) = temp;
    }
    return;
}