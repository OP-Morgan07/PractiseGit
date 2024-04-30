#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "MY NAME IS KHAN ";
    char str2[] = "AND I AM NOT A TERRORIST";
    // COPIES THE CONTENT OF STR2 IN STR1
    strcpy(str1, str2);
    printf("%s\n", str1);
    printf("%s", str2);
    printf("\n");

    char str3[] = "MY NAME IS KHAN ";
    char str4[] = "AND I AM NOT A TERRORIST";
    // CONCATINATES TWO STRINGS STR3 AND STR4 AND STORES THE CONCATINATED STRING IN STR3.
    strcat(str3, str4);
    printf("%s\n", str3);
    printf("%s\n", str4);
    // LENGHT OF A STRING EXCLUDING '\O'.
    int a = strlen(str3);
    printf("%d", a);
    return 0;
}