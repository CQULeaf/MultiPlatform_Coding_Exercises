from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        # Initialize a dummy node and a current pointer
        dummy = ListNode()
        current = dummy
        
        # Pointers for list1 and list2
        p1, p2 = list1, list2
        
        # Iterate through both lists
        while p1 and p2:
            if p1.val < p2.val:
                current.next = p1
                p1 = p1.next
            else:
                current.next = p2
                p2 = p2.next
                
            current = current.next
        
        # Add remaining elements if any
        if p1:
            current.next = p1
        else:
            current.next = p2
        
        # The actual head of the merged list is the next node of the dummy node
        return dummy.next
