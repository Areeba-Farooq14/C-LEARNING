#include<stdio.h>
#include<string.h>
typedef struct pokemon{ //global declaration 
    int hp;
    int attack;
    char tier;
    char name[60];

}pokemon;
void func(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon p){ //its diff from pikachu here,no changes in pikachu
      p.hp=10;
    p.attack=80;
    p.tier='B';
    return;

}
int main(){
    pokemon pikachu;
    pikachu.hp=100;
    pikachu.attack=90;
    pikachu.tier='A';
    change(pikachu);
    // func(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);

}