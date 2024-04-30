#include<stdio.h>          //Highest factor of the given number n (except n)
int main(){
    int n;
    printf("ENTER n: ");
    scanf("%d", &n);
//METHOD 1 BAD METHOD TAKES MORE TIME IN THIS TYPE OF PROGRAMS (FORWARD LOOP)
// int hf=1;
//     for(int i=1 ; i<=n/2 ; i++){
//         if(n%i==0) hf=i;

//     }
//     printf("%d is the greatest factor", hf);



//METHOD 2 REVERSE LOOP USING BREAK STATEMENT SO LOOP RUNS LESS NUMBER OF TIME
int hf1=1;
for(int i1=n/2 ; i1>=1 ; i1--){      //ANY FACTOR OF A NUMBER CAN NOT BE GREATER THAN HALF OF IT
if(n%i1==0) {hf1=i1;
break;
}
}
printf("%d IS THE GREATEST FACTOR", hf1);

    return 0;


}