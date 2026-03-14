#include<stdio.h>

int oddeven(int x)
{
    if (x==0){printf("The Give Number is Zero" );}

    else if (x%2 ==0) { printf("The Give Number is Even" );}

    else (x%2 !=0) ; {printf("The Give Number is Odd" );}


}

int factorial(int x)

{
    for (int i=0;i>=x;i++)
    
    printf("\nThe factorial is %d",i*i);
}

int main()
{

    int num;

    printf("Enter an Number to Check is it odd or even      :   ");

    scanf("%d",&num);

    oddeven(num);
    factorial(num);

    return 0;
    
}