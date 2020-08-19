#include<stdio.h>
int main(){

    char ch;
    printf("Enter a Character - ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        char cnvrt = ch+32;
        printf("Lowercase of \"%c\" is - %c\n",ch,cnvrt);
    }
    else if (ch>='a' && ch<='z'){
        char cnvrt = ch-32;
        printf("Uppercase of \"%c\" is - %c\n",ch,cnvrt);
    }
    else {
        printf("Enter a Characteristics Character\n");
    }


    return 0;
}
