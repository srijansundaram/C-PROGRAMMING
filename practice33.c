#include<stdio.h>

int countPositiveNumber(int *arr, int n);
int countNegativeNumber(int *arr, int n);
void printArray(int *arr, int n);

int main(){
    int arr[] = {2, -1, 5, 6, 0, -3 };   
    int n;
    n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    printf("Count of Positive elements = %d\n", countPositiveNumber(arr, n));
    printf("Count of Negative elements = %d\n", countNegativeNumber(arr, n));

    return 0;
}

int countPositiveNumber(int *arr, int n){
    int pos_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
    
            pos_count++;
    }
        return pos_count;
}

int countNegativeNumber(int *arr, int n){
    int neg_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)

            neg_count++;
    }
        return neg_count;
    
}

void printArray(int *arr, int n){
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }   
    printf("\n");
}
