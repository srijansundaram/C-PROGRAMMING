#include<stdio.h>

void sumAndavg(int a, int b, int *sum, float *avg);

int main(){
    int i = 3, j = 6, sum;
    float avg;
    sumAndavg(i, j, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %f \n", avg);

    return 0;
}

void sumAndavg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float) *sum / 2;
} 