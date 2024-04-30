#include <stdio.h>
#include <string.h>
void merge(char str1[], char str2[]);
int main()
{
	char str1[50];
	char str2[50];
	puts("ENTER THE FIRST STRING: ");
	gets(str1);
	puts("ENTER THE SECOND THE STRRING:  ");
	gets(str2);
	merge(str1, str2);
	return 0;
}
void merge(char str1[], char str2[])
{

	int x = strlen(str1);
	int y = strlen(str2);
	char str3[50];

	char *ptr1 = str1;
	char *ptr2 = str2;
	char *ptr3 = str3;
	int i, j, k = 0;
	for (i = 0; i <= x - 1; i++)
	{

		*(ptr3 + i) = *(ptr1 + i);
	}

	int a = x;
	for (j = 0; j <= y - 1; j++)
	{
		*(ptr3 + a) = *(ptr2 + j);
		a++;
	}

	//    while(*(ptr3+k)!='\0'){
	//    	printf("%c", *(ptr3+k));
	//    	k++;
	//	}
	printf("%s", str3);

	return;
}