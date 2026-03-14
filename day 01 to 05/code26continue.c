#include <stdio.h>

int main() {
    int n = 1;
    int number;
    printf("enter the number ");
    scanf("%d",&number);
label:
    printf("%d ", n);
    n++;
    if (n <= number)
        goto label;
    return 0;
}