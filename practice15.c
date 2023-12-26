#include<stdio.h>

int main(){
    int i=0, sum=0, n;
    printf("Enter a number.\n");
    scanf("%d", &n);

    while(i<=n){
        sum +=i;
        i++;
    }
    printf("The sum of first %d natural number is %d.\n", n, sum);
    return 0;
}