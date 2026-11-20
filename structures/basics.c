#include<stdio.h>
int main(){
    // struct pokemon{
    //     int hp;
    //     int speed;
    //     int attack;
    //     char tier; 
    // };
    // struct pokemon pikachu;
    // pikachu.attack=67;
    // pikachu.hp=80;
    // pikachu.speed=90;
    // printf("Enter Tier of Pikachu: ");
    // scanf("%d",&pikachu.tier);
    // printf("%c",pikachu.tier);

    // struct pokemon charizard ;
    // charizard.attack=90;
    // charizard.hp=100;
    // charizard.speed=120;
    // charizard.tier='S';

//we can also declare as
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier; 
    }pikachu , charizard;
    
    struct legendaryPokemon{ //nesting of structures
        int specialAttack;
        struct pokemon x;
    };

    pikachu.attack=67;
    pikachu.hp=80;
    pikachu.speed=90;
    printf("Enter Tier of Pikachu: ");
    scanf("%d",&pikachu.tier);
  

    charizard.attack=90;
    charizard.hp=100;
    charizard.speed=120;
    charizard.tier='S';
      printf("%c",pikachu.tier);


}