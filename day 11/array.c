#include<stdio.h>
int main(){

    char name[50];

    printf("Enter Your name     :       \n");

    fgets(name,50,stdin);

    printf("%s",name);
}