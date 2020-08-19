#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter Two Number: ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2){
        printf("\nLarge Number is: %d\n", num1);
        printf("Small Number is: %d\n", num2);
    }
    else {
        printf("\nLarge Number is: %d\n", num2);
        printf("Small Number is: %d\n", num1);
    }

    return 0;
}
