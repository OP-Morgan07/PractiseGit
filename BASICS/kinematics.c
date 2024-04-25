#include<stdio.h>
#include<math.h>
int main(){
    float u,a,t;    //space isnt compulsory after comma
    printf("ENTER THE VALUE OF TIME IN SECONDS: ");
    scanf("%f", &t);
    printf("ENTER THe VALUE OF INITIAL VELOCITY IN m/s: ");
    scanf("%f", &u);
    printf("ENTER THE VALUE ACCELERATION IN m/s2: ");
    scanf("%f", &a);
    float d;
    d = u*t + a*t*t/2 ;
    printf("VALUE OF DISPLACEMENT: ");
    printf("%f", d);
    return 0;
    }