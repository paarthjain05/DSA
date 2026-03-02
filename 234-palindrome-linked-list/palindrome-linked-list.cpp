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
    bool isPalindrome(ListNode* h) {
        int n = 0;
        ListNode* temp = h;
        vector<int> arr;
        while (temp->next != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        arr.push_back(temp->val);
        n = arr.size();
        cout << n << '\n';
        for (int i = 0; i < n / 2; i++) {
            cout << n-i-1 << "   \n";
            cout << arr[i] << "   " << arr[n - i - 1];
            if (arr[i] != arr[n - i - 1])
                return false;
        }
        return true;
    }
};