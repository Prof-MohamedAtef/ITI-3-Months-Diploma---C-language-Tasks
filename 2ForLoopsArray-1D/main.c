#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=0;

    printf("Enter Total Number of elements:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Elements of array");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int length=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<length; i++){
        printf("Element %d: %d\n", i, arr[i]);
    }
    return 0;
}
