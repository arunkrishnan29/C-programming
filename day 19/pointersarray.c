
#include<stdio.h>

//abc 
int main(){

    int size;

    printf("Enter the size for the array : ");
    scanf("%d",&size);

    int myNumbers[size];

    int i;

    printf("Enter %d numbers:\n",size);

    for(i=0;i<size;i++){
        printf("Element %d : ",i+1);
        scanf("%d",&myNumbers[i]);
    }

    printf("\nArray values using index:\n");
    for(i=0;i<size;i++){
        printf("%d ",myNumbers[i]);
    }

    printf("\n\nArray addresses (pointers):\n");
    for(i=0;i<size;i++){
        printf("Address of element %d : %p\n",i+1,&myNumbers[i]);
    }

    printf("\nValues using pointer arithmetic:\n");
    for(i=0;i<size;i++){
        printf("%d ",*(myNumbers+i));
    }

    printf("\n\nPointer of array (base address) : %p\n",myNumbers);

    return 0;
}