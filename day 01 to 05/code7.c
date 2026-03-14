#include<stdio.h>

int main()
{
    int a , b ;
    printf("Enter value for a \n");
    
    scanf("%d ",&a);

    printf("Enter value for b \n");

    scanf("%d",&b);
    
    int sum = a+b;

    printf("THe sum of %d and %d is %d \n",a,b,sum);


    int mul=a*b;

    printf("The multiplication of %d and %d is %d \n",a,b,mul);


    int sub=b-a;

    printf("The subtraction of %d From %d is %d \n",a,b,sub);

    double div=b/a;

    printf("The division of %d From %d is %lf \n",a,b,div);
    
    return 0;
}