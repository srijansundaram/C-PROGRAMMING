#include<stdio.h>

void change(int *a);

int main(){
    int a = 4;
    change(&a);
    printf("10 times of the given number is %d \n", a);
    return 0;
}

void change(int *a){
    *a = *a * 10;
}