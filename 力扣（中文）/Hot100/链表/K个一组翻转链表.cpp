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
        ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode* dummy = new ListNode(0);
            dummy->next = head;
            ListNode* prev = dummy;
    
            while (head != nullptr) {
                // 检查剩余节点是否足够 k 个
                ListNode* tail = prev;
    
                for (int i = 0; i < k; ++i) {
                    tail = tail->next;
                    if (tail == nullptr) {
                        ListNode* result = dummy->next;
                        delete dummy;
                        return result;
                    }
                }
    
                ListNode* nextGroupHead = tail->next;
    
                ListNode* reverseHead = reverse(head, tail);
    
                prev->next = reverseHead;
                head->next = nextGroupHead;
    
                prev = head;
                head = nextGroupHead;
            }
    
            ListNode* result = dummy->next;
            delete dummy;
            return result;
        }
    
    private:
        ListNode* reverse(ListNode* head, ListNode* tail) {
            ListNode* prev = nullptr;
            ListNode* curr = head;
            while (prev != tail) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            return tail;
        }
    };