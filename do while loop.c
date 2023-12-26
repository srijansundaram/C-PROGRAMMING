#include<stdio.h>

int main(){
    int i =1, n;
    
    printf("Enter a number : \n");
    scanf("%d", &n);

    do
    {
        printf("%d x %d = %d \n", n, i, n*i);
        i++;
    } while (i<=10);
    
    return 0;
}