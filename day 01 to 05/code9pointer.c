#include <stdio.h>

void swap(int *a, int *b , int *c , int *d){

int temp = *a;
int temp1 = *b;
int temp2 = *c;

*a = *d;
*b = *c;
*c = temp1;
*d = temp;
}

int main(){

    int a=0,b=1,c=2,d=3;

    swap(&a,&b,&c,&d);
    
    printf("a=%d \n b=%d \n c=%d \n d=%d \n",a,b,c,d);
}
