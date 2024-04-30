#include<stdio.h>
int main(){
    int x;
    printf("ENTER A YEAR: ");
    scanf("%d", &x);
    // //The concept of leap is in notes.Years like 1500 1700 1900 etc arent leap but 1600 2000 1200 etc are leap as they are divisible by 400.

    // if(x%400==0 || (x%4==0 && x%100!=0))    //BY NORMAL IF-ELSE
    // printf("THE YEAR IS A LEAP YEAR");
    // else 
    // printf("THE YEAR NOT A LEAP YEAR");
    ((x%100!=0 && x%4==0) || x%400==0) ? printf("LEAP YEAR") : printf("NOT A LEAP YEAR");  //BY TERNARY OPERATORS
    return 0;

}