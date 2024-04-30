// IF STRUCTURE IS DECLARED INSIDE THE MAIN FUNCTION IT IS LOCAL TO IT. SO TO USE IT IN FINCTIONS WE NEED TO DECLARE IT GLOBALLY, OUTSIDE THE MAIN FUNCTION.

#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
} pokemon;
void fun(pokemon x);
int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    fun(pikachu);
    return 0;
}
void fun(pokemon x)
{
    printf("%d", x.hp);
    return;
}
