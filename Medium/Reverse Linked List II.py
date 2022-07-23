# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseBetween(self, head, left, right):
        """
        :type head: ListNode
        :type left: int
        :type right: int
        :rtype: ListNode
        """
        pre = ListNode()
        s = pre
        pre.next = head
        cnt = 1
        
        while cnt < left:
            pre = pre.next
            cnt += 1
        
        r = pre.next
        l = []
        for i in range(0, right-left+1):
            l.append(r)
            r = r.next
        
        for i in range(1, len(l)+1):
            pre.next = l[-i]
            pre = pre.next
        pre.next = r
        if left == 1:
            return s.next
        return head