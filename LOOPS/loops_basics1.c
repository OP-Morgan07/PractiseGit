#include<stdio.h>  //printing 1 to n integers taking input from user
int main(){
int n;
printf("ENTER n: ");
scanf("%d", &n);
    // for(int i=1; i<=n ; i++){           //CAN BE DONE THIS WAY BY PRINTING i DIRECTLY 
    //     printf("%d\n", i);
    // }

    int f=1;
    for(int i=1 ; i<=n ; i++){           //CAN BE DONE BY DECLRAING OTHER VARIABLE AND PRINTING IT
        printf("%d\n", f);
        f=f+1;

    }
return 0;
}