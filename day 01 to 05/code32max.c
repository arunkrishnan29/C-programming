#include<stdio.h>

void max(int x,int y)
{
    if (x==y)

    printf("%d is equal to %d ",x,y);


    else if(x>y)
{
    printf("%d is greater than %d ",x,y);

}

    else
    {

    printf("%d is greater than %d ",y,x);
        
    }

}

int main()
{
int x;
int y;

printf("Enter num1  :   ");
scanf("%d",&x);

printf("Enter num2  :   ");
scanf("%d",&y);


max(x,y);

return 0;

}