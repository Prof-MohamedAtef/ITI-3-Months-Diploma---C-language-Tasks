#include <stdio.h>
#include <stdlib.h>

struct Book
{
    int ISBN;
    char Title[20];
    float Price;
};


/*
void SwapIntegers(int X, int Y)
{
    int temp;
    temp = X;
    X = Y;
    Y = temp;
}
*/

void SwapIntegers(int* X, int* Y)
{
    int temp;
    temp = *X;
    *X = *Y;
    *Y = temp;
}

int main()
{
    int i, size;
    printf("\n please enter Book Array size: ");
    scanf("%d", &size);

    struct Book* BkPtr =  malloc(size * sizeof(struct Book));

    ///*BkPtr.ISBN = 123;
    ///strcpy(*BkPtr.Title, "C# Book");
    ///*BkPtr.Price = 200;

    /// Struct . Member
    /// Struct* -> Member

    ///Case of 1 Book:
    BkPtr->ISBN = 123;
    strcpy(BkPtr->Title, "C# Book");
    BkPtr->Price = 200;

    printf("\n Book ISBN = %d", BkPtr->ISBN);
    printf("\n Book Title = %s", BkPtr->Title);
    printf("\n Book Price = %f", BkPtr->Price);

    /*
    ///Case of multiple Books:
    for(i=0; i<size; i++)
    {
        BkPtr[i].ISBN = 123;
        strcpy(BkPtr[i].Title, "C# Book");
        BkPtr[i].Price = 200;

        printf("\n Book ISBN = %d", BkPtr[i].ISBN);
        printf("\n Book Title = %s", BkPtr[i].Title);
        printf("\n Book Price = %f", BkPtr[i].Price);
    }
    */


    /*

    int i, size;
    ///int Arr[100];

    printf("\n please enter array size: ");
    scanf("%d", &size);

    int *Ptr = malloc ( size * sizeof(int));

    for(i=0; i<size; i++)
    {
        printf("\n Enter Arr Element No[%d]:", i+1);
        ///scanf("%d", &Ptr[i]);
        scanf("%d", (Ptr+i));
    }

    printf("\n printing Dynamic Allocated Array's Elements: ");
    for(i=0; i<size; i++)
    {
        ///printf("\n Element No[%d] = %d", i+1, Ptr[i]);
        printf("\n Element No[%d] = %d", i+1, *(Ptr+i));
    }

    /// malloc return Pointer to void  : (void*)
   /// int* Ptr = (int*) malloc(12);  /// allocate specified memory space "byte number" dynamically in "heap"
                    /// and return Address of the start of this memory space

     ///char* Ptr2 = (char*) malloc(12);

*/

    //-------------------------------------------------------


    /*

    int A=2, B=3;
    printf("\n Before Swap A = %d, B = %d", A, B);

    ///SwapIntegers(A, B);  ///Call by Value
    SwapIntegers(&A, &B);  ///Call by Address

    printf("\n After Swap A = %d, B = %d", A, B);

    */

    //-------------------------------------------------------


    /*
    int X = 5;

    printf("\n Value of Variable X = %d", X);
    printf("\n Address of Variable X = %x", &X);

    int *Ptr = &X;
    printf("\n Value of Pointer Ptr (Address of X) = %x", Ptr);
    printf("\n Address of Pointer Ptr = %x", &Ptr);
    printf("\n Content Pointer Ptr Points to (value of X) = %d", *Ptr);

    (*Ptr)++;
    printf("\n Value of X after (*ptr)++ = %d", X);

    */

    /*
    int i;
    int Arr[5]={0};

    Arr[0] = 10;
    Arr[1] = 20;

    for(i=0; i<5; i++)
    {
        printf("\n Arr[%d] = %d", i+1, Arr[i]);
    }

    int* Ptr;
    Ptr = Arr;  /// Ptr and Arr Now Points to the same Address

    Ptr++;
    *Ptr = 55;

    for(i=0; i<5; i++)
    {
        printf("\n Arr[%d] = %d", i+1, Arr[i]);
    }

*/

/*
    int i;
    int Arr[5]={0};

    /// Array by Array Notation
    for(i=0; i<5; i++)
    {
        printf("\n Enter Arr Element No[%d]:", i+1);
        scanf("%d", &Arr[i]);
    }

    ///printf("\n Array Address = %x", Arr);
    ///printf("\n First Array Element Address = %x", &Arr[0]);

    int* Ptr;
    Ptr = Arr;  /// Ptr and Arr Now Points to the same Address

    ///Ptr = &Arr[0];  ///The same as "Ptr = Arr;"


    /// Pointer by Pointer Notation
    printf("\n\n Printing Array Elements: ");
    for(i=0; i<5; i++)
    {
        printf("\n Arr[%d] = %d", i+1, *Ptr);
        Ptr++;
    }




    /// Pointer by Array Notation
    printf("\n\n Printing Array Elements: ");
    for(i=0; i<5; i++)
    {
        printf("\n Arr[%d] = %d", i+1, Ptr[i]);
    }


    /// Array by Pointer Notation
   printf("\n\n Printing Array Elements: ");
    for(i=0; i<5; i++)
    {
        printf("\n Arr[%d] = %d", i+1, *(Arr+i));
        ///Arr++;  ///Invalid statement
        ///Arr+1;  ///Valid Statement : Arr value didn't change
    }

     ///int X = 5;
    ///int Y = X + 3;  //y = 8 , x = 5

     ///int X = Arr++; /// Arr increment , X assignment Arr after increment
    ///int X = Arr+1; /// Arr still the same, X assignment Arr+1
*/

    /*
    printf("\n Size of Array = %d", sizeof(Arr));
    printf("\n Size of Ptr = %d", sizeof(Ptr));
    printf("\n Size of Arr[0] = %d", sizeof(Arr[0]));

*/




    //-------------------------------------------------------------


    ///Type Casting: Convert from DataType to another DataType

    ///(type) value;





/*
    int a = 9;
    int b = 4;

    //int Num = a / b;
    //printf("\n Num = %d", Num)  //2

    //float Num = a / b;
    //printf("\n Num = %f", Num) //2.000

    float Num = (float) a / b;  ///Cast result of Dividing a/b from int to float
    printf("\n Num = %f", Num); //2.5000
*/


///Type Casting Types:
///1. implicit Casting: convert from smaller size dataType to larger size , ex: char to int
///2. Explicit Casting: double to int

/*
    char ch = 'A';
    int X = ch;   ///Implicit casting

    printf("\n X = %d", X);

    int Sum = 0;

    Sum = ch + 10;  ///Implicit casting
    printf("\n Sum = %d", Sum);
*/


    //int a;
    //double d = 23455777.62999950;

    //a = d;

    //float f = d;

    //printf("\n value of a = %d", a);

    //printf("\n value of f = %f", f);

    //float f2 = (float) d;  /// Explicit Casting
    //printf("\n value of f = %f", f2);

/*
    float value = 4.5;
    int A = (int)value + 50;
    printf("\n Value = %f", value);
    printf("\n A = %d", A);
*/


    return 0;
}
