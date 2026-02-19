#include<stdio.h>
int main(){

    int a,b,num;

    printf("Enter the number to reverse it  :   ");
    scanf("%d",&num);

    a=0;

    do{

        b=num%10;
        a=a*10+b;
        num=num/10;

    }
    while(num!=0);
    
    printf("%d",a);

    return 0;
}