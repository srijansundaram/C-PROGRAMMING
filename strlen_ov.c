#include<stdio.h>

int strlen(char *st);

int main(){
    char s[34];
    printf("Enter your name: ");
    gets(s);
    printf("Your name is %s\n", s);
    printf("There are total %d characters in your name", strlen(s));
    return 0;
}

int strlen(char *st){
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}