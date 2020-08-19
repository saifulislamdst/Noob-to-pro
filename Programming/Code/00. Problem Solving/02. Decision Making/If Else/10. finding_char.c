#include<stdio.h>
int main(){

    int ch;
    printf("Enter a character - ");
    scanf("%c",&ch);

    if(ch>=48 && ch<=57){
        printf("%c is a Number.\n",ch);
    }
    else if(ch>=65 && ch<=90){
        printf("%c is an Uppercase Character.\n",ch);
    }
    else if(ch>=97 && ch<=122){
        printf("%c is a Lowercase Character.\n",ch);
    }
    else {
        printf("%c is a Special Character.\n",ch);
    }


    return 0;
}
