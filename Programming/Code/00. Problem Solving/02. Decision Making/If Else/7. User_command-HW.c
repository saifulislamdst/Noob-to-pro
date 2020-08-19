#include <stdio.h>

int main(){

    int num1, num2;
    char op;
    printf("Enter Two Number: ");
    scanf("%d %d",&num1,&num2);

    int sum = num1+num2;
    int sub = num1-num2;
    int mul = num1*num2;
    int div = num1/num2;

    /*
    int sum = num1+num2;
    printf("%d",sum);
    */
    printf("\nEnter which Operation You want to do-(EX: -,+,*,/) : ");
    scanf("%s",&op);


/*

    if(op == '+'){

        printf("Summation: %d\n",sum);
    }
    else if (op == '-'){

        printf("Subtraction: %d\n",sub);
    }
    else if (op == '*'){

        printf("Multiplication: %d\n",mul);
    }
    else if (op == '/' ){

        printf("Division: %d\n",div);
    }
   else {
        printf("ERROR\n\a");
        printf("Enter Recomand Operation as Like Example. ( Ex: -,+,/,* )\n");
    }

*/

    switch (op){

        case '+':

            printf("Summation: %d\n",sum);
            break;

        case '-':

            printf("Subtraction: %d\n",sub);
            break;

        case '*':

            printf("Multiplication: %d\n",mul);
            break;

        case '/':

            printf("Division: %d\n",div);
            break;

        default:
            printf("ERROR\n\a");
            printf("Enter Recomand Operation as Like Example. ( Ex: -,+,/,* )\n");

    }




    return 0;
}
