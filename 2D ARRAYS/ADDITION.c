#include <stdio.h>

int main()
{
	int r;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &r);
	int c;
	printf("ENTER THE NUMBER OF COLUMNS: ");
	scanf("%d", &c);
	int arr[r][c];
	for (int i = 0; i <= r - 1; i++)
	{
		for (int j = 0; j <= c - 1; j++)
		{

			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i <= r - 1; i++)
	{
		for (int j = 0; j <= c - 1; j++)
		{

			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	int arr1[r][c];
	for (int i = 0; i <= r - 1; i++)
	{
		for (int j = 0; j <= c - 1; j++)
		{

			scanf("%d", &arr1[i][j]);
		}
	}
	for (int i = 0; i <= r - 1; i++)
	{
		for (int j = 0; j <= c - 1; j++)
		{

			printf("%d", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int arr2[r][c];

	for (int i = 0; i <= r - 1; i++)
	{
		for (int j = 0; j <= c - 1; j++)
		{
			arr2[i][j] = arr[i][j] + arr1[i][j];
		}
	}
	for (int i = 0; i <= r - 1; i++)
	{
		for (int j = 0; j <= c - 1; j++)
		{

			printf("%d", arr2[i][j]);
		}

		printf("\n");
	}
	return 0;
}
