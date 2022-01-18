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

    //char* colors[5]={"33m", "34m","32m", "35m","31m"};
    //char color_destination[]="\033[0;";
    struct Employee emp;
    int size=5;
    //printf("Enter Number of Employees in your organization ...\n");
    //scanf("%d", &size);

    struct Employee EmpArr[size];

    for(int i=0; i<5; i++){
        //strcat(color_destination, "\033[0;37m");
       // printf(color_destination);
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

       // strcat(color_destination,colors[i]);
        //printf(color_destination);
        textcolor(4);
        int NetSalary = EmpArr[i].Salary+EmpArr[i].Bonus-EmpArr[i].Deduction;
        printf("Name of Employee no. %d is: %s \n", i+1, EmpArr[i].Name);
        printf("Code of Employee no. %d is: %d \n", i+1, EmpArr[i].Code);
        printf("Net Salary for Employee no. %d is %d \n", i+1, NetSalary);






    }
    return 0;
}
