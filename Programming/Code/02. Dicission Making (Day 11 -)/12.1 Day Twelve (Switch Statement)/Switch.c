#include<stdio.h>
int main(){

   /* int a;
    printf("Enter The day Number: ");
    scanf("%d",&a);


    switch (a){
        case 0:
            printf("Saturday");
            break;
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        default:
            printf("You Entered a Wrong Number");
    } // end of " Switch "
*/




    /*============== Work day Or Off day ==================*/

    int day;
    printf("\nEnter the day Number: ");
    scanf("%d",&day);

    switch(day){

        case 0:
        case 6:
            printf("off Day\n");
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Work Day\n");
            break;
        default:
            printf("Wrong Number\n");
            break;
    }


    return 0;
}
