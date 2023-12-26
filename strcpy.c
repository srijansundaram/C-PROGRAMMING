#include<stdio.h>
#include<string.h>

int main(){
    char *st = "Srijan"; // this is like source
    char st2[45]; //this is like target
    strcpy(st2, st);
    printf("Now the st2 is %s", st2); // now target store value of source
    return 0;
}