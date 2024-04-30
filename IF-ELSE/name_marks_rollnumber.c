#include<stdio.h>
#include<string.h>
int main(){
    char ch[15];          //used arrays and strings
    printf("ENTER ROLL NO. : ");
    gets(ch);
    char ch1[25];
    printf("ENTER YOUR NAME: ");
    gets(ch1);
    int x,y,z;
    printf("ENTER YOUR PHYSICS MARKS: ");
    scanf("%d",&x);
    printf("ENTER YOUR MATHS MARKS: ");
    scanf("%d",&y);
    printf("ENTER YOUR COMPUTER MARKS: ");
    scanf("%d",&z);
    int q;
    q=x+y+z;
    printf("TOTAL MARKS: %d\n", q);
    float w;
    float f=(float)q;
    w=f/300*100 ;
    printf("PERCENTAGE: %f\n", w);

    if(q>270) printf("FIRST CLASS");
    else {
        if(q>200) printf("SECOND CLASS");
        else printf("FAIL");

    }
return 0;
}
