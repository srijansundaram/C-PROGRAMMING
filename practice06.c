# include<stdio.h>

int main(){
    int num;
    printf("Enter a number \n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d \n", num%97);
    // Second Question:
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3*x/y-z+k;
    printf("The value of result is %d \n", result);
    return 0;
}