#include<stdio.h>
#include <stdlib.h>

int main(){
    int size1=0,size2=0;

    printf("Enter the size for row     :   ");
    scanf("%d",&size1);
    
    
    printf("Enter the size for column     :   ");
    scanf("%d",&size2);

    int **arr = (int **)malloc(size1 * sizeof(int *));
    
      for (int i = 0; i < size1; i++) {
          arr[i] = (int *)malloc(size2 * sizeof(int));
      }

    arr[size1][size2];



    printf("Enter the value for %d X %d matrix   :   ",size1,size2);


    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
                        scanf("%d",&arr[i][j]);
        }

    }
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){

            printf("%d",arr[i][j]);
            printf("  ");

        }
        printf("\n");
    }


    for (int i = 0; i < size1; i++) {
        free(arr[i]);
    }
    free(arr);

return 0;
}