#include<stdio.h>

int main()
{

    int num=100;

    printf("initial num:%d\n",num);

    num=200;

    printf("modified num:%d\n",num);

    num=300;

    printf("second modified num:%d\n",num);

    num=num-100;

    printf("final num:%d \n",num);

    return 0;

}