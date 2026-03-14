#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data1;
    struct Node *next;
};

int main(){
    struct Node *head;
    head=(struct Node*)malloc(sizeof(struct Node));

    head->data1=45;
    head->next=NULL;
    printf("%d", head->data1);    
    return 0;
}