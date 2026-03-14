#include<stdio.h>

void swap(int*a,int*b)
{
    int temp;
    temp=*a;
   *a=*b;
   *b=temp;
    
}

int main()
{
 
    int num1,num2;

    printf("Enter value num1   :   ");
    scanf
    ( "%d",&num1);
    printf("Enter value num2   :   ");
    scanf("%d",&num2);

    swap(&num1,&num2);

    printf("after swaping\n %d and %d",num1,num2);

    return 0;
}