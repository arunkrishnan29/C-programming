#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//storing multiple strings in array

int main(){
    int a,size;
    char temp[150];

printf("Enter the total no.of strings to be printed     :       ");
scanf("%d",&a);




    char **arr = (char **)malloc(a * sizeof(char *));


    for(int i=0;i<a;i++)
    {

        printf("Enter the value for  arr[%d]    =   ",i);
        scanf("%s",temp);

        
        int ogsize;
        ogsize=strlen(temp)+1;   //using +1 because for 4 char it need 5 space ,, at end \n
        
        
        
        
        arr[i] = (char *)malloc(ogsize * sizeof(char));
        strcpy(arr[i],temp);


    }

        printf("\n");

    printf("Your strings are    :   \n");




    for(int i=0;i<a;i++)
    
    {

        printf("%s\n",arr[i]);


    }


    for(int i=0;i<a;i++){
        free(arr[i]);
    }
    free(arr);

return 0;

}