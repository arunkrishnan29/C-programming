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
        for(int l=1;l<=i;l++){
            printf("*");
        }
        
        
        printf("\n");

            
        }
        return 0;
    }

