#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size for the array    :   ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("Enter the value for the array  :   ");

    int value;
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        
    

    }


        printf("\n");
    

    for (int i=0;i<size;i++){
        for(int j =0;j<=i;j++){
        printf("%d",arr[i]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i=0;i<size;i++){
        for(int j =i;j<size;j++){
        printf("%d",arr[i]);
        }
        printf("\n");
    }
        
    
    


return 0;
}