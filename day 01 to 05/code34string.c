#include<stdio.h>

int main()
{

    char name[100];
    char *nameptr;


    printf("Please enter your name     :     ");
    scanf("%s",&name);


    nameptr =(char *) &name;

    printf("%s",nameptr);
    printf("\n  ");

    printf("%s",++nameptr);
    printf("\n  ");

    printf("Welcome to c programming %s",name);

    return 0;
    
}