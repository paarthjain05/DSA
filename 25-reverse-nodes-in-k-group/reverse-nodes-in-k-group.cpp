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
    ListNode* rev(ListNode* h, int k){
        ListNode* curr = h;
        ListNode* prev = nullptr;
        while (k--) {
            ListNode* next_ = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;
        while (curr != nullptr && count < k) {
            curr = curr->next;
            count++;
        }
        if(count == k){
            ListNode* fg = rev(head,k);
            head->next = reverseKGroup(curr,k);
            return fg;
        }
        return head;
    }
};