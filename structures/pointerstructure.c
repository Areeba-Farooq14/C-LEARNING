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
    pokemon *x=&pikachu;
      printf("%p\n",x);
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.tier);
  
}