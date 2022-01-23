#include <stdio.h>
#include <stdlib.h>

// single employee

typedef struct Employee{
    int Code;
    char Name[50];
    float Salary;
    float Bonus;
    float Deduction;

};

int main()
{
    struct Employee emp;
    emp.Code=5;
    strcpy(emp.Name,"Mohamed Atef");
    emp.Bonus=350;
    emp.Salary=4000;
    emp.Deduction=108;
    int NetSalary=emp.Salary+emp.Bonus-emp.Deduction;
    printf("Emp code is %d, Name is: %s, and Net Salary is: %d", emp.Code, emp.Name, NetSalary);
    return 0;
}
