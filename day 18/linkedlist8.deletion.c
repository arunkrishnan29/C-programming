#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data1;
    struct Node* previous;
    struct Node* next;
} Node;

Node* createNode(int data1) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); 
    }
    newNode->data1 = data1;
    newNode->previous = NULL;
    newNode->next = NULL;
    return newNode;
}

void printList(Node* node) {
while(node!=NULL){
        printf("%d\n", node->data1);
        node = node->next;
    }
    printf("null\n");
}

int main() {

    int a,b,c,d,e,position;

    printf("Enter 4 numbers:\n");

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    printf("---------------\n");
    printf("The Linked List     :   \n");

    Node* node1 = createNode(a);
    Node* node2 = createNode(b);
    Node* node3 = createNode(c);
    Node* node4 = createNode(d);

    // linking every nodes in doubly 

    node1->previous = NULL;
    node1->next = node2;

    node2->previous = node1;
    node2->next = node3;

    node3->previous = node2;
    node3->next = node4;

    node4->previous = node3;
    node4->next = NULL;

    Node* head = node1;   // FIX: define head pointer

    printList(head);

    printf("---------------\n");
    printf("enter the number to de in the existing linked list :   \n");

    printf("---------------\n");
    printf("Enter the position to delete the  node from 1 to 5 :   \n");

    scanf("%d",&position);

    printf("The Linked List after deletion :   \n");
    
    
    if (position == 1) {
        node2=head;
        node2->next=node3;
        node2->previous=NULL;
        free(node1);
        
    } else if(position==2){
        node1->next=node3;
        node3->previous=node1;
        free(node2);
        
    }
    else if(position==3){
        node2->next=node4;
        node4->previous=node3;
        node3=node4;
        free(node3);
    }

    else if(position==4){
        node3->next=NULL;
        node3->previous=node2;
        free(node4);
    }


    printList(head);

    // Free the memory

    return 0;
}