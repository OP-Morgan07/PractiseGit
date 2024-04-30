#include<stdio.h>
int main(){
    int x, y;
    printf("ENTER A POINT (x,y): ");
    scanf("%d %d", &x,&y);
    if(y==0 && x==0) printf("THE POINT IS ORIGIN");
    else if(x==0) printf("THE POINT LIES ON Y AXIS");
    else if(y==0) printf("THE POINT LIES ON X AXIS");
    else if(x>0) {
        if(y>0) printf("THE POINT LIES IN QUADRANT 1");
        else 
        printf("THE POINT LIES IN QUADRANT 4");
    }
    else if(x<0){
        if(y>0) printf("THE POINT LIES IN QUADRANT 2");
        else
        printf("THE POINT LIES IN QUADRANT 3");
    }

    return 0; 
}