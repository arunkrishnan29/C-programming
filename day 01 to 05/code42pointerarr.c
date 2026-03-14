#include<stdio.h>
int main()
{
    char name[60];
    printf("Enter your name     :  ");
    scanf(" %[^\n]",name);
    printf("hello %s     ",name);
    
    return 0;
}