#include <stdio.h>
#include <stdlib.h>

// DATA DEFENITION
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// CONSTANTS DENIFNITION

// FUNCTIONS DEFENITION

// Node (head), Node -> Node (head)
// add a node to the list
// example    *head - [1] - [2] - [3] - NULL  
// add [4] -> *head - [4] - [1] - [2] - [3] - NULL 
// example    *head - NULL
// add [4] -> *head - [4] - NULL
void addOnHead(Node* head, Node* newNode) {
    newNode->next = head; 
    head = newNode;
}

// Number -> Node 
// create a node with the given number as its data
Node* createNode(int value) {
    Node* newNode = (Node*) malloc(sizeof(Node)); 
    if (newNode == NULL) {
        printf("MEMORY ALLOCATION FAILED\n");
        return NULL;
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// LinkedList (head) -> stdout
// print the whole LinkedList given the head
void displayList(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        printf("-[%d]-");
        tmp = head->next;
    } 
    printf("\n");
}

// remove a node from the list

// insert a node into a position in the list 

// Display the program's menu to the user
void printMenu() {
    printf("You have the following options: \n");
    printf("\t1. Add a note to the list.\n");
    printf("\t2. Remove a note from the list.\n");
    printf("\t3. Insert a note to the list.\n");
    printf("\t4. Quit.\n");
}

int main(void)
{
    Node *head = NULL;
    Node* testNode1 = createNode(775);
    Node* testNode2 = createNode(521);
    Node* testNode3 = createNode(922);
    Node* testNode4 = createNode(231);
    Node* testNode5 = createNode(444);
    addOnHead(head, testNode1);
    addOnHead(head, testNode2);
    addOnHead(head, testNode3);
    addOnHead(head, testNode4);
    addOnHead(head, testNode5);
    displayList(head);
    // int option = -1;
    // while (option != 4)
    // {
    //     printMenu();
    //     int num_received = scanf("%d", &option);
    //     if (num_received == 1 && option > 0 && option <= 4)
    //     {
    //         switch(option)
    //         {
    //             case 1:
    //                 // add operation 
    //             case 2:
    //                 // remove operation
    //             case 3:
    //                 // insert operator
    //             case 4:
    //                 break;
    //         }
    //     }
    // }
    return 0;
}
