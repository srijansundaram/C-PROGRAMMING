#include<stdio.h>
#include<string.h>
struct employee
{
    int emp_id;
    char emp_name[50];
};

int main(){
    int i;
    struct employee emp[5];
    printf("Enter the record of employee\n");
    for ( i = 0; i < 1; i++)
    {
        printf("Enter employee ID\n");
        scanf("%d", &emp[i].emp_id);
        printf("Enter employee name\n");
        scanf("%s", &emp[i].emp_name);
    }
    printf("Employee information\n");
    for ( i = 0; i < 1; i++)
    {
        printf("Emp_ID: %d, Emp_name: %s\n", emp[i].emp_id, emp[i].emp_name);
    }
    
    
    return 0;
}


