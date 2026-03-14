#include <stdio.h>

int main() {
    int num;
    printf("Enter size: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {         // Row loop
        for(int j = 0; j < num; j++) {     // Column loop
            
            // Check if we are on the "edge" of the square
            if(i == 0 || i == num-1 || j == 0 || j == num-1) {
                printf("*"); // Print star on boundaries
            } else {
                printf(" "); // Print space in the middle
            }
        }
       printf("\n"); // Move to next line ONLY after the inner loop finishes
    }
    return 0;
}