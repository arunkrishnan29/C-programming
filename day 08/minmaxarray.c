#include<stdio.h>

int main(){

    int size;

    printf("Enter the size for the array    :   ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the values for the array    :   ");

    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
return 0;

}                   
