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

    insertElementLinkedList(LinkedList, 0, 13);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 1);

    insertElementLinkedList(LinkedList, 0, 2);
    printLinkedList(LinkedList);
    assert(lengthOfLinkedList(LinkedList) == 2);

    return 0;
}