#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];
	gets(str);
	int n = strlen(str); // strlen gives the size of the string without counting \0
	int x;
	printf("ENTER THE POSITION TO BE EXTRACTED : ");
	scanf("%d", &x);
	int i;
	for (i = x; i <= n - 1; i++)
	{
		printf("%c", str[i]);
	}
	// int i=x;
	// while(str[i]!='\0'){
	// 	printf("%c",str[i]);
	// 	i++;
	// }
	return 0;
}