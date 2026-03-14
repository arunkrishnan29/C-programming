#include<stdio.h>

int main(){

    int size;
    printf("Enter the size for star diagram     :    ");
    scanf("%d",&size);

    for(int i =0;i<size;i++){
         
        for(int j=i;j<size;j++){

            printf(" ");
        }
        for(int k=0;k<=i;k++){

        printf("*");
        }
        for (int l=0;l<=i-1;l++){
            printf("*");
        }
    
        printf("\n");
        
    }

    for(int i=0;i<size;i++){
        for(int j=-1;j<i;j++){
            printf(" ");

        }
        for(int k=i+1;k<size;k++){
            printf("*");
        }
        for(int l=i;l<size;l++){
            printf("*");
        }
    printf("\n");

    }
        return 0;
    }

