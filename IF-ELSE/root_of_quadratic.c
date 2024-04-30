#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("THE COEFFICIANTS OF THE QUADRATIC IN ORDER a,b,c are: ");
    scanf("%f %f %f", &a,&b,&c);
    float Q1,Q2;
    Q1= (-b + sqrt(b*b - 4*a*c))/2*1/a;
    Q2= (-b - sqrt(b*b - 4*a*c))/2*1/a ;
    if(b*b-4*a*c==0) printf("THE ROOTS ARE : %f %f", Q1,Q2);
    if(b*b-4*a*c>0) printf("THE ROOTS ARE : %f %f", Q1,Q2);
    if(b*b-4*a*c<0){
    int f;
    f=(b*b-4*a*c)*-1;
    
    printf("THE ROOTS ARE: %f", (-b + sqrt(f))/2*a );
    printf("i  ");

    printf("%f", (-b - sqrt(f))/2*a);
    printf("i");
    }
    return 0;

 }