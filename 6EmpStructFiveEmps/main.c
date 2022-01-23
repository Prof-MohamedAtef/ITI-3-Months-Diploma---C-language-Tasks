#include <stdio.h>
#include <stdlib.h>


struct Employee {
    int Code;
    char Name[50];
    float Salary;
    float Bonus;
    float Deduction;
};


int main()
{
    struct Employee emp;
    int size=0;
    printf("Enter Number of Employees in your organization ...\n");
    scanf("%d", &size);
    printf("no. of employees is %d \n\n", size);

    struct Employee EmpArr[size];

    for(int i=0; i<size; i++){

        printf("Enter Name of Employee %d ...\n", i+1);
        scanf("%s", &EmpArr[i].Name);
        printf("Enter Code of Employee %d ...\n", i+1);
        scanf("%d", &EmpArr[i].Code);
        printf("Enter Salary of Employee %d...\n", i+1);
        scanf("%f", &EmpArr[i].Salary);
        printf("Enter Bonus of Employee %d...\n", i+1);
        scanf("%f", &EmpArr[i].Bonus);
        printf("Enter Deduction of Employee %d ...\n", i+1);
        scanf("%f", &EmpArr[i].Deduction);

        int NetSalary = EmpArr[i].Salary+EmpArr[i].Bonus-EmpArr[i].Deduction;
        printf("Name of Employee no. %d is: %s \n", i+1, EmpArr[i].Name);
        printf("Code of Employee no. %d is: %d \n", i+1, EmpArr[i].Code);
        printf("Net Salary for Employee no. %d is %d \n\n", i+1, NetSalary);

    }
    return 0;
}
