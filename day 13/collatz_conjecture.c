#include<stdio.h>
// ----- Doing COLLATZ CONJECTURE ------

int getinput(int num){
    printf("Enter the number to Proceed COLLATZ CONJECTURE      :       ");
    scanf("%d",&num);
    return num;
}
void printoutput(int num){
    printf("The number is   :  %d\n",num);
}

void collatz(int num){
    int temp,temp1;
    if (num%2==0){
         temp=num/2;
    }
    else{
         temp=3*num+1;
    }
    printf("After round 1  :   ");
    if(temp%2==0){
        printf("%d\n",temp);
        printf("It is Even  \n");
    }
    else{
        printf("%d\n",temp);
        printf("It is Odd  \n");

    }
    int count =1;
    while(temp!=1){
        printf("The number is %d    :   ",temp);
        count++;
        
        if(temp%2==0){
            temp=temp/2;
            printf("It is Even  ,so n/2 = \n");
            printf("%d\n\n",temp);
        }
        else{
            temp=3*temp+1;
            printf("It is Odd  ,so 3*n+1 = \n");
            printf("%d\n\n",temp);
        }
        
        printf("After round %d  :   \n",count);
    }
}

int main(){
    int num ,temp;
    num = getinput(num);
    printoutput(num);
    collatz(num);
    return 0;

}