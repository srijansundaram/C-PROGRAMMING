#include<stdio.h>

void printadd(int a);

int main(){
    int i;
    printf("The address of variable i is %u\n", &i);
    printadd(i);
    return 0;
}

void printadd(int a){
    printf("The value of variable a is %u\n", &a);
}