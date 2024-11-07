#include <iostream>
using namespace std;

struct ListNode{
    int data;
    ListNode* next;

    ListNode(int x) : data(x), next(nullptr) {}
};

ListNode* findKthNodeFromBottom(ListNode* head, int k) {
    if (head == nullptr || k <= 0) {
        return nullptr;
    }

    ListNode* fast = head;
    ListNode* slow = head;

    for (int i = 0; i < k; ++i) {
        if (fast == nullptr) {
            return nullptr;
        }
        fast = fast->next;
    }

    while (fast != nullptr)
    {
        fast = fast->next;
        slow = slow->next;
    }
    
    return slow;
}

int main() {
    int value;
    int k;
    cin >> k;
    ListNode* head = nullptr;
    ListNode* bottom = nullptr;

    while (cin >> value) {
    if (value < 0) break;

    ListNode* newNode = new ListNode(value);
    if (head == nullptr) {
        head = newNode;
        bottom = newNode;
    } else {
        bottom->next = newNode;
        bottom = newNode;}
    } 

    ListNode* result = findKthNodeFromBottom(head, k);

    if (result == nullptr){
        cout << "NULL" << endl;
    } else cout << result->data << endl;

    system("pause");
    return 0;
}