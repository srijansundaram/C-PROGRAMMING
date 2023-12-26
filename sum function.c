#include<stdio.h>

int sum(int a, int b);

int main(){
    int c;
    c = sum(54, 45);
    printf("The value of C is %d\n", c);
    return 0;
}
 
int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}