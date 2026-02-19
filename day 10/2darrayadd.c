#include<stdio.h>
int main(){
    int size1,size2;

    printf("Enter the size for row     :   ");
    scanf("%d",&size1);
    
    
    printf("Enter the size for column     :   ");
    scanf("%d",&size2);

    int arr1[size1][size2];

    printf("Enter the value for %d X %d matrix1   :   ",size1,size2);


    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            scanf("%d",&arr1[i][j]);
        }

    }
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){

            printf("%d",arr1[i][j]);
            printf("  ");

        }
        printf("\n");
    }

     printf("Enter the value for %d X %d matrix2   :   ",size1,size2);

    int arr2[size1][size2];

    for(int k=0;k<size1;k++){
        for(int l=0;l<size2;l++){
            scanf("%d",&arr2[k][l]);
        }

    }
    for(int k=0;k<size1;k++){
        for(int l=0;l<size2;l++){

            printf("%d",arr2[k][l]);
            printf("  ");

            int a= arr2[k][l];
        }
        printf("\n");
    }

        printf("--------------------------");

        printf("\n");


        printf("The matrix1     =   \n");
        
            for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){

            printf("%d",arr1[i][j]);
            printf("  ");

        }
        printf("\n");

    }
        printf("The matrix2     =   \n");
    
   for(int k=0;k<size1;k++){
        for(int l=0;l<size2;l++){

            printf("%d",arr2[k][l]);
            printf("  ");

        }
        printf("\n");
    }

        printf("********************");
   
        int sum[size1][size2];

        for(int m=0;m<size1;m++){
        for(int n=0;n<size2;n++){

            sum[m][n]=arr1[m][n]+arr2[m][n];
        }
        printf("\n");

        }

        printf("The sum of the matrix1 and martrix2 is  :   \n"); 
        
        for(int m=0;m<size1;m++){
        for(int n=0;n<size2;n++){

            printf("%d",sum[m][n]);
            printf("  ");
        }
        printf("\n");
    }
        




return 0;
}