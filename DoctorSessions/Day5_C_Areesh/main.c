#include <stdio.h>
#include <stdlib.h>

/**
return DataType   FunctionName  ( input parameter list: optional )
{
    lines of Code....
}
**/

// Sum (int x = A, int y= B)
// Sum (int x = 2 , int y = 3)

///SumValues ///Pascal Notation
///sumValues ///Camel Case Notation
///Sum_Values

int Sum (int x, int y)    ///Function Declaration
{
    int z;
    z = x + y;              ///Function Body
    //printf("\n Z = %d", z);

    return z;
}

int Subtract (int Num1, int Num2)    ///Function Declaration
{
    int NumRes;
    NumRes = Num1 - Num2;              ///Function Body

    return NumRes;
}

void printSquare(int num)
{
    int res = num * num;
    printf("\n Square of Num = %d", res);
}


void printValue(int num)
{
    printf("\n Value = %d", num);
}


void Divid (int Num1, int Num2)    ///Function Declaration
{
    int Res;
    Res = Num1 / Num2;              ///Function Body

    printValue(Res);
}


int var = 10;  ///Global var

void fun(int num)
{
	int x;  //valid statement
	x = 10;

	var = 100;
	printf("\nVar = %d", var);
}

int main()
{
/*
    int x, y, z;

    x=6;
    y=5;

    z = x + y;

    printf("\n Z = %d", z);



    x=3;
    y=4;

    z = x + y;

    printf("\n Z = %d", z);


    x=2;
    y=-6;

    z = x + y;

    printf("\n Z = %d", z);

*/

/*
  int A, B, C;

    A=2;
    B=3;

   C = Sum (A, B);               ///Function Call  "Call by Value"

   printf("\n Result = %d", C);


   A=7;
   B=8;

   C = Sum (A, B);   ///Function Call

   printf("\n Result = %d", C);

   A = 9;
   B = 5;
   C = Subtract(A, B);

   printf("\n Result = %d", C);

*/
   /**
   int X = 3;
   int Y = printSquare(X);
   printf("\n Square of X = %d", Y);
    **/
/*
    int X = 3;
   printSquare(X);

  */

/*
  int A, B;

    A=6;
    B=2;

    Divid(A, B);

    for(i=0; i<5; i++)
    {
       int x;

    }
*/


    int var = 300;  /// Local var
    printf("\nVar = %d", var);  ///will print value of var local

     int x = 2;
     int i;

	for(i=0; i<3; i++)
	{
		/// int x  = 5;   //Error
		x = 20;
	}

    return 0;
}
