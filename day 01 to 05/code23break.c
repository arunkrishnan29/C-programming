#include <stdio.h>

int main() {
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int size;

    size = sizeof(arr)/sizeof(arr[0]);

    printf("Size of the array is %d \n",size);

    int num;
    printf("Enter a number to search in the array: ");

    scanf("%d",&num);

    for(int i=0; i<size; i++) {

        if(arr[i] == num) {

            printf("Number %d found at index %d\n", num, i);

            break;
        }
    }
    return 0;
}
