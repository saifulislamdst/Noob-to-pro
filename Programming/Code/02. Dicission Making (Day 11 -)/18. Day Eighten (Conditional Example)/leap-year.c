#include<stdio.h>
int main(){

    int yr;
    printf("Enter a year - ");
    scanf("%d",&yr);

    /*
    if(yr%4==0 && yr%100!=0){
        printf("Yes This Is a Leap Year\n");
    }
    else if(yr%400==0){
        printf("Yes This Is a Leap Year\n");
    }
    else {
        printf("Not a Leap Year!\n");
    }
    */


    int is_leap_year = 0;
    /*
    if(yr%4==0){
        if(yr%100==0){
            if(yr%400==0){
                is_leap_year=1;
            }
            else {
                is_leap_year=0;
            }
        }
        else {
            is_leap_year=1;
        }
    }
    else {
        is_leap_year=0;
    }

    */

    if((yr%4==0 && yr%100!=0) || (yr%400==0)){
        is_leap_year=1;
    }



    if(is_leap_year){
        printf("%d Is A Leap Year\n",yr);
    }
    else {
        printf("%d Is Not A LeaP Year\n",yr);
    }



    return 0;
}
