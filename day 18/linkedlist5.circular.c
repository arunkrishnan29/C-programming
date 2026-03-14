#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
typedef struct Node {
    int data1; // Data stored in the node
    struct Node* previous; // Pointer to the previous node
    struct Node* next; // Pointer to the next node
} Node;

// Function to create a new node
Node* createNode(int data1) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for a new node
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1); 
    }
    newNode->data1 = data1; // Set the data
    newNode->previous = NULL; // Initialize previous pointer
    newNode->next = NULL; // Initialize next pointer
    return newNode;
}

// Function to print the linked list
void printList(Node* node) {
    while (node) {
        printf("%d\n", node->data1); // Print the data of the current node
        node = node->next; // Move to the next node
    }
    printf("null\n"); // Indicate the end of the list
}

int main() {
    int a, b, c, d, e, position;

    printf("Enter 4 numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    printf("---------------\n");
    printf("The Linked List     :   \n");
    Node* node1 = createNode(a);
    Node* node2 = createNode(b);
    Node* node3 = createNode(c);
    Node* node4 = createNode(d);

    // Initial manual linking of nodes
    node1->previous = NULL;
    node1->next = node2;
    node2->previous = node1;
    node2->next = node3;
    node3->previous = node2;
    node3->next = node4;
    node4->previous = node3;
    node4->next = NULL;

    printList(node1); // Print the initial list
    
    printf("---------------\n");
    printf("Enter the number to insert : \n");
    scanf("%d", &e);    
    printf("Enter the position to insert (1-5): \n");
    scanf("%d", &position);    
    
    Node* node5 = createNode(e); // Create the new node
    Node* head = node1; // Keep track of head

    // --- INSERTION LOGIC ---
    if (position == 1) {
        node5->next = head; // Link new node to the head
        head->previous = node5; // Update the previous pointer of the old head
        head = node5; // Update head to the new node
    } else {
        Node* temp = head;
        // Move to the node before the target position
        for (int i = 1; i < position - 1 && temp->next != NULL; i++) {
            temp = temp->next;
        }
        
        // Link node5 between temp and temp->next
        node5->next = temp->next;
        node5->previous = temp;
        
        if (temp->next != NULL) {
            temp->next->previous = node5; // Update the previous pointer of the next node
        }
        temp->next = node5; // Link the new node
    }
    // -----------------------

    printf("---------------\n");
    printf("The Linked List after insertion: \n");
    printList(head); // Print the updated list

    // Free allocated memory
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);

    return 0;
}
