#include<stdio.h>

float fahrenheit(float a);

int main(){

    float a, b;

    printf("Enter Temperature in Celsius: \n");
    scanf("%f", &a);

    b = fahrenheit(a);

    printf("%f celsius = %f fahrenheit.\n", a, b);
    
    return 0;
}

float fahrenheit(float a){
    return ((a * 9.0 / 5.0) + 32.0);
}