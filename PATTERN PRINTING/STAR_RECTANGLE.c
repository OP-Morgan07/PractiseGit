#include<stdio.h>  //Making star solid rectangle of rows m and colums n
int main(){
    int n,m;
    printf("ENTER THE NUMBER OF ROWS: ");
    scanf("%d", &m);
    printf("ENTER THE NUMBER OF COLUMNS: ");
    scanf("%d", &n);

    for(int i=1; i<=m ; i++){
        for(int j=1; j<=n; j++){            //IF ASKED FOR STAR SQUARE M=N IN BOTH THE LOOPS GIVE FROM 1 TO N
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}