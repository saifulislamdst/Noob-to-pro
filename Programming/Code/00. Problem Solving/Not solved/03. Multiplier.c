#include<stdio.h>
int main(){

    int a, b,n;
    printf("Enter a pair number: ");
    scanf("%d %d",&a,&b);
    printf("Enter the higher compare: ");
    scanf("%d",&n);
    int A[n],B[n];

    // Used Array for store the every multiply Value
    for(int i =1;i<=n;i++){
        A[i] = a*i;
        B[i] = b*i;
    }

    // printf("%d",A[10]);

    // Relation Betwin Tow Stored multiply Value outer loop
    for(int j = 1;j<=n;j++){
        // Relation for A[j]
        for(int k = 1;k<=n;k++){
            //Relation Betwin B[j] and A[k] inner loop
            if(A[j]==B[k]){
                printf("Multiplier :  %d\n",A[j]);
            }
        }
    }



    getch();
    return 0;
}
