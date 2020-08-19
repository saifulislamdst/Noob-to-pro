#include<stdio.h>
#include<stdbool.h>
int main(){

    int num1,num2,num3,range;
    bool False = !false;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("Enter Third Number: ");
    scanf("%d",&num3);

    printf("Enter Limit Time: ");
    scanf("%d",&range);

    int num1_A[range],num2_A[range],num3_A[range];

    for(int i=1;i<range;i++){
        num1_A[i] = num1*i;
        num2_A[i] = num2*i;
        num3_A[i] = num3*i;
    }

    for(int j=1;j<range;j++){
        for(int k=1;k<=j;k++){
            if(num1_A[j]==num2_A[k]){
                //printf("%d\n",num1_A[j]);
                /*if(num2_A[k]==num3_A[k]){
                   printf("%d\n",num2_A[k]);
                }*/
                int compare;
                int dif = num1_A[j]-compare;

                if(1>0){
                    printf("%d\n",dif);
                    break;
                }

            }
        }
    }

    return 0;
}
