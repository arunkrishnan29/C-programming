#include<stdio.h>

int sum (int x,int y)
{
    return x+ y;
}

int main()
{
    int num1,num2;

    printf("Enter num 1 ");
    scanf("%d",&num1);
    
    printf("Enter num 2 ");
    scanf("%d",&num2);

    int result;
    
    result=sum(num1,num2);

    printf("The sum of %d and %d is %d",num1,num2,result);
    
    return 0;
    
}