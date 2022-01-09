#include <stdio.h>
#include <stdlib.h>

// Creating the Node Data Structure 

typedef struct node{
    int number;
    struct node *next; // Creating a pointer variable to store the address of the next number
}
node;

int main(void){
    // Creating the list 
    node *list = NULL;
    
    // Creating a temporary variable n to point at numbers
    node *n = malloc(sizeof(node));
    if(n==NULL){
        free(list);
        return 1;
    }
    n->number = 1;
    n->next = NULL;

    // Update the list

    list = n;

    // Creating new temporary variable n to store numbers in the second Node
    n = malloc(sizeof(node));
    if(n==NULL){
        free(list);
        return 1;
    }
    n->number = 2;
    n->next =  NULL;
    list->next = n;

    // Creating new temporary variable n to store numbers in the third Node
    n = malloc(sizeof(node));
    if(n==NULL){
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    // Print the numbers
    for(node *tmp = list;tmp!=NULL;tmp = tmp->next){
        printf("%i\n",tmp->number);
    }

    while(list!=NULL){
        node *tmp = list->next;
        free(list);
        list = tmp;
    }

    return 0;
}