#include<stdio.h>
// #include<string.h>

// void swap(int *a, int *b);
// int factorial(int x);
// struct employee
// {
//     int emp_id; 
//     char emp_name[50];
//     float emp_salary;
// };

int main(){
    // int age, rating, i=1, a, b = 3, c = 4, d= 4, j;

    // printf("Enter your age: ");
    // scanf("%d", &age);
    // if (age < 18)
    // {
    //     printf("You are Underage. You can't drive.");
    // }
    
    // else if (age >= 18 && age <= 70)
    // {
    //     printf("You can drive as you are of %d years old\n", age);
    // }

    // else 
    // {
    //     printf("Your age is %d so you cannot drive\n", age);
    // }

    // printf("Enter your rating (1-5)");
    // scanf("%d", &rating);

    // switch (rating)
    // {
    // case 1:
    //     printf("You rated us could be better");
    //     break;
    // case 2:
    //     printf("You rated us good");
    //     break;
    // case 3:
    //     printf("You rated us very good");
    //     break;
    // case 4:
    //     printf("You rated us fantastic");
    //     break;
    // case 5:
    //     printf("You rated us phenomenal");
    //     break;
    // default:
    //     printf("Invalid rating");
    //     break;
    // }

    // do
    // {
    //     printf("15 x %d = %d\n", i, 15*i);
    //     i++;
    // } while (i <= 10);
    
    // for ( i = 1; i <= 10; i++)
    // {
    //     printf("15 x %d = %d\n", i, 15*i);
    // }

    // while (i<=10)
    // {
    //     printf("15 x %d = %d\n", i, 15*i);
    //     i++;
    // }
    
    // printf("Enter a number whose factorial you want: ");
    // scanf("%d", &a);
    // printf("The factorial of %d is %d", a, factorial(a));

    // printf("The value of b and c before swap is %d and %d respectively.\n", b,c);
    // swap(&b, &c);
    // printf("The value of b and c after swap is %d and %d respectively.\n", b,c);

    // int *ptr = &d;
    // printf("The value of pointer ptr is %u\n", ptr);
    // ptr++;
    // printf("The value of pointer ptr after increment is %u\n", ptr);
    // ptr--;
    // printf("The value of pointer ptr after decrement is %u\n", ptr);

    // struct employee emp [3];
    // printf("Enter the record of employee\n");
    // for ( j = 0; j < 3; j++)
    // {
    //     printf("Enter employee ID\n");
    //     scanf("%d", &emp[j].emp_id);
    //     printf("Enter employee name\n");
    //     scanf("%s", &emp[j].emp_name);
    //     printf("Enter employee salary\n");
    //     scanf("%f", &emp[j].emp_salary);
    // }
    // printf("Employee Information\n");
    // for (j = 0; j < 3; j++)
    // {
    //     printf("Employee name : %s, Employee ID : %d, Employee Salary : %f\n", emp[j].emp_name, emp[j].emp_id, emp[j].emp_salary);
    // }
    // int n_students, n_subjects;
    // int marks[3][5];
    // printf("Enter number of students\n");
    // scanf("%d", &n_students);
    // printf("Enter number of subjects\n");
    // scanf("%d", &n_subjects);
    // for (int k = 0; k < n_students; k++)
    // {
    //     for (int l = 0; l < n_subjects; l++)
    //     {
    //         printf("Enter the marks of student %d in subject %d", k+1, l+1);
    //         scanf("%d", &marks[k][l]);
    //     }
    // }
    // for (int k = 0; k < n_students; k++)
    // {
    //     for (int l = 0; l < n_subjects; l++)
    //     {
    //         printf("The marks of student %d in subject %d is %d\n", k+1, l+1, marks[k][l]);
    //     }
        
    // }
    // int marks [4];
    // int *ptr;
    // ptr = &marks[0];

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the marks of student %d\n", i+1);
    //     scanf("%d", ptr);
    //     ptr++;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The marks of student %d is %d\n", i+1, marks[i]);
    // }
    
    int salary[5];
    int *sadd;
    sadd = & salary[0];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter salary of employee %d", i+1);
        scanf("%d", sadd);
        sadd++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Salary of employee %d is %d", i+1, salary[i]);
    }
    
    
    

    return 0;   
}

// int factorial(int x){
//     if (x == 1 || x == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return x * factorial(x-1);
//     }
// }

// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }