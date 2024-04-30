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
	
	typedef struct LegendaryPokemon{
		pokemon x;
		int specialAttack;
		char ability[20];
	}legpokemon;
	legpokemon mewtwo;
	pokemon pikachu;
	
	mewtwo.x.hp=500;            //Way to access the nested attributes of the structure 
    strcpy(mewtwo.x.name,"MEWTWO");
    mewtwo.specialAttack=5000;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.x.tier='S';
    
    printf("%d",mewtwo.x.hp);
    return 0;
	
	
}