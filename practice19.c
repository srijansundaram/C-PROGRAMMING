#include<stdio.h>

float average (int a, int b, int c);

int main(){
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("The average of %d, %d and %d is %f\n", a, b, c, average(a, b, c));
    return 0;
}

float average (int a, int b, int c){
    float result;
    result = (float) (a + b + c)/3;
    return result;
}