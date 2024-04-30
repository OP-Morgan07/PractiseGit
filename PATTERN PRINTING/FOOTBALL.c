#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        for(int j=1;  j<=i; j++){
            printf("* ");
        }
        for(int j=1; j<=n; j++){
            printf("* ");
        }
        for(int j=1;j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=3*n; j++){
            if(j>n && j<=2*n) printf("  ");
            else printf("* ");
        }
        printf("\n");
    }

    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        for(int j=1;j<=n-i;j++){
            printf("* ");
        }
        for(int j=1; j<=n;j++){
            printf("* ");
        }
        for(int j=1;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}