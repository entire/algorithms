#include <iostream>
#include <vector>
#include "ListNode.h"

int main() {
    ListNode* node1 = new ListNode(5);
    ListNode* node2 = new ListNode(4, node1);
    ListNode* node3 = new ListNode(3, node2);
    ListNode* node4 = new ListNode(2, node3);
    ListNode* node5 = new ListNode(1, node4);

    LinkedList ll;
    ll.printLinkedList(node5);

    return 0;
}
