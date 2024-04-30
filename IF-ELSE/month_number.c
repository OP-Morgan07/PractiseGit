#include <stdio.h>
int main()
{
	int n;
	printf("ENTER A NUMBER: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
		printf("JANUARY AND HAS 31 DAYS");
		break;
	case 3:
		printf("MARCH AND HAS 31 DAYS");
		break;
	case 5:
		printf("MAY AND HAS 31 DAYS");
		break;
	case 7:
		printf("JULY AND HAS 31 DAYS");
		break;
	case 8:
		printf("AUGUST AND HAS 31 DAYS");
		break;
	case 10:
		printf("OCTOBER AND HAS 31 DAYS");
		break;
	case 12:
		printf("DECEMBER AND HAS 31 DAYS");
		break;
	case 4:
		printf("APRIL AND HAS 30 DAYS");
		break;
	case 6:
		printf("JUNE AND HAS 30 DAYS");
		break;
	case 9:
		printf("SEPTEMBER AND HAS 30 DAYS");
		break;
	case 11:
		printf("NOVEMBER AND HAS 30 DAYS");
		break;
	case 2:
		printf("JANUARY AND HAS 28 or 29 DAYS");
		break;
	default:
		printf("INVALID INPUT");
	}

	return 0;
}