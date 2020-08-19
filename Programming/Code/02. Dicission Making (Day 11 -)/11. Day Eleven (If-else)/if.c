#include<stdio.h>
int main(){
    int temperature;
    printf("Enter Temprature Value: ");
    scanf("%d",&temperature);

    if(temperature > 30){
        printf("Weather is too Hot!");
    }
    if (temperature < 30){
        printf("Weather is too Cool!");
    }

    int x=0;
    if(x){
        printf("%d",1);
    }

    getchar();
    return 0;
}
