#include<stdio.h>
#include<string.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    gets(s);
    printf("Your name is %s\n", s);
    printf("There are total %d characters in your name", strlen(s));
    return 0;
}