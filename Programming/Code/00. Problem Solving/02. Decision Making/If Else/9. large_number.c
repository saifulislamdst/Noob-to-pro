#include<stdio.h>

int main(){

    int a, b, c;
    printf("Enter value for A - ");
    scanf("%d",&a);

    printf("\nEnter Value for B - ");
    scanf("%d",&b);

    printf("\nEnter Value for C - ");
    scanf("%d",&c);


    printf("\n\n\t===============  Output ================\n");

    if(a>b && a>c){
        printf("\nBig number is - %d (A)\n",a);
        if(b>c){
            printf("Second Big Number is - %d (B)\n",b);
            printf("Small Number is - %d (C)\n",c);
        }
        else{
            printf("Second Big Number is - %d (C)\n",c);
            printf("Small Number is - %d (B)\n",b);
        }
    }
    else if(b>c){
        printf("\nBig number is - %d (B)\n",b);
        if(a>c){
            printf("Second Big Number is - %d (A)\n",a);
            printf("Small Number is - %d (C)\n",c);
        }
        else{
            printf("Second Big Number is - %d (C)\n",c);
            printf("Small Number is - %d (A)\n",a);
        }
    }
    else {
        printf("\nBig Number is - %d (C)\n",c);
        if(a>b){
            printf("Second Big Number is - %d (A)\n",a);
            printf("Small Number is - %d (B)\n",b);
        }
        else {
            printf("Second Big Number is - %d (B)\n",b);
            printf("Small Number is - %d (A)\n",a);
        }
    }


    return 0;
}
