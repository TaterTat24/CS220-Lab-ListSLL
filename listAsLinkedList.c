/** 
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Implementation of Linked List Library
 * Purpose: List ADT as linked list
 * ===========================================================
 */
#include <stdio.h>
#include <stdlib.h>

#include "listAsLinkedList.h"

LinkedList *createLinkedList() {
    LinkedList *list = malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    list->numberOfElements = 0;
    return list;
}

int lengthOfLinkedList(LinkedList *list){
    return list->numberOfElements;
}

void insertElementLinkedList(LinkedList* list, int position, double element){
    Node *node = malloc(sizeof(Node));
    node->next = NULL;
    node->data = element;

    if (lengthOfLinkedList(list) == 0){ // List is empty
        list->head = node;
        list->tail = node;
        list->numberOfElements++;
    } else {

    }    
}

void printLinkedList(LinkedList* list){
    for (Node *current = list->head; current != NULL; current = current->next){
        printf("%f ", current->data);
    }
    printf("\n");
}