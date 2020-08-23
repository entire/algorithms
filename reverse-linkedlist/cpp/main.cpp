#include <iostream>
#include <vector>
#include "ListNode.h"

int main() {
    ListNode* node5 = new ListNode(5);
    ListNode* node4 = new ListNode(4, node5);
    ListNode* node3 = new ListNode(3, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* node1 = new ListNode(1, node2);

    LinkedList ll;
    ListNode* reversed = ll.reverseListIterative(node1);
    // ListNode* reversed = ll.reverseListRecursive(node5);
    ll.printLinkedList(reversed);

    return 0;
}
