#include<stdio.h>

int main(){
    int rating;
    printf("Enter you rating (1-5)\n");
    scanf("%d", &rating);
    switch (rating){
        case 1:
            printf("Your rating is Bad\n");
            break;
        case 2:
            printf("Your rating is Average\n");
            break;
        case 3:
            printf("Your rating is Good\n");
            break;
        case 4:
            printf("Your rating is Fantastic\n");
            break;
        case 5:
            printf("Your rating is Excellent\n");
            break;
        // default :
        //     printf("Invalid rating!");
        //     break;
    }
return 0;
}