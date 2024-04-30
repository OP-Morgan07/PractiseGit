#include<stdio.h>
#include<string.h>
typedef struct employee{
	char name[20];
	int age;
	int salary;
	float weight;
	float height;
	char gender[10];
}emp;
void minmum(emp arr[]);
int main(){
	emp arr[3];
	for(int i=0;i<3; i++){
		printf("ENTER YOUR NAME: ");
		scanf(" %[^\n]d", arr[i].name);
		printf("ENTER YOUR AGE: ");
		scanf("%d", &arr[i].age);
		printf("ENTER YOUR SALARY: ");
		scanf("%d", &arr[i].salary);
		printf("ENTER YOUR WEIGHT: ");
		scanf("%f", &arr[i].weight);
		printf("ENTER YOUR HEIGHT : ");
		scanf("%f", &arr[i].height);
		printf("ENTER YOUR GENDER : ");
		scanf(" %[^\n]s", &arr[i].gender);
		printf("\n");
	}
	minmum(arr);
	
}
void minmum(emp arr[]){
	int min=arr[0].salary;
	for(int i=0; i<3; i++){
		if(arr[i].salary>min) min = arr[i].salary;
	}
	printf("%d", min);
	return ;
}