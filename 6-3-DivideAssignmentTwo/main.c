#include <stdio.h>
#include <stdlib.h>

int Size=0;



struct Employee{
    int code;
    char name[50];
    float salary;
    float bonus;
    float deduction;
    float netSalary;
};

struct Employee emp;
struct Employee AddEmployee();

int main()
{


    printf("Enter number of your Employees in your organization ...\n");
    scanf("%d", &Size);
    //struct Employee emp[Size];
    printf("Number of employees is %d ... \n\n", Size);
    for(int i=0; i< Size; i++){
        emp = AddEmployee(Size);
        displayEmployee(emp, i);
    }

    return 0;
}

struct Employee AddEmployee(int size){
    struct Employee EmpArr[size];

    for(int i=0; i<size; i++){
        printf("Enter Name of Employee %d ...\n", i+1);
        scanf("%s", &EmpArr[i].name);
        printf("Enter Code of Employee %d ...\n", i+1);
        scanf("%d", &EmpArr[i].code);
        printf("Enter Salary of Employee %d...\n", i+1);
        scanf("%f", &EmpArr[i].salary);
        printf("Enter Bonus of Employee %d...\n", i+1);
        scanf("%f", &EmpArr[i].bonus);
        printf("Enter Deduction of Employee %d ...\n", i+1);
        scanf("%f", &EmpArr[i].deduction);
        int NetSalary = EmpArr[i].salary+EmpArr[i].bonus-EmpArr[i].deduction;
        EmpArr[i].netSalary=NetSalary;
        return emp=EmpArr[i];
    }

    /*for(int i=0; i<sizeof(EmpArr); i++){
        emp= EmpArr[i];
    }*/
    return emp;
}

void displayEmployee(struct Employee emp, int i){
        printf("Name of Employee no. %d is: %s \n", i+1, emp.name);
        printf("Code of Employee no. %d is: %d \n", i+1, emp.code);
        printf("Net Salary for Employee no. %d is %d \n\n", i+1, emp.netSalary);
}
