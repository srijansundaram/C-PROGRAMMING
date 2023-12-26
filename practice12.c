#include<stdio.h>

int main(){
    int a,b;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d", &b);

    printf("****Multiplication table of %d in normal order****\n", b);
    for(a=1;a<=10;a++){
        printf("%d x %d = %d \n", b,a,b*a);
    }
    return 0;   
}

