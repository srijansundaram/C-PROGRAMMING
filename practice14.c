// Using For Loop:-
#include<stdio.h>

int main(){
    int i, sum=0, n;
    printf("Enter a number.\n");
    scanf("%d", &n);

    for(i=0; i<=n; i++){
        sum +=i;
    }
    printf("The sum of first %d natural number is %d.\n", n, sum);
    return 0;
}