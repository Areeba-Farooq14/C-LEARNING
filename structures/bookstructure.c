   #include<stdio.h>
   #include<string.h>
   int main(){
   struct books{
        int noofpages;
        float price;
         char name[50]; //error
    }a,b;
    a.noofpages=100;
    a.price=450.89;
  //  a.name="Game OF thrones"; error
  strcpy(a.name,"Game Of Thrones");

    printf("%d\n",a.noofpages);
    printf("%f\n",a.price);
    printf("%s\n   ",a.name); 
   }