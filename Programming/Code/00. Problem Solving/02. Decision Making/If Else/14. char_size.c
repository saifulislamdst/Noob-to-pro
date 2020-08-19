#include<stdio.h>
int main(){
    char ch;
    printf("Enter a char - ");
    scanf("%c",&ch);


    if(ch>=65&&ch<=90){
        printf("You entered Capital character %c\n",ch);
    }
    else if(ch>=97&&ch<=122){
        printf("You Entered Small Character %c\n",ch);
    }
    else{
        printf("you don't enter a character! \nPlease enter a Character->\n");
    }


    return 0;
}
