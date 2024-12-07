#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[100];
    }legendarypokemon;
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    }godpokemon;
    
    godpokemon arceus;
    arceus.specialattack=300;
    strcpy(arceus.legend.ability, "Turns anyone into stone");
    arceus.legend.normal.hp=500;
    arceus.legend.normal.speed=450;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.attack=180;
    mewtwo.normal.hp=150;
    mewtwo.normal.tier='s';

    printf("%s",arceus.legend.ability);
    return 0;
}