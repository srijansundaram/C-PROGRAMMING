# include<stdio.h>

int main(){
    int length, breadth;
    printf("What is length? \n");
    scanf("%d", &length);
    printf("What is breadth? \n");
    scanf("%d", &breadth);
    printf("The area of given rectangle is %d", length*breadth);
    return 0;
}