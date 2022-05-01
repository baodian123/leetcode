# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def count_node(self, node):
        i = 0
        
        while node:
            node = node.next
            i += 1
        
        return i
    
    def rotateRight(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        if not head:
            return head
        
        cnt = self.count_node(head)
        if cnt == 1 or k % cnt == 0:
            return head
        
        target = cnt - k % cnt - 1
        
        temp = head
        while target:
            temp = temp.next
            target -= 1
            
        tail, h = temp.next, temp.next
        temp.next = None
        
        while tail.next:
            tail = tail.next
        
        tail.next = head
        
        return h