#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	
	//UPPER HALF 
	int nsp,nst;
	nsp=n-1;
	nst=1;
	
	for(int i=1;i<=n; i++){
	   for(int j=1; j<=nsp; j++){
	   	printf("  ");
	   }	
	   for(int j=1; j<=nst; j++){
	   	if(j==1 || j==nst)
	   	printf("* ");
	   	else
	   	printf("  ");
	   }
	   nsp--;
	   nst=nst+2;
	   printf("\n");
	   
}

    //LOWER HALF
    nsp=1;
    nst=2*n-3;
    
    for(int i=1; i<=n-1; i++){
    	for(int j=1; j<=nsp; j++){
    		printf("  ");
		}
		for(int j=1; j<=nst; j++){
			if(j==1 || j==nst)
			printf("* ");
			else
			printf("  ");
		}
		nsp++;
		nst=nst-2;
		
		printf("\n");
	
}
	return 0;
}