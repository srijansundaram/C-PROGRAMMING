#include<stdio.h>

void encrypt(char *c);
void decrypt(char *c);

int main(){
    char s[34];
    printf("Enter your message: ");
    gets(s);
    // printf("Your message is: %s\n", s);
    encrypt(s);
    printf("Encrypted message is: %s\n", s);
    decrypt(s);
    printf("Decrypted message is: %s\n", s);
    return 0;
}

void encrypt(char *c){
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr +1;
        ptr++;
    }
}

void decrypt(char *c){
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}