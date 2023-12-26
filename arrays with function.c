#include<stdio.h>

void printArray(int *ptr, int n);

int main(){
    int arr[] = {12, 13, 85, 78, 14, 46, 25};
    printArray(arr, 7);
    return 0;
}

void printArray(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1, *(ptr+i));
    }
    
}