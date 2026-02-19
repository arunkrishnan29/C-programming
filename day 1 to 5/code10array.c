#include <stdio.h>

int main() {
 
    int arr1[] = {1,2,3+1,4,5,6};
    
    printf("Here the elements of arr1 is taken as a integers\n");
    printf("arr1 =  %d \n ",arr1[2]);

    char *arr2[] = {"1","2","3+1","4","5","6"};
    
    printf("arr2 =  %s \n ",arr2[2]);
    printf("Here the elements of arr2 is taken as a characters\n");

    return 0;
}