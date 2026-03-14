#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data1;
    struct Node *next;
};

int main(){
    struct Node *head,*second,*third,*fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter value for head ");
    scanf("%d",&head->data1);
    printf("Enter value for second ");
    scanf("%d",&second->data1);
    printf("Enter value for third ");
    scanf("%d",&third->data1);
    printf("Enter value for fourth ");
    scanf("%d",&fourth->data1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

     //#method 1 for printing

    printf("%d\n",head->data1);
    printf("%d\n",second->data1);
    printf("%d\n",third->data1);
    printf("%d\n",fourth->data1);

    printf("------\n");      
    //method 2 for printing

    struct Node *temp = head;

    while(temp != NULL)
    {
    printf("%d\n", temp->data1);
    temp = temp->next;
    }

    free(head);
    free(second);
    free(third);
    free(fourth);
    
    return 0;

}