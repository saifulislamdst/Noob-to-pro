#include<stdio.h>

int main(){

    int a,b,div,vag_a,vag_b;

    printf("Enter Two Number: ");
    scanf("%d%d",&a,&b);

    div = a/b;
    int mod = (int)a%(int)b;
    vag_a = (b*div)+mod;
    vag_b = (a/div);

    printf("Division: %d \nA = %d \nB = %d \nLast Result = %d",div,vag_a,vag_b,mod);



    return 0;

}
