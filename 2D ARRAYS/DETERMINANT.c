#include <stdio.h>
int DET(int n, int arr[n][n]);
int main()
{
    int n;
    printf("ENTER THE ORDER OF THE MATRIX: ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x = DET(n, arr);
    printf("THE DETERMINANT OF THE MATRIX IS : %d", x);
    return 0;
}
int DET(int n, int arr[n][n])
{
    if (n == 2)
    {
        return arr[1][1] * arr[0][0] - arr[0][1] * arr[1][0];
    }
    else
    {
        int minor[n - 1][n - 1];
        int sum = 0;
        int x, y;

        for (int k = 0; k <= n - 1; k++)
        {
            x = 0;
            for (int i = 0; i <= n - 1; i++)
            {
                y = 0;
                for (int j = 0; j <= n - 1; j++)
                {
                    if (i != 0 && j != k)
                    {
                        minor[x][y] = arr[i][j];
                        y++;
                    }
                }
                if (i != 0)
                    x++;
            }
            if (k % 2 == 0)
            {
                sum += arr[0][k] * DET(n - 1, minor);
            }
            else
            {
                sum += -1 * arr[0][k] * DET(n - 1, minor);
            }
        }
        return sum;
    }
}