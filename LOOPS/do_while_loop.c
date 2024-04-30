#include<stdio.h>
int main(){
int i=10;                 //DO WHILE LOOP does work atleast one time even if the condition isnt satisfied because work is done before condition checking
do{
    printf("%d",i);
    i++;                      //Actually there should be no output but output is given as 10 because first it did work of printing
}
while(i<=6);
return 0;
}