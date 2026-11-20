#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon arr[10];
    arr[0].attack=50; //arr[0],arr[1],.....,arr[9]
    arr[0].hp=100;
    arr[0].speed=30;
    arr[0].tier='A';
    strcpy(arr[0].name,"Charizard");
    
  
    arr[1].attack=60; 
    arr[1].hp=700;
    arr[1].speed=90;
    arr[1].tier='S';
    strcpy(arr[1].name,"Mewto");
  
    arr[2].attack=40;
    arr[2].hp=10;
    arr[2].speed=30;
    arr[2].tier='D';
    strcpy(arr[2].name,"Pikachu");

    for(int i=0;i<=2;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%c\n",arr[i].tier);
    }
}