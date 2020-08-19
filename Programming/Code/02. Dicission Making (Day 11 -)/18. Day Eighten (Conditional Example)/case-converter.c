#include<stdio.h>
int main(){

    char a;
    printf("Enter a character - ");
    scanf("%c",&a);

    //int ascii=a;
    //printf("%d\n",ascii);
   /* if(a>=97){
        printf("%c\n",a-32);
    }
    else if(a>=65 && a<=90){
        printf("%c\n",a+32);
    }
    else if(a>=48 && a<=57){
            printf("Your Enter Number %c\n",a);
    }
    else{
        printf("You Enter a Special character.\n\n");
        printf("for case convert: Enter a alphabetic Character\n");
    }*/
    printf("\n");

    if(a>='0' && a<='9'){
        printf("you Enter number %c\n",a);
    }
    else if(a>='A' && a<='Z'){
        printf("Lowercase of %c is %c\n",a,a+32);
    }
    else if(a>='a' && a<='z'){
        printf("Uppercase of %c is %c\n",a,a-32);
    }
    else {
        printf("You enter a special Character\n");
    }





    return 0;
}
