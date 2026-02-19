#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//storing multiple strings in array

void getvalue(int a ,int size ,char temp[] ,char **arr){
    for(int i=0;i<a;i++){
        printf("Enter the value for  arr[%d]    =   ",i);
        scanf("%s",temp);
        
        int ogsize;
        ogsize=strlen(temp)+1;   //using +1 because for 4 char it need 5 space ,, at end \n
        
        arr[i]= (char *)malloc(ogsize * sizeof(char));
        strcpy(arr[i],temp);
    }
}

void printvalue(int a,char **arr){
        printf("\n");
        printf("Your strings are    :   \n");

    for(int i=0;i<a;i++){
        printf("\n");
        printf("%s\n",arr[i]);
    }

}

void printlength(int a,char **arr){
    printf("Your string lengths are    :   \n");
    int strsize;

    for(int i=0;i<a;i++)
    
    {

    strsize=strlen(arr[i]);

    printf("\n"); 
    printf("arr[%d] = %s = %d",i,arr[i],strsize);
    
    }
}

int main(){
    int a,size;
    char temp[150];
    
    printf("Enter the total no.of strings to be printed     :       ");
    scanf("%d",&a);
    char **arr = (char **)malloc(a * sizeof(char *));

    // calling functions 
    getvalue(a,size,temp,arr);

    printvalue(a,arr);

    printlength(a,arr);

    for(int i=0;i<a;i++){
        free(arr[i]);
    }
    free(arr);

return 0;

}