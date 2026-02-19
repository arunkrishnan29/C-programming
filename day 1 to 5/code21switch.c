#include <stdio.h>
int main(void) {

    int a , b;
    printf("enter value for A \n");
    scanf("%d",&a);
    printf("enter value for B \n");
    scanf("%d",&b);
    
    char op;      
    printf("enter the operator (+, -, *, /): \n");
    scanf(" %c", &op);

    printf("You have Entered %d %c %d =\n",a,op,b);
   

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;

        case '-':
            printf("%d\n", a - b);
            break;

        case '*':
            printf("%d\n", a * b);
            break;

        case '/':
            if (b == 0) {
                printf("Division by zero not allowed\n");
            } else {
                printf("%d\n", a / b);
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
