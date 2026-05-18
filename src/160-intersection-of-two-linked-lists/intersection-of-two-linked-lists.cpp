 #include "../../include/dsa-cpp/linked-list-node.h"

/**
 * Definition for singly-linked list (linked-list-node.h).
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    // Time Complexity O(m+n). Space Complexity O(1).
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;

        while (ptrA != ptrB) {
            ptrA = (ptrA != nullptr) ? ptrA->next : headB;
            ptrB = (ptrB != nullptr) ? ptrB->next : headA;
        }

        return ptrA;

    }
};
