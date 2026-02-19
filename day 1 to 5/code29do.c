#include <stdio.h>

int main()
{
    printf("Enter Any Number ");
    int number;
    scanf("%d",&number);
    int i=0;
    do {
        printf(" %d \n ",i);
        i++;
       }   
    
    while (i<=number);

    return 0;

       
}