#include<stdio.h>
int main(){
    int grade;
    scanf("%d",&grade);
    if (grade>=90)
        printf("A\n");
        /* end if */
    else if (grade>=80)
        printf("B\n");
        /* end "else-if" */
    else if (grade>=70)
        printf("C\n");
        // end of "Else-If"
    else if (grade>=60)
        printf("D\n");
        // end of "Else-If"
    else
        printf("F\n");
        // end of "else"

    return 0;
}
