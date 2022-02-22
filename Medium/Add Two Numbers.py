# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l1_value = l1.val
        base = 10
        current = l1.next
        while current:
            l1_value = l1_value + current.val*base
            current = current.next
            base *= 10
        
        l2_value = l2.val
        base = 10
        current = l2.next
        while current:
            l2_value = l2_value + current.val*base
            current = current.next
            base *= 10
        
        store = list(str(l1_value + l2_value))
        
        node = ListNode(int(store.pop()))
        current = node
        while store:
            next = ListNode(int(store.pop()))
            current.next = next
            current = current.next
        
        return node