#include<stdio.h>
int factorial(int x);

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The value of factorial %d is %d\n", a, factorial(a));

    return 0;
}

int factorial(int x){
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}