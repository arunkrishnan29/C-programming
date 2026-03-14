#include<stdio.h>

void leap(int x)
{
if(x%100==0){
    if (x%400==0){
printf("The given year is a leap year");
    }
    else{
printf("The given year is a not leap year");
    }
}
else if(x%4==0){
    printf("The given year is a leap year" );
}
else{
    printf("The year is not a leap year ");
}

}

int main()
{
    int x;

    printf("Enter a year to check wheather it is a leap year or not a leap year     :   ");
    scanf("%d",&x);

    leap(x);

    return 0;
    
}