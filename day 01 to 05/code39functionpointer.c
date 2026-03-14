#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void calc(int a, int b, int (*op)(int, int)) {
    printf("%d\n", op(a, b));
}

int main() {

    int a,b;

    printf("Enter value for a   :   ");
    scanf("%d",&a);
    printf("Enter value for b   :   ");
    scanf("%d",&b);

    int r;

    r=add(a,b);
    printf("%d\n",r);
    calc(a,b, add);
  	calc(a,b, subtract);
    return 0;
}