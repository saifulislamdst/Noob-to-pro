#include<stdio.h>
int main(){
    int abs;
    printf("Enter A Value for Absolute Value: ");
    scanf("%d",&abs);


    if(abs<0){
        int value = -1*abs;
        printf("Ans:\nAbsolute Value: %d\n",value);
    }
    else {
        printf("Ans:\nAbsolute Value: %d\n",abs);
    }


    return 0;
}
