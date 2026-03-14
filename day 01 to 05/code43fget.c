#include<stdio.h>
int main()
{
    char name[60];
    printf("Enter your name     :  ");
    fgets(name,sizeof(name),stdin);
    printf("hello %s     ",name);
    
    return 0;
}