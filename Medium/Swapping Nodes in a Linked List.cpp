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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = findLeft(head, k), *right = findRight(head, k);
        
        int temp = left->val;
        left->val = right->val;
        right->val = temp;
        
        return head;
        
    }
    
    ListNode* findLeft(ListNode* node, int k) {
        while (--k) {
            node = node->next;
        }
        
        return node;
    }
    
    ListNode* findRight(ListNode* node, int k) {
        ListNode* temp = node;
        
        while (k--) {
            temp = temp->next;
        }
        
        while (temp) {
            node = node->next;
            temp = temp->next;
        }
        
        return node;
    }
};