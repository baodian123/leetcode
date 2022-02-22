/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if (!head) return NULL;
        
    struct ListNode* temp = head->next, *cur = head;
    
    while (temp) {
        if (cur->val == temp->val) {
            cur->next = temp->next;
            free(temp);
            temp = cur->next;
        } else {
            cur = cur->next;
            temp = temp->next;
        }
    }
    
    return head;
}