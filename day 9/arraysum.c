#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size for the array    :   ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("Enter the value for the array  :   ");
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("The sum of the Entered values for array     :   \n ");

    
    for (int i=0;i<size;i++){

        int sum=arr[i]+arr[i];
        printf("%d\n",sum);
    }


return 0;
}