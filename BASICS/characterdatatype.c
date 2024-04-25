#include<stdio.h>//ways to get ASCII values 0f characters and vice versa
int main(){
    char ch= 'a';
    printf("%d\n", ch); //implicit typecasting
    char ch1= 'b';
    int x = (int)ch1;//explicit typecasting
    printf("%d\n", x);
             
             //to get characters from ASCII values
             int y=97;
             printf("%c\n",y); //implicit typecasting
             int z=98;
             char f= (char)z;//explicit typecasting
             printf("%c\n", f);
             return 0;
}