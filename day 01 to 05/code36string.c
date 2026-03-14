#include <stdio.h>

void string(char s[]) {
    printf("%s",s);
}

int main() {
    char s[100];

    printf("Enter your name     :   ");

    scanf("%s",&s);

    string(s);

    return 0;
}