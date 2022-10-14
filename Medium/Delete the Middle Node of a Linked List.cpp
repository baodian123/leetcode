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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* rs = head, *bridge = NULL, *pre = head, *last = head->next;
        
        if (!last) return NULL;
        
        while (last && last->next) {
            bridge = pre;
            pre = pre->next;
            last = last->next->next;
        }
        
        if (!last) {
            bridge->next = pre->next;
            delete pre;
        } else {
            ListNode* _d = pre->next;
            pre->next = pre->next->next;
            delete _d;
        }
        
        return rs;
    }
};