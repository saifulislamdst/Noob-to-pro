#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){

    int gause_number,picked_number;
    time_t t;

    srand((unsigned)time(&t));

    picked_number=rand()%10+1;
    printf("Enter a number - ");
    scanf("%d",&gause_number);

    if(gause_number==picked_number){
        printf("You are WIN!!!\n");
    }
    else{
        printf("You lose!\npicked number was - %d\n", picked_number);
    }


    return 0;
}
