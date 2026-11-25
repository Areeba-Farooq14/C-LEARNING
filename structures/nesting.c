#include<Stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;

    typedef struct legendarypokemon{
       pokemon normal;
       char ability[10];
    }legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.attack=100;
    mewtwo.normal.hp=150;
    mewtwo.normal.speed=80;
    mewtwo.normal.tier='S';
}