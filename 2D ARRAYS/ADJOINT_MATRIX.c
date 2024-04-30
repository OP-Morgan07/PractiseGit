#include <stdio.h>
#include <math.h>

int det(int n, int arr[n][n]);
void transpose(int n, int adj[n][n]);
void swap(int n, int adj[n][n], int i, int j);
void INVERSE(int n, int arr[n][n]);
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
    INVERSE(n, arr);
    return 0;
}
void INVERSE(int n, int arr[n][n])
{
    int min[n - 1][n - 1];
    int adj[n][n];
    int x, y;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            x = 0;
            for (int a = 0; a <= n - 1; a++)
            {
                y = 0;
                for (int b = 0; b <= n - 1; b++)
                {
                    if (a != i && b != j)
                    {
                        min[x][y] = arr[a][b];
                        y++;
                    }
                }
                if (a != i)
                    x++;
            }
            adj[i][j] = pow(-1, i + j) * det(n - 1, min);
        }
    }
    transpose(n, adj);
}
int det(int n, int arr[n][n])
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
                sum += arr[0][k] * det(n - 1, minor);
            }
            else
            {
                sum += -1 * arr[0][k] * det(n - 1, minor);
            }
        }
        return sum;
    }
}
void transpose(int n, int adj[n][n])
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            swap(n, adj, i, j);
        }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("%d", adj[i][j] / det(n, adj));
        }
        printf("\n");
    }
}
void swap(int n, int adj[n][n], int i, int j)
{
    int temp = adj[i][j];
    adj[i][j] = adj[j][i];
    adj[j][i] = temp;
}