#include<stdio.h>

int main(){

    char Name[20] = {'M','D', ' ','S','A','I','F','U','L'};
    printf("%s\n",Name);

    char Name2[20] = "MD Saiful Islam Khan";
    printf("%s\n", Name2);


    //For Input
    char my_name[30];
    printf("What is your name? ");
    scanf("%s",my_name);
    printf("Thank You! %s",my_name);


    return 0;
}
