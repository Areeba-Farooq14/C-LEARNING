#include<stdio.h>  
int main(){
    typedef struct date{
        int day;
        int month;
        int year;

    }date;
    date a,b;
    a.day=14;
    a.month=4;
    a.year=2008;

    b.day=3;
    b.month=7;
    b.year=2005;

    // if(a.day==b.day)printf("days are same"); //we cant do a==b bec we cant compare userdefined functions
    // else printf("not same");

    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true) printf("the dates are same");
    else printf("dates are not same");


}