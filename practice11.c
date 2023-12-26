#include<stdio.h>

int main(){
    // 97-122 = a-z
    char ch;
    printf("Enter the character.\n");
    scanf("%c", &ch);

    if(ch<=122 && ch>=97){
        printf("Entered character %c is a lowercase character.\n", ch);
    }
    else{
        printf("Entered character %c is not a lowercase character.\n", ch);
    }
    return 0;
}