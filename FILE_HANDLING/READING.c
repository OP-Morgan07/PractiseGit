#include <stdio.h>
int main()
{
    FILE *fp =NULL;
    
    char ch;

    fp = fopen("p1.txt", "r");
    while ((ch=fgetc(fp))!= EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}