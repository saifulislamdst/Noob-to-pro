#include<stdio.h>

int main(){

    int logence,chocolate;
    printf("enter logance number: ");
    scanf("%d",&logence);
    printf("Enter chocolate number: ");
    scanf("%d",&chocolate);
    int tan;
    for(int i=1;i<=logence;i++){

        tan = logence/i;
        /*if(logence%i==0){
            break;
        }*/
    }

    printf("%d Plate",tan);



    return 0;
}
