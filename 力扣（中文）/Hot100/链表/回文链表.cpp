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
        bool isPalindrome(ListNode* head) {
            if (head == nullptr) return true;
            ListNode* curr = head;
            vector<int> res;
    
            while (curr != nullptr) {
                res.push_back(curr->val);
                curr = curr->next;
            }
            vector<int> res_reverse(res.rbegin(), res.rend());
    
            return res == res_reverse;
        }
    };