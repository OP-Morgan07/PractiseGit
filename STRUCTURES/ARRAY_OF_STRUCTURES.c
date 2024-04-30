#include<stdio.h>
#include<string.h>
int main(){
	typedef struct pokemon{
		int hp;
		int attack;
		int speed;
		char tier;
		char name[20];
	}pokemon;
	
	pokemon arr[3];
	arr[0].hp=50;
	arr[0].attack=150;
	arr[0].speed=250;
	arr[0].tier='A';
	strcpy(arr[0].name, "PIKACHU");
	
	arr[1].hp=504;
	arr[1].attack=1150;
	arr[1].speed=2350;
	arr[1].tier='S';
	strcpy(arr[1].name, "MEWTWO");
	
	arr[2].hp=505;
	arr[2].attack=1350;
	arr[2].speed=2550;
	arr[2].tier='B';
	strcpy(arr[2].name, "CHARIZARD");
	
	for(int i=0; i<3; i++){
		 printf("%s\n", arr[i].name);
		 printf("%d\n", arr[i].hp);
		 printf("%d\n", arr[i].attack);
		 printf("%d\n", arr[i].speed);
		 printf("%c\n", arr[i].tier);
	}
	return 0;
}
