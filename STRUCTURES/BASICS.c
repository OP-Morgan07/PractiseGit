#include <stdio.h>
#include <string.h>
int main()
{
    struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[20];
    } pikachu, charizard;  // FIRST WAY TO DECLARE STRUCT VARIABLES
    struct pokemon mewtwo; // SECOND WAY TP DECLARE STRUCT VARIABLES
    pikachu.hp = 50;
    pikachu.attack = 100;
    pikachu.speed = 150;
    pikachu.tier = 'a';
    strcpy(pikachu.name, "Pikachu");

    charizard.hp = 70;
    charizard.attack = 200;
    charizard.speed = 160;
    charizard.tier = 'b';
    strcpy(charizard.name, "charizard");

    mewtwo.hp = 500;
    mewtwo.attack = 1080;
    mewtwo.speed = 1507;
    mewtwo.tier = 's';
    strcpy(mewtwo.name, "mewtwo");

    printf("%s\n", mewtwo.name);
    printf("%d\n", mewtwo.hp);
    printf("%d\n", mewtwo.attack);
    printf("%d\n", mewtwo.speed);
    printf("%c\n", mewtwo.tier);

    return 0;
}