#include <stdio.h>

void intt(char){
    int *ptr;
    printf(sizeof(*ptr));
}

void floatt(char){
    float *ptr;
    printf(sizeof(*ptr));

}

void doublee(char){
    
    printf(sizeof(*ptr));
}

void charr(char){
    printf(sizeof(*ptr));
}

int main()
{

char s[10];

printf("Enter any data type");

scanf("%s",s);

intt(s);
floatt(s);
doublee(s);
charr(s);

return 0; 

}