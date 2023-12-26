#include<stdio.h>

int main(){
    int num1, num2, num3, num4;
    
    printf("Enter the first number\n");
    scanf("%d", &num1);

    printf("Enter the second number\n");
    scanf("%d", &num2);

    printf("Enter the third number\n");
    scanf("%d", &num3);

    printf("Enter the fourth number\n");
    scanf("%d", &num4);

    if(num1>num2 && num1>num3 && num1>num4){
        printf("First number is the greatest.\n");
    }
    else if(num2>num3 && num2>num4){
        printf("Second number is the greatest.\n");
    }
    else if(num3>num4){
        printf("Third number is the greatest.\n");
    }
    else{
        printf("Fourth number is the greatest.\n");
    }
    return 0;
}