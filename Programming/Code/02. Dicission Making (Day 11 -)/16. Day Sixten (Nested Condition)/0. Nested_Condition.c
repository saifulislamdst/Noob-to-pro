#include<stdio.h>
#include<stdbool.h>


int main(){

    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);

    bool is_have_id = false;
    bool is_have_passport = false;


    if(age>=18){
        if(is_have_id || is_have_passport){
            printf("Yes, you can join!\n");
        }
        else {
            printf("Sorry, You have not any of those.\n");
        }
    }
    else {
        printf("No, You Can't join!\n");
    }


    return 0;
}
