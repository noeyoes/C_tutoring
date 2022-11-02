#include <stdio.h>

int main(void){
    double km;
    double mile;


    printf("Please enter kilometers: ");
    scanf( "%lf", &km);

    mile = km / 1.609;

    printf("%0.1lfkm is equal to %0.1lf miles. \n", km, mile);
}