#include<stdio.h>

void slice(char *st, int m, int n);

int main(){
    char st[34];
    int m, n;
    printf("Enter your name(withoutspace): \n");
    gets(st);
    printf("Enter the value for slicing: \n");
    scanf("%d %d", &m, &n);
    printf("Your name is %s\n", st);
    slice(st, m, n);
    printf("Name after slicing is %s", st);
    return 0;
}

void slice(char *st, int m, int n){
    int i =0;
    while ((m+i)<n)
    {
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}