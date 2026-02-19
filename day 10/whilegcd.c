#include<stdio.h>
int main()
{

int a,b,temp;

printf("Enter two number to find the gcd\n");
scanf("%d",&a);
scanf("%d",&b);

printf("The gcd of %d and %d is ",a,b);

while(b!=0){
    temp=a%b;
    a=b;
    b=temp;

}
printf("%d",a);



return 0;
}