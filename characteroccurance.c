#include<stdio.h>

int occurence(char st[], char c);

int main(){
    char st[] = "SrijanSundaram";
    int count = occurence(st, 'r');
    printf("Occurences = %d", count);
    return 0;
}

int occurence(char st[], char c){
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}