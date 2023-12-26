#include<stdio.h>

struct vector{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
        result.x = v1.x + v2.x;
        result.y = v1.y + v2.y;
    return result;  
};


int main(){
    struct vector v1, v2, sum;
    
        v1.x = 34;
        v1.y = 54;

        v2.x = 44;
        v2.y = 64;

        sum = sumVector(v1, v2);
        printf("X dim of result is %d and Y dim of result is %d\n", sum.x, sum.y);

    return 0;
}