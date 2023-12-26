#include<stdio.h>
float force(float mass);

int main(){
    float mass;
    printf("Enter the mass:\n");
    scanf("%f", &mass);

    printf("The value of force in Newton is %f \n", force(mass));
    return 0;
}

float force(float mass){
    float result = mass * 9.8; 
    return result; 

}