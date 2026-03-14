#include <stdio.h>

int main()
{
    char word;

    scanf("%c", &word);

    switch (word){
        
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    
    
        printf(" The given letter is a vowel \n");
        break;
    
    default:
    printf(" The given letter is a consonant \n");
    }
    return 0;
}