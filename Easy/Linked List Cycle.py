# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        
        if head is None or head.next is None:
            return False
        
        d = []
        cur = head
        
        while cur is not None:
            if cur in d:
                return True
            else:
                d.append(cur)
                cur = cur.next
        return False