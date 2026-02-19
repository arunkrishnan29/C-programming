#include<stdio.h>

int main(){

    int size;

    printf("Enter the size for array  :   ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the number for array  :   ");
    

    for(int i=0;i<size;i++){
        
        scanf("%d",&arr[i]);
}   
for(int i=0;i<size;i++){

    printf("%d  ",arr[i]);
}
    return 0;
}