#include <stdio.h>

int main()
{
    int a , b;
    printf("Enter value for a \n");

    scanf("%d",&a);

    printf("Enter value for b \n");

    scanf("%d",&b);

    printf("a = %d and b = %d \n", a,b);


    if (a== b){
        printf("a is equal to b \n") ;
    }
    else{
        printf("a is not equal to b \n") ;
    }

    printf("%c------------------------------\n");


    int age;
    printf("Enter your age \n");
    scanf("%d",&age);
    printf("Age = %d \n", age);
    if (age >= 18)
    {
    printf("You are eligible for taking license \n") ;
    }
    else
    {
        printf("You are not eligible for taking license \n") ;

    }

    printf("%c------------------------------\n");

    int num1; 
    int num2;

    printf("Enter the num1 \n");
    scanf("%d",&num1);

    printf("Enter the num2 \n");
    scanf("%d",&num2);

    printf("You hav entered num1 = %d and num2 = %d \n",num1,num2);

    if (num1>num2)
   {
        printf("num1 is greater than num2 \n");
    }

    

    else if (num2>num1)
    {
        printf( "num2 is greater than num1 \n");
    }

    

    else
    {
        printf("num1 is equal to num2 \n"); 
    }
        return 0;
}
