#include <stdio.h>
int main()
{
	int n;
	printf("ENTER  n: ");
	scanf("%d", &n);

	//	for (int i = 1; i <= n; i++)
	//	{
	//		for (int j = 1; j <= n+1-i ; j++)
	//		{
	//			printf("* ");
	//		}
	//		printf("\n");
	//	}
	int x = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			printf("* ");
		}
		x--;
		printf("\n");
	}
	return 0;
}