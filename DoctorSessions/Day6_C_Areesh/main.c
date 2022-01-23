#include <stdio.h>
#include <stdlib.h>

///Structure

struct Book   /// User-Defined DataType
{
  int ISBN;
  char Title[20];
  float Price;
};

struct Book Bk;   /// Bk is Global Variable

void test()
{
    Bk.ISBN = 123;
    Bk.Price = 200;
    strcpy(Bk.Title, "test Book");
}

struct Employee   /// 141 byte
{
    int Id, Age;
    char Gender, Name[20], Address[100];
    float Salary, OverTime, Deduct;
};

typedef struct
{
    int X;
    int Y;

}Point2d;


int main()
{
    int x;
    x= 5;

    int x2 = 5;



    Point2d myPt;  ///declaration

    myPt.X = 10;  ///Initialization
    myPt.Y = 15;

    printf("\n X Coordinate of Point2d myPt is : %d", myPt.X);
    printf("\n Y Coordinate of Point2d myPt is : %d", myPt.Y);


     Point2d point2 = {11, 19};  /// declaration & Initialization

     printf("\n X Coordinate of Point2 myPt is : %d", point2.X);
    printf("\n Y Coordinate of Point2 myPt is : %d", point2.Y);


    ///struct Book myBook = {123, "Database Book", 250};

    struct Book myBook = {123," " ,250};

    printf("\n myBook ISBN = %d", myBook.ISBN);    /// Print Values of Book myBook
    printf("\n myBook Title = %s", myBook.Title);
    printf("\n myBook Price = %f", myBook.Price);


    /*

  //int arr[3];

  printf("\n Bk ISBN = %d", Bk.ISBN);    /// Print Values of Book Bk
    printf("\n Bk Title = %s", Bk.Title);
    printf("\n Bk Price = %f", Bk.Price);

 // printf("\n pp.x = %d , pp.y = %d", pp.x, pp.y );
    struct Employee EmpArr[3];

int i;
    for(i=0; i<3; i++)
    {
        printf("\n Enter Employee[%d] ID: ", i+1);
        scanf("%d", &EmpArr[i].Id);

        printf("\n Enter Employee[%d] Age: ", i+1);
        scanf("%d", &EmpArr[i].Age);

        _flushall();
        printf("\n Enter Employee[%d] Gender: ", i+1);
        scanf("%c", &EmpArr[i].Gender);

        _flushall();
        printf("\n Enter Employee[%d] Name: ", i+1);
        gets(EmpArr[i].Name);

        _flushall();
        printf("\n Enter Employee[%d] Address: ", i+1);
        gets(EmpArr[i].Address);

        printf("\n Enter Employee[%d] Salary: ", i+1);
        scanf("%f", &EmpArr[i].Salary);

        printf("\n Enter Employee[%d] OverTime: ", i+1);
        scanf("%f", &EmpArr[i].OverTime);

        printf("\n Enter Employee[%d] Deduct: ", i+1);
        scanf("%f", &EmpArr[i].Deduct);


        float NetSalary = EmpArr[i].Salary + EmpArr[i].OverTime - EmpArr[i].Deduct;

        printf("\n Hello [%s] in our Employee Management System", EmpArr[i].Name);
        printf("\n Your Net Salary = %f", NetSalary);

    }
*/


    /*
    struct Employee Emp;

    printf("\n Enter Employee ID: ");
    scanf("%d", &Emp.Id);

    printf("\n Enter Employee Age: ");
    scanf("%d", &Emp.Age);

    _flushall();
    printf("\n Enter Employee Gender: ");
    scanf("%c", &Emp.Gender);

    _flushall();
    printf("\n Enter Employee Name: ");
    gets(Emp.Name);

    _flushall();
    printf("\n Enter Employee Address: ");
    gets(Emp.Address);

    printf("\n Enter Employee Salary: ");
    scanf("%f", &Emp.Salary);

    printf("\n Enter Employee OverTime: ");
    scanf("%f", &Emp.OverTime);

    printf("\n Enter Employee Deduct: ");
    scanf("%f", &Emp.Deduct);


    float NetSalary = Emp.Salary + Emp.OverTime - Emp.Deduct;

    printf("\n Hello [%s] in our Employee Management System", Emp.Name);
    printf("\n Your Net Salary = %f", NetSalary);
*/


    /*
    int X;
    X = 5;
    printf("\n X = %d", X);

    struct Book B;   /// Declaration of variable of type book

    B.ISBN = 2314;      /// Initialization of Book B members
    strcpy(B.Title, "C# Book");
    B.Price = 120;

    printf("\n Book ISBN = %d", B.ISBN);    /// Print Values of Book B
    printf("\n Book Title = %s", B.Title);
    printf("\n Book Price = %f", B.Price);

 //   test();

    printf("\n Bk ISBN = %d", Bk.ISBN);    /// Print Values of Book Bk
    printf("\n Bk Title = %s", Bk.Title);
    printf("\n Bk Price = %f", Bk.Price);
    */



    return 0;
}

/*
int AddNum (int x, int y);  /// Function Prototype / Signature

int main()
{
   int total;

   total = AddNum(2, 7);  /// Call

   printf("\n Total = %d", total);

    return 0;
}

int AddNum (int x, int y)    /// Function Definition
{
    int Z = x + y;
    return Z;
}
*/

