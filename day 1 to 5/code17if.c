#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer number: \n");
    
   scanf("%d",&number);

   printf("you have entered %d \n",number);

    if (number % 2 == 0)
    {
        printf ("The given number is even\n");
    }
    else {
        printf ("The given number is odd\n");
    }

    return 0;
}