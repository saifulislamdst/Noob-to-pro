#include<stdio.h>
int main(){

    int a,b,mul,gun_a,gun_b;

    printf("Enter Two Number: ");
    scanf("%d%d",&a,&b);

    mul = a*b;

    gun_a = mul/b;
    gun_b = mul/a;

    printf("Multiply: %d \nA = %d \nB = %d",mul,gun_a,gun_b);


    return 0;
}
