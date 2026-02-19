#include<stdio.h>

int main()
{
    char name[100];
    
    printf("Please enter your name     :     ");
    fgets(name,100,stdin);

    printf("Welcome to c programming %s",name);

    return 0;
    
}