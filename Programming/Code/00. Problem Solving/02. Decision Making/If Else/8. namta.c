#include<stdio.h>
int main(){
    printf("Enter a Number for Multiply: ");
    int a;
    scanf("%d",&a);

    for(int i =1;i<=10;i++){
        int mul = a*i;
        printf("%d X %d \t= %d\n",a,i,mul);

    }

    return 0;
}

