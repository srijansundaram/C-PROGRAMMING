#include<stdio.h>
void multiplicationtable();
int a,b;
int main(){
    

    printf("Enter a number :\n");
    scanf("%d", &b);
    
    multiplicationtable();

    return 0;
}
void multiplicationtable(){
     for (a = 1; a <= 10; a++)
    {
        printf("%d x %d = %d \n", b, a, b*a);
    }
}