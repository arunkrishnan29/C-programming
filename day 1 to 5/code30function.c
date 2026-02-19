#include <stdio.h>

int add(int x){

    return x+x;
}

int sub(int x){

    return x-x;
}


int div(int x){

    return x/x;
}



int square(int x){

    return x*x;

}


int cube(int x){

    return x*x*x;

}

int main(){

    int num;
    printf("Enter a number to know addition,subtraction,division,square,cube  :   ");
    scanf("%d",&num);

    int n=num;

    int ans1=add(num);
    int ans2=sub(num);
    int ans3=div(num);
    int ans4=square(num);
    int ans5=cube(num);


    printf("By addition %d + %d is  :   %d \n",n,n,ans1);

    printf("By subtraction %d - %d is   :   %d \n",n,n,ans2);

    printf("By division %d / %d is  :   %d \n",n,n,ans3);

    printf("By square %d is  :   %d \n",n,ans4);

    printf("By cube %d is  :   %d \n",n,ans5);
 
    return 0;
    
}