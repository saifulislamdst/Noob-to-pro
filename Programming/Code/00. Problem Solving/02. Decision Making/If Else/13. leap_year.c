#include<stdio.h>
#include<stdbool.h>
int main(){

    int year;
    bool is_leap_year = false;
    printf("Enter a year - ");
    scanf("%d",&year);


    if((year%4==0 && year%100!=0) || (year%400==0) ){
        is_leap_year = true;
    }
    else {
        is_leap_year = false;
    }

    if(is_leap_year){
        printf("This is a Leap Year!!!\n");
    }
    else {
        printf("Common Year. (^_^)\n");
    }

    return 0;
}
