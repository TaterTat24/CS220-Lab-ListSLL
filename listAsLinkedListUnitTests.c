/** 
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Implementation of Linked List Library
 * Purpose: List ADT as linked list
 * ===========================================================
 */
#include <assert.h>
#include <stdio.h>

#include "listAsLinkedList.h"

int main() {

    // Insert an appropriate test harness for you linked list implementation.  
    // Your tests will test each function when the list is empty, has a single element, and will also
    // test modifications to the head, tail, or middle elements.

    // You are not being judged/graded on the quality of your lab
    // However, it is in your best interest to make a high quality ADT for future assignments . . . hint hint

    LinkedList *LinkedList = createLinkedList();
    printf("%p\n", LinkedList);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 0);
    
    insertElementLinkedList(LinkedList, 0, 5);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 1);

    insertElementLinkedList(LinkedList, 0, 9);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 2);

    insertElementLinkedList(LinkedList, 0, 59);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 3);

    insertElementLinkedList(LinkedList, lengthOfLinkedList(LinkedList)-1, 69);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 4);

    insertElementLinkedList(LinkedList, 1, 24);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 5);

    appendElementLinkedList(LinkedList, 25);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 6);

    deleteElementLinkedList(LinkedList, 0);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 5);

    deleteElementLinkedList(LinkedList, 0);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 4);

    deleteElementLinkedList(LinkedList, 3);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 3);

    deleteElementLinkedList(LinkedList, 1);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 2);

    deleteElementLinkedList(LinkedList, 1);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 1);

    deleteElementLinkedList(LinkedList, 1);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 0);

    insertElementLinkedList(LinkedList, 0, 5);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 1);

    insertElementLinkedList(LinkedList, 0, 9);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 2);

    insertElementLinkedList(LinkedList, 0, 59);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 3);

    insertElementLinkedList(LinkedList, lengthOfLinkedList(LinkedList)-1, 69);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 4);

    int nodeValue = getElementLinkedList(LinkedList, 1);
    assert(nodeValue == 59);

    return 0;
}