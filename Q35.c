#include<stdio.h>

struct Employee_info
{
     char name[50];
     int id;
     float salary;
};

int main(){
     struct Employee_info emp;
     printf("Enter Employee Name: ");
     scanf("%s", &emp.name);
     printf("\n Enter Employee ID: ");
     scanf("%d", &emp.id);
     printf("\nEnter Employee Salary: ");
     scanf("%f", &emp.salary);

     printf("\n Displaying employee Details:\n");
     printf("Employee Name: %s\n", emp.name);
     printf("Employee ID: %d\n", emp.id);
     printf("Employee Salary: %.2f\n", emp.salary);

     return 0;
}