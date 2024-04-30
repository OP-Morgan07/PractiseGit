#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	printf("ENTER A NUMBER: ");
	scanf("%d", &n);
	int x;
	bool flag=false;
	bool flag1=false;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		if(x==1){
			flag=true;
		}
		if(flag==true){
			if(x==0){
				flag1=true;
			}	
			}
		}
		
	
	if(flag1==true) printf("yes");
	else printf("no");
	return 0;
}