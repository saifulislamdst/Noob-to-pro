#include<stdio.h>
int main(){
    int day;
    printf("Enter today's day: ");
    scanf("%c",&day);

    if((day== 'F') || (day=='f')){
        printf("This day is time to Refresh!\n",day);
    }
    else {
        printf("Time to work Smartly\n",day);
    }

    int a,b;
    printf("Enter the A value: ");
    scanf("%d",&a);
    printf("Enter the B value: ");
    scanf("%d",&b);

    if(a>b) printf("%d Is Greater than %d\n",a,b);
    else if(a<b) printf("%d Is Greater than %d\n",b,a);
    else printf("Two number is Equal\n");


    getch();
    return 0;
}
