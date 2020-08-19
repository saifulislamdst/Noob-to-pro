#include<stdio.h>
int main(void){
    int a,b,add,ua,ub;

    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);

    add = a+b;
    ua = add-b;
    ub = add-a;

    printf("Addition: %d\n",add);
    printf("UA: %d\n",ua);
    printf("UB: %d\n",ub);





    return 0;
}
