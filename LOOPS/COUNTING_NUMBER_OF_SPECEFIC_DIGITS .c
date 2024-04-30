#include<stdio.h>
int main(){
	int n;
	printf("ENTER A NUMBER: ");
	scanf("%d", &n);
	int x=0,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
	
	while(n>0){
		x=n%10;
		n=n/10;                  //Can be done by switch case also
		if(x==0) a0++;
		if(x==1) a1++;
		if(x==2) a2++;
		if(x==3) a3++;
		if(x==4) a4++;
		if(x==5) a5++;
		if(x==6) a6++;
		if(x==7) a7++;
		if(x==8) a8++;
		if(x==9) a9++;
		
	}
	printf("THE NUMBER 1 ARE: %d\n", a1);
	printf("THE NUMBER 2 ARE: %d\n", a2);
	printf("THE NUMBER 3 ARE: %d\n", a3);
	printf("THE NUMBER 4 ARE: %d\n", a4);
	printf("THE NUMBER 5 ARE: %d\n", a5);
	printf("THE NUMBER 6 ARE: %d\n", a6);
	printf("THE NUMBER 7 ARE: %d\n", a7);
	printf("THE NUMBER 8 ARE: %d\n", a8);
	printf("THE NUMBER 9 ARE: %d\n", a9);
	printf("THE NUMBER 0 ARE: %d\n", a0);
	return 0;
}