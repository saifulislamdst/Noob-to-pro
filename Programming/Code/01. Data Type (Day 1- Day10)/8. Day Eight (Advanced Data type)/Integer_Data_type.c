#include<stdio.h>
int main(void){
    /*****   INTEGER DATA TYPE  ********/
    printf("Signed Integer Data\n");
    // Short - %d, %hd, %hi
    short a = 45;
    printf("I am Shrot - %hd\n",a);


    // int - %d %i (Formate Specifier)
    int b = 12;
    printf("I am Int - %i\n",b);


    // long int - %ld %li
    long c = 1234567890L;
    printf("I am long int - %li\n",c);


    // long long int - %lld %lli
    long long d = 987654321094;
    printf("I am long long int - %lli\n",d);


    // Octal int - %o
    int o = 07777;
    printf("I am octal int - %o\n", o);
    printf("I am Decimal of Octal - %d\n",o);


    // Hexadecimal int - %X %x
    int h = 0X890fff;
    printf("I am Hexadecimal int - %X\n",h);
    printf("I am Decimal of Hexa - %d\n",h);


    /******  UNSIGNED INTEGER DATA  *******/

    printf("==================================================================\nUnsigned Integer Data Type\n");

    // Unsigned Short - %hu
    unsigned short us = 12312;
    printf("I am Unsigned Short - %hu\n",us);


    // Unsigned Int - %u
    unsigned int ui = 12343;
    printf("I am Unsigned int - %u\n",ui);


    // Unsigned Long - %lu
    unsigned long ul = 123453;
    printf("I am Unsigned Long - %lu\n",ul);


    // Unsigned Long Long - %llu
    unsigned long long ull = 1234345857524;
    printf("I am Unsigned Long Long - %llu\n",ull);


    unsigned short Negetive = -2;
    printf("Negetive Unsigned - %hu",Negetive);


    getch();
    return 0;
}
