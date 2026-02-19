#include <stdio.h>
#include <string.h>

int main()
{
    char arr[50];
    int mid, left, right; 

    printf("Enter word: ");
    scanf("%49s", arr);

    int len = strlen(arr);
    
    if (len <=2) {
        printf("Can't Scramble it       Please enter another word");
        return 0;
    }

    mid = len / 2;
    left = mid - 1;
    right = mid + 1;

    printf("%c", arr[left]);   

    if(right < len - 1) {
        printf("%c", arr[right]); 
    }

    if(0 != left) {
        printf("%c", arr[0]);     
    }

    printf("%c", arr[len-1]);

    printf("%c", arr[mid]);    

    printf("\n");

    return 0;
}