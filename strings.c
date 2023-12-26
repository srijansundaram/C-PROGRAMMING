#include<stdio.h>

int main(){
    // char str[] = {'S', 'R', 'I', 'J', 'A', 'N', '/0'};
    char str[] = "SRIJAN";
    char *ptr = str;

    // while (*ptr != '\0')
    // {
    //     printf("%c", *ptr);
    //     ptr++;
    // }
    
    printf("%s", str);
    return 0;
}