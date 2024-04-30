#include <stdio.h>
int main()
{
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{ // Here we can notice that in a row number of stars is equal to the row number so we run the inner loop from 1 to i only and not till n . By running till n we will get a square.
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}