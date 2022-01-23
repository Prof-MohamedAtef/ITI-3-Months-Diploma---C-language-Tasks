#include <stdio.h>
#include <stdlib.h>



int main()
{
    int arr[100];
    int i, max, min, size;

    printf("Enter Size of the Array");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for(int i=0;i<size; i++){
        scanf("%d", &arr[i]);
    }

    max=arr[0];
    min=arr[0];


    for(int i=0; i<size; i++){
        if(arr[i]> max){
            max=arr[i];
        }

        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
