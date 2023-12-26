#include<stdio.h>

int main(){
    FILE *fptr;
    int id;
    char name[50];
    float salary;
    fptr = fopen ("emp.txt", "w+");
    if (fptr == NULL)
    {
        printf("File doesn't exist");
        return 0;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the ID\n");
        scanf("%d", &id);
        fprintf(fptr, "Id = %d\n", id);
        printf("Enter the Name\n");
        scanf("%s", &name);
        fprintf(fptr, "Name = %s\n", name);
        printf("Enter the salary\n");
        scanf("%f", &salary);
        fprintf(fptr, "Salary = %.2f\n", salary);
    }
    fclose(fptr);
    return 0;
}