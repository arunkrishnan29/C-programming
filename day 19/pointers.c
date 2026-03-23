# include<stdio.h>
# include <stdlib.h>

int getnumbers(int a){
    printf("Enter a number  :   ");
    scanf("%100d",&a);
    return a;
}
void createptr(int a){
    int* ptr=&a;
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
}
int main(){
    int a;
    a=getnumbers(a);
    createptr(a);
    return 0;

}
