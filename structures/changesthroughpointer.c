#include<stdio.h>
#include<string.h>
typedef struct pokemon{ //global declaration 
    int hp;
    int attack;
    char tier;
    char name[60];

}pokemon;
void change(pokemon *p){ //its diff from pikachu here,no changes in pikachu
    // (*p).hp=67;
    p->hp=67;
    (*p).attack=60;
    (*p).tier='B';

    strcpy(p->name,"RAICHU");
    return;
}
int main(){
    // pokemon pikachu;
    // pikachu.hp=100;
    // pikachu.attack=90;
    // pikachu.tier='A';
    pokemon pikachu={100,90,'A',"PIKACHU"}; //we can also give values like this but should follow the sequence of structure
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s",pikachu.name);


}