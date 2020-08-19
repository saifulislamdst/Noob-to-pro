#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    int picked_number, given_number;
    time_t t;


    srand((unsigned)time(&t));
    picked_number=rand()% 10 + 1;


    printf("Enter Your Number - ");
    scanf("%d",&given_number);


    if(picked_number==given_number){
        printf("You are WIN!!!\n");
    }
    else {
        printf("You lost! ^_^ \n");
        printf("Number was %d\n",picked_number);
    }



    return 0;
}
