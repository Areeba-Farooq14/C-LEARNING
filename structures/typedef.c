#include<stdio.h>
#include<string.h>
  typedef float realnumber; //before main so its acessible everywhere
int main(){
       typedef struct books{
        int noofpages;
        float price;
         char name[50]; //error
    } book;
    book a;
    a.noofpages=100;
    a.price=450.89;
  //  a.name="Game OF thrones"; error
  strcpy(a.name,"Game Of Thrones");

    printf("%d\n",a.noofpages);
    printf("%f\n",a.price);
    printf("%s\n   ",a.name); 
   }