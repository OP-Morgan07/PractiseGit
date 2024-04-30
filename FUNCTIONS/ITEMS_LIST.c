#include<stdio.h>
void main(){
	int i,n,sum=0;
	printf("How Many Item Do You Wonna Buy?");
	scanf("%d",&n);
	int pri[n],qun[n];
	printf("What Is Price?\n");
	for(i=0;i<n;i++){
		printf("Item %d :",i+1);
		scanf("%d",&pri[i]);
	}
	printf("How Many Quantities?\n");
	for(i=0;i<n;i++){
		printf("Item %d :",i+1);
		scanf("%d",&qun[i]);
		printf("\n");
	}
	printf("Item    Price    Quantities    Subtotal\n");
	for(i=0;i<n;i++){
		int subtotal=pri[i]*qun[i];
		printf("Item %d    %d      %d            %d\n",i+1,pri[i],qun[i],subtotal);
	}
	for(i=0;i<n;i++){
		sum=sum+pri[i]*qun[i];
	}
	printf("--------------------------------------\n");
	printf("Total                             %d\n",sum);
	if(sum<=1000){
	printf("Discount                        -%d\n",sum/20);
	printf("--------------------------------------\n");
	printf("Grand Total                          %d\n",sum-sum/20);
	}
	if(sum>1000 && sum<=5000){
	printf("--------------------------------------\n");
	printf("Discount                            -%d\n",sum/10);
	printf("Grand Total                          %d\n",sum-sum/10);

	}
	if(sum>5000){
	printf("--------------------------------------\n");
	printf("Discount                            -%d\n",(sum*3)/20);
	printf("Grand Total                          %d\n",sum-(sum*3)/20);

	}

}