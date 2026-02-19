#include <stdio.h>

// pallindrome


int getvalue() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    return num;
}

void palindrome(int num) {
    int original = num;
    int reversed = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (original == reversed) {
        printf("The given number %d is a palindrome\n", original);
    } else {
        printf("The given number %d is NOT a palindrome\n", original);
    }
}

int main() {
    int num;
    num = getvalue();   
    palindrome(num);       
    return 0;
}
