#include<stdio.h>

int main(){
    typedef struct pokemon{ //global declaration 
    int hp;
    int attack;
    char tier;
    char name[60];

}pokemon;
pokemon pikachu;
pikachu.hp=100;
pikachu.attack=180;
pikachu.tier='A';
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
pokemon* x=&pikachu;
(*x).hp=70;
x->attack=90;
printf("%d\n",pikachu.hp);
printf("%d",pikachu.attack);

}