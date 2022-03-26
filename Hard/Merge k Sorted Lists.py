# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

import heapq

class Solution(object):
    def mergeKLists(self, lists):
        """
        :type lists: List[ListNode]
        :rtype: ListNode
        """
        setattr(ListNode, "__lt__", lambda self, other: self.val <= other.val)
        
        _list = [ node for node in lists if node ]
        heapq.heapify(_list)
        rs = ListNode()
        temp = rs
        
        while len(_list):
            temp.next = heapq.heappop(_list)
            if not temp.next:
                continue
            if temp.next.next:
                heapq.heappush(_list, temp.next.next)
            temp = temp.next
        
        return rs.next