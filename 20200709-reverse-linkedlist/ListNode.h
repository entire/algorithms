#include <iostream>

 // Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class LinkedList {
public:
    ListNode* reverseListRecursive(ListNode* head) {
       if (head->next != NULL) {
           reverseListRecursive(head->next);
       } 
    }
    // ListNode* reverseListIterative(ListNode* head) {
    // }
    void printLinkedList(ListNode* head) {
        std::cout << "ListNode value : " << head->val << std::endl;
        if (head->next != nullptr) {
            std::cout << "has next!" << std::endl;
            printLinkedList(head->next);
        }
    }
};