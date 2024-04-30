    #include<stdio.h>
    int main(){
    	
	int n;
	printf("ENTER n : ");
	scanf("%d", &n);


    //METHOD 2  (CHECKING NUMBER OF STARS AND SPACES IN EACH ROW)
    int nsp=n-1;     //nsp=NUMBER OF SPACES //INITIALLY SPACES ARE n-1
    int nst=1;       //nst=NUMBER OF STARS //INITIALLY STAR IS ONE
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=nsp; j++){
    		printf("  ");
		}
		for(int k=1; k<=nst; k++){
		  if(i==n) printf("* ");
		  else if(k==1 || k==nst)	printf("* ");
		  else printf("  ");
			
		}
		nsp--;
		nst=nst+2;
		printf("\n");
		
	}
	return 0;
}