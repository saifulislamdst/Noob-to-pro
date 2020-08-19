#include<stdio.h>
int main(){
    // hight as centimeter
    printf("\a"); // For Alert sound
    printf("default hight:-\n\tbis\t: 3cm and\n\tchoco\t: 4cm\n");
    int biscuit_hight = 3, choclet_hight = 4, pis; // Default Value Specifie
    printf("pises: ");
    scanf("%d",&pis); // How many biscuit and chocolate you have


    int serial_biscuite_hight[pis],serial_chocolate_hight[pis];
    //biscuit and chocolate pis onujaye array index ba element nibo
    // Array for store every value when you put bis and chocolate one by one



    // store serial hight of biscuit and chocolate
    // serial er defination holo- ( "ekti ekti kore sobgulo element er total hight." )
    for(int i = 1;i<=pis;i++){
        serial_biscuite_hight[i] = biscuit_hight*i; // total biscuit Hight
        serial_chocolate_hight[i] = choclet_hight*i; // total Chocolate Hight
    }



    // This for loop take serial_biscuite_hight[j] -- j++. -line 20
    // orthat, ekti ekti kore biscuit rakhle tar hight
    for(int j = 1; j<=pis;j++){

        // This for loop take serial_chocolate_hight[k] -- j++. -line 21
        // orthat, ekti ekti kore biscuit rakhle tar hight
        for(int k = 1;k<=pis;k++){

            // compare tow array for solution
            if(serial_biscuite_hight[j]==serial_chocolate_hight[k]){
                printf("\aBis and Choco same Hight in %d centimeter\n \tBiscuit pises\t: %d\n \tChocolate pises\t: %d\n",serial_chocolate_hight[k],j,k);
                // printf("General Distance: %d",serial_biscuite_hight[j]-serial_biscuite_hight[j+1]);
            }
        }

    }





    return 0;
}
