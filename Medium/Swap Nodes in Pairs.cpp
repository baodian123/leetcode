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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        
        ListNode *front = head, *last = head->next;
        head = head->next;
        
        ListNode* temp = new ListNode(), *f = temp;
        temp->next = head;
        
        while (last) {
            temp->next = last;
            front->next = last->next;
            last->next = front;
            temp = front;
            front = front->next;
            if (!front) break;
            last = front->next;
        }
        
        delete(f);
        return head;
    }
};