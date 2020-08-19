#include<stdio.h>
int main(void){
    int mark;
    printf("Enter Your Mark: ");
    scanf("%d",&mark);

    if(mark>100 || mark<0){
        //printf("\nInvalid Mark!\nPleas Enter Your Accurate Mark!\n");
        if(mark<0){
            printf("\nMark Can't Be a Negative Number!\nPlease Enter Your Accurate Number\n");
        } // if mark is less then 0
        else if(mark>100){
            printf("\nInvalid Mark!\n");
            printf("\"Note: if Your Seasonal Mark is Greater then 100\nthen tell the programmer \nfor add your mark to a condition.\"\n");
        }

    } // Invalid Mark
    else if(mark>=90 && mark<=100){
        if (mark==100){
            printf("\nGolden A+\n");
        } // Golden A+
        else {
            printf("\nYour Letter Grade: ( A+ )\n");
        }
    }  // under 90 to 100
    else if(mark>=80){
        printf("\nYour Letter Grade: ( A )\n");
    } // under 80
    else if(mark>=70){
        printf("\nYour Letter Grade: ( A- )\n");
    } // under 70
    else if(mark>=60){
        printf("\nYour Letter Grade: ( B )\n");
    } // under 60
    else if(mark>=50){
        printf("\nYour Letter Grade: ( C )\n");
    } // under 50
    else if(mark>=33){
        printf("\nYour Letter Grade: ( D )\n");
    } // under 33
    else {
        printf("\nYou'r Fail! \nTry Smartly & Hardly Next Time!\n");
    }


    return 0;
}
