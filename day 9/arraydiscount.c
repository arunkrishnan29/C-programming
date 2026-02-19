#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size for the array    :   ");
        scanf("%d",&size);
    
    int arr[size];
    int mrp;
    printf("Enter the MRP   :   ");
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("The MRP before discount     :   \n ");

     for (int i=0;i<size;i++){
    
    printf("%d\n",arr[i]);
    }

    printf("The MRP after 10 percentage discount     :   \n ");
    for(int i=0;i<size;i++){

        int mrp=arr[i]-(arr[i]*10/100);

        printf("%d\n",mrp);

    }
    return 0;
}