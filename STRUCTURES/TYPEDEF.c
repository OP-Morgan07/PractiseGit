#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[20];
    } pokemon;
    struct pokemon mewtwo, pikachu, charizard;
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

    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);

    printf("%s\n", charizard.name);
    printf("%d\n", charizard.hp);
    printf("%d\n", charizard.attack);
    printf("%d\n", charizard.speed);
    printf("%c\n", charizard.tier);

    return 0;
}