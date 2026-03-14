#include <stdio.h>

int main() {

    int age;

    printf("Please Enter your age to verification ");
    
    scanf("%d",&age);
    if(age >= 18) {
        
        if (age >=60 ) {printf("Eligible for vote senior citizen");}

        else {printf("Eligible for vote");}

    }
    else

    {
    printf("Not Eligible for vote");
    }

return 0;

}