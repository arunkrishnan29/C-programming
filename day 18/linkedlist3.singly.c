#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data1;
    struct Node* next;
} Node;

Node* createNode(int data1) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data1 = data1;
    newNode->next = NULL;
    return newNode;
}

void printList(Node* node) {
    while (node) {
        printf("%d\n", node->data1);
        node = node->next;
    }
    printf("null\n");
}

int main() {
int a,b,c,d;

    printf("Enter 4 numbers:\n");

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    Node* node1 = createNode(a);
    Node* node2 = createNode(b);
    Node* node3 = createNode(c);
    Node* node4 = createNode(d);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    printList(node1);

    // Free the memory
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}