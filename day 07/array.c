#include<stdio.h>

int main(){

    int size;

    int arr[]={11,22,33,44,55,66,77,88};

    size=sizeof(arr)/sizeof(arr[0]);


    for(int i=0;i<size;i++){

        printf("%d ",arr[i]);
    }

    return 0;

}