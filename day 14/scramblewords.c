#include <stdio.h>
#include <string.h>

// scramble
int scramble1() {

    char arr[50];

    printf("Enter a name: ");
    scanf("%49s", arr);

    int len = strlen(arr);
    int value = len;

        if (len <= 1) {
        printf("Can't Scramble it       Please enter another word");
        return 0;
    }
    int left = 0;
    int right = len - 1;
    int mid = len / 2;

    while(value != 0){

        for (int i = 0; i < len; i++){

            if(value == len){
                printf("%c", arr[mid]);
                value--;
                break;
            }

            if(left < mid){
                printf("%c",arr[left]);
                left++;
                value--;
                break;
            }

            if(right > mid){
                printf("%c",arr[right]);
                right--;
                value--;
                break;
            }
        }
    }

    printf("\n");


}


int scramble2()
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

void scramble3(char word[])
{
    int len = strlen(word);

    // Step 1: ASCII ascending sort (bubble sort)
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(word[j] > word[j+1])
            {
                char temp = word[j];
                word[j] = word[j+1];
                word[j+1] = temp;
            }
        }
    }

    // Step 2: print in reverse order
    printf("Scrambled word: ");

    for(int i = len - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }

    printf("\n");
}


char checkword(char word ){

    char word2;

    printf("Guess the Real Word         :       ");

    scanf("%c\n",&word2);

    if (word2==word){
        printf("Congragulation You Have Successfully Found the Word    :-)    ");
    }
    else{
        printf("Sorry Incorrect ,  Try Again    ");
    }
}


int main(){
    char word,word2;
    char arr[50];

    printf("Enter A Word to Scramble it     :       ");
    scanf("%c",&arr);

    checkword(word);
    return 0;
}
