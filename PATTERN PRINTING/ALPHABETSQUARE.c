#include <stdio.h>
int main()
{ // n must be less than or equal to 26.
	int n;
	printf("ENTER THE SIDE OF THE SQUARE: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%c ", j + 64);
		}
		printf("\n");
	}
	return 0;
}