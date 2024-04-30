#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("ENTER A NUMBER: ");
	scanf("%d", &n);
	
	int ld,a,sum=0,x=0,b;
	for(int i=1;i<=n; i++){
	a=i;
		while(a!=0){
			a=a/10;
			x++;
		}
		b=i;
		while(b!=0){
			ld=b% 10;
			b=b/10;
			sum=sum+ pow(ld,x);
		}
	
	
if(sum==i) printf("%d IS AN ARMSTRONG NUMBER\n", i);
}
		
	return 0;
}