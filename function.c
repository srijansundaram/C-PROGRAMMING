#include<stdio.h>
void display(); //Function prototype 

int main(){
    int a;
    printf("Initialising display function\n");
    display();// FUnction Call
    printf("Display functuion finished its work\n");
    return 0;
}
// Function definition
void display(){
    printf("This is display\n");
}