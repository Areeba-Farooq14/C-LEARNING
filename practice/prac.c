#include<stdio.h>
int main(){
       char item[50]="";
    float price=0.0f;
    int quantity;
    char currency='$'; 
    float total=0.0f;
 
    
    printf("your item?\n");
    fgets(item,sizeof(item),stdin);
    printf("price of your item:?\n");.


    
    scanf("%.2f",&price);
    printf("quantity\n");
    scanf("%d",&quantity);
    total=price*quantity;
    printf("your bill is %c%f",currency,total);

    
}