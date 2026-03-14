#include<stdio.h>

int main(){

    int arr[]={100,200,300,400,500,600,700,800,900,1000};

    int size=sizeof(arr)/sizeof(arr[0]);
    
    printf("The Available Array is      \n");
    for(int i=0;i<size;i++){

    printf("%d ",arr[i]);
        
    int index=arr[i];

    }

        int index;
    int newindex;
    printf("\nEnter  the number to known the next number     :   \n");
    scanf("%d",&index);
    
    printf("%d",arr[index]);


    printf("The value is    :   %d ",index);

    printf("%d ",arr[2]);


    return 0;
}
