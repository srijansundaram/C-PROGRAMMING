#include<stdio.h>

int main(){
    int N = 5;
    int M = 10;
    int *ptr = &N;
    int *ptr1 = &M;

    printf("Pointer ptr before addition is %u \n", ptr);
    ptr = ptr + 10; //Adition of a number to a pointer
    printf("Pointer ptr after addition is %u \n", ptr);

    printf("Pointer ptr1 before subtraction is %u \n", ptr1);
    ptr1 = ptr1 - 10; //Subtraction of a number to a pointer
    printf("Pointer ptr1 after subtraction is %u \n", ptr1);

    printf("ptr = %u, ptr1 = %u\n", ptr, ptr1);
    int x = ptr-ptr1; //Subtraction of one pointer from another
    printf("ptr - ptr1 = %d\n", x);

    if (ptr == ptr1) //Comparision of two pointers
    {
        printf("ptr and ptr1 is equal.\n");
    }
    else
    {
        printf("ptr and ptr1 is not equal.\n");
    }
    
    return 0;
}