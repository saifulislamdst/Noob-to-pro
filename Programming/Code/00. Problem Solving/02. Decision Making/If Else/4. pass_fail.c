#include<stdio.h>
int main(){
    int mark;
    printf("Enter Your Mark: ");
    scanf("%d",&mark);

    if(mark>100){
        printf("Invalid Mark!");
    }
    else if(mark>=33 && mark<=100){
        printf("Pass");
    }
    else {
        printf("Fail");
    }

    return 0;
}
