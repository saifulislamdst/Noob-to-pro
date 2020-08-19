#include<stdio.h>
int main(){

    int num1,num2,range;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);

    printf("Enter Limite Time: ");
    scanf("%d",&range);

    int num1_A[range],num2_A[range];


    for(int i=1;i<range;i++){
        num1_A[i] = num1*i;
        num2_A[i] = num2*i;
    }

    for(int j=1;j<range;j++){
        for(int k=1;k<range;k++){
            if(num1_A[j]==num2_A[k]){
                printf("General Multiplier: \t(%d X %d) Or \t(%d X %d) = \t%d\n",j,num1,k,num2,num1_A[j]);
            }
        }
    }






    return 0;
}
