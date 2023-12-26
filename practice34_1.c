#include<stdio.h>

void printTable(int *MultiplicationTable, int num, int n);

int main(){
    int MultiplicationTable[3][10], n1, n2, n3;

    printf("Enter first number: \n");
    scanf("%d", &n1);

    printf("Enter second number: \n");
    scanf("%d", &n2);

    printf("Enter third number: \n");
    scanf("%d", &n3);

    printTable(MultiplicationTable[0], n1, 10);
    printTable(MultiplicationTable[1], n2, 10);
    printTable(MultiplicationTable[2], n3, 10);
    return 0;
}

void printTable(int *MultiplicationTable, int num, int n){
    printf("The multiplication table of %d is: \n", num);
    for (int i = 0; i < n; i++)
    {
        MultiplicationTable[i] = num*(i+1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", num, i+1, MultiplicationTable[i]);
    }
    printf("****************\n");
}