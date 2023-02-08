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
    } else if(position == 0){
        node->next = list->head;
        list->head = node;
        list->numberOfElements++;
    } else if (position == lengthOfLinkedList(list)-1){
        list->tail->next = node;
        list->tail = node;
        list->numberOfElements++;
    } else {
        Node *currentNode = list->head;
        int currentPosition = 0;
        while (currentPosition != position-1){
            currentNode = currentNode->next;
            currentPosition++;
        }
        
        Node *temp = currentNode;
        node->next = temp->next;
        temp->next = node;
        list->numberOfElements++;
    }
}

void printLinkedList(LinkedList* list){
    for (Node *current = list->head; current != NULL; current = current->next){
        printf("%f ", current->data);
    }
    printf("\n");
}

void appendElementLinkedList(LinkedList* list, double element){
    Node *node = malloc(sizeof(Node));
    node->next = NULL;
    node->data = element;

    list->tail->next = node;
    list->tail = node;
    list->numberOfElements++;
}

void deleteElementLinkedList(LinkedList* list, int position){
    if (lengthOfLinkedList(list) == 1){
        free(list->head);
        list->head = NULL;
        list->tail = NULL;
        list->numberOfElements--;
    } else if (position == 0) {
        Node *temp = list->head;
        list->head = list->head->next;
        free(temp);
        list->numberOfElements--;
    } else if (position == lengthOfLinkedList(list)-1) {
        Node *currentNode = list->head;
        int currentPosition = 0;
        while (currentPosition != position-1){
            currentNode = currentNode->next;
            currentPosition++;
        }

        Node *temp = currentNode;
        temp->next = NULL;
        free(list->tail);
        list->tail = currentNode;
        list->numberOfElements--;
    }
    else {
        Node *currentNode = list->head;
        int currentPosition = 0;
        while (currentPosition != position){
            currentNode = currentNode->next;
            currentPosition++;
        }

        Node *nodeToDelete = currentNode;

        Node *currentNode2 = list->head;
        currentPosition = 0;
        while (currentPosition != position-1){
            currentNode2 = currentNode2->next;
            currentPosition++;
        }

        Node *nodeBefore = currentNode2;
        nodeBefore->next = nodeToDelete->next;
        free(nodeToDelete);
        list->numberOfElements--;
    }
}

double getElementLinkedList(LinkedList* list, int position){
    Node *currentNode = list->head;
    int currentPosition = 0;
    while (currentPosition != position-1){
        currentNode = currentNode->next;
        currentPosition++;
    }

    int nodeNumber = currentNode->data;
    return nodeNumber;
}