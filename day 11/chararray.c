#include <stdio.h>
#include <string.h>

int main()
{
    char arr[50];

    printf("Enter a name: ");
    scanf("%49s", arr);

    int len = strlen(arr);

    for(int j = len - 1; j >= 0; j--)
    {
        printf("%c", arr[j]);
    }

    return 0;
}
