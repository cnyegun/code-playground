#include <stdio.h>

// DATA DEFENITION

typedef struct {
    void *next;
    int data;
} Node;

// CONSTANTS DENIFNITION
Node *head = NULL;

// FUNCTIONS DEFENITION

// LinkedList -> LinkedList
// add a node to the list
// example    *head - [1] - [2] - [3] - NULL  
// add [4] -> *head - [4] - [1] - [2] - [3] - NULL 
// example    *head - NULL
// add [4] -> *head - [4] - NULL


// remove a node from the list

// insert a node into a position in the list 

// Display the program's menu to the user
void printMenu(){
    printf("You have the following options: \n");
    printf("\t1. Add a note to the list.\n");
    printf("\t2. Remove a note from the list.\n");
    printf("\t3. Insert a note to the list.\n");
    printf("\t4. Quit.\n");
}

int main(void)
{
    int option = -1;
    while (option != 4)
    {
        printMenu();
        int num_received = scanf("%d", &option);
        if (num_received == 1 && option > 0 && option <= 4)
        {
            switch(option)
            {
                case 1:
                    // add operation 
                case 2:
                    // remove operation
                case 3:
                    // insert operator
                case 4:
                    break;
            }
        }
    }
    return 0;
}
