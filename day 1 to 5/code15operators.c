# include <stdio.h>

int main ()

{

    int a ,b ;
    printf("Enter value for a\n");
    scanf("%d",&a);
    printf("Enter value for b\n");
    scanf("%d",&b);

    printf(" a = %d and b = %d \n", a, b) ;

    printf("a= b  = %d \n", a = b ) ;

    printf("a += b = %d \n", a += b ) ;

    printf("a -= b = %d \n", a -= b ) ;

    printf("a *= b = %d \n ", a*=b);

    return 0;
}