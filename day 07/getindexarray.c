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

    int index;
    int newindex;
    printf("Enter the index no (1..n) of array to know the value at that index  :   ");
    scanf("%d",&index);

    if(index!=0){
        newindex=index-1;
    }
    else
        newindex=index;

    printf("The Entered index number is %d\n\n",index);

    printf("The Value available at that index number is     :   %d",arr[newindex]);


    return 0;
}