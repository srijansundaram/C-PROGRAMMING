#include<stdio.h>

int main(){
    int MultiplicationTable [3][10];

    for (int i = 0; i < 10; i++)
    {
        MultiplicationTable [0][i] = 2*(i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("2 x %d = %d\n",i+1, MultiplicationTable[0][i]);
    }

    for (int i = 0; i < 10; i++)
    {
        MultiplicationTable [1][i] = 7*(i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("7 x %d = %d\n",i+1, MultiplicationTable[1][i]);
    }

    for (int i = 0; i < 10; i++)
    {
        MultiplicationTable [2][i] = 9*(i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("9 x %d = %d\n",i+1, MultiplicationTable[2][i]);
    }

    return 0;
}