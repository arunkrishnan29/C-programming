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
while(node != NULL){
    
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
    printf("enter the number to insert in the existing linked list :   \n");

    scanf("%d",&e);

    printf("---------------\n");
    printf("Enter the position to insert the new node from 1 to 5 :   \n");

    scanf("%d",&position);

    printf("The Linked List after inserted :   \n");

    Node* node5 = createNode(e);

    if (position == 1) {

        node5->next = head;
        head->previous = node5;
        head = node5;

    } else {

        Node* temp = head;

        for (int i = 1; i < position - 1 && temp->next != NULL; i++) {
            temp = temp->next;
        }

        node5->next = temp->next;
        node5->previous = temp;

        if (temp->next != NULL) {
            temp->next->previous = node5;
        }

        temp->next = node5;
    }

    printList(head);

    // Free the memory
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);

    return 0;
}