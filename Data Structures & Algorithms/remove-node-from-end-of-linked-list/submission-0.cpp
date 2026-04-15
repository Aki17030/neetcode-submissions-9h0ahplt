/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
        // now postion is size-n;
        int idx = size - n;
        if (idx == 0) {
            // deleting the head,
            ListNode* NewHead = head->next;
            delete head;
            return NewHead;
        }
        ListNode* curr = head;
        for (int i = 0; i < idx - 1; ++i) {
            curr = curr->next;
        }

        ListNode* ToDelete=curr->next;
        curr->next=curr->next->next;
        delete ToDelete;

        return head;
    }
};
