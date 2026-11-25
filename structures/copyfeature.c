#include<stdio.h>
#include<strings.h>
int main(){
    typedef struct pokemon
    {
      int hp;
        int speed;
        int attack;
        char tier;
        char name[15]; 
    }pokemon;
    pokemon a,b,c;
a.attack=100;
a.hp=1000;
a.tier='A';
strcpy(a.name,"Blastoise");

b=a; //b copied a but we can still make changes in b by b.property
strcpy(b.name,"charizard");
printf("%s",b.name);
}
