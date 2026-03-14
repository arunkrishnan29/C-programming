#include<stdio.h>

union sett();{

    char[100]=name;
    return name;

    int = phno;
    return phno;

    float = mark;
    return mark;

}

int main(){

    printf("Enter your name     :   ");
    scanf("%s",&name);

    printf("Enter your phno     :   ");
    scanf("%d",&phno);
    
    printf("Enter your name     :   ");
    scanf("%f",&mark);
    
    union sett(name,phno,mark);

    retrn 0;
}