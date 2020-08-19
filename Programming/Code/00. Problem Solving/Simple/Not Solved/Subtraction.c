#include<stdio.h>
int main(){
    int a,b,sub,subtraction,subtract;

    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);



    sub = a-b;

    subtraction = b+sub;
    subtract = a-sub;

    /*if(a>sub){
        subtract = a-sub;
    }
    else{
        subtract = sub-a;
    }*/

    printf("Sub: %d\nSubtraction: %d\nSubtract: %d\n",sub,subtraction,subtract);


    getch();
    return 0;
}
