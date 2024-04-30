#include<stdio.h>
// int main(){
//     int x;
//     printf("ENTER THE PERCENTAGE: ");
//     scanf("%d", &x);
//     if(x>=81){
//         printf("VERY GOOD");
//     }
//     else {  //x<81           //BY NESTED IF ELSE METHOD
//         if(x>=61)
//         printf("GOOD");
//         else { //x<61
//         if(x>=41)
//         printf("AVERAGE");
//         else printf("FAIL"); //x<41

//         }

//     }
int main(){
int x;
    printf("ENTER THE PERCENTAGE: ");         //BY ELSE-IF METHOD
    scanf("%d", &x);
    if(x>=81) printf("VERY GOOD");
    else if(x>=61) printf("GOOD");
    else if(x>=41) printf("AVERAGE");
    else  printf("FAIL");
return 0;
}