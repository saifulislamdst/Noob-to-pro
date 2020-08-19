#include<stdio.h>
int main(){

    char ch = 'A';
    int r = (int)ch + 10;
    char s = '10';
    printf("%f\n",(float)s);
    printf("%c, %d, %X\n",ch, ch, ch);

    float f = r;
    printf("Float: %f\n", f);

    float a = 2.4f;
    float b = 3.5f;
    float c = 6.5f;

    int result1 = a+b+c;
    printf("Total: %d (No Explicit Conversion)\n", result1);

    int result = (int)a + (int)b + (int)c;
    printf("Tota: %d\n",result);


    int N = 65;
    printf("Letter: %c, %X, %o\n",N,N,N);


    float F = 66.54f;
    printf("Char: %c\n",(int)F);


    int IH = 16;
    printf("Decimal (16) to Hexa (16) %X\n",IH);

    int IO = 8;
    printf("Decimal (8) to Octal (8) %o\n",IO);

    return 0;
}
