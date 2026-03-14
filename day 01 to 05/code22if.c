#include <stdio.h>

int main()
{
    int year = 2020;

    if(year % 400 ==0)
{
    printf("The year %d is a leap year\n", year);

}

else if (year % 4 ==0 && year % 100 !=0)
{
    printf("The year %d  is the leap year \n", year);

}
else {
    printf("The year %d is not a leap year \n", year);
}

    return 0;
}