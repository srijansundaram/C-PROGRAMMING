#include<stdio.h>

int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    
    printf("****Multiplication table of %d in reversed order****\n", a);
    for(int i =10;i;i--){
        printf("%d x %d = %d\n", a, i, a*i);
    }
    return 0;
}
