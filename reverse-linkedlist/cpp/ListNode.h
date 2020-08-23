#include <iostream>
#include <stack>

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
    ListNode* reverseListIterative(ListNode* head) {
        ListNode* current = head;
        ListNode* next = nullptr;
        ListNode* prev = nullptr;

        while (current != NULL) {
            // store next
            next = current->next;

            // reverse the current pointer to point towards previous
            current->next = prev;

            // move pointers on position ahead
            prev = current;
            current = next;
        }
        std::cout << "===" << std::endl;
        return prev;
    }
    // ListNode* reverseListRecursive(ListNode* head) {
    // }

    void printLinkedList(ListNode* head) {
        while (head->next != NULL) {
            std::cout << "head val: " << head->val << std::endl;
            if (head->next != nullptr) {
                std::cout << "head next: " << head->next->val << std::endl;
            } else {
                std::cout << "this is the end" << std::endl;
            }
            head = head->next;
        }
   }

};