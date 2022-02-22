/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode* temp = node->next, *cur = node;
    
    while (temp->next) {
        cur->val = temp->val;
        cur = temp;
        temp = temp->next;
    }
    cur->val = temp->val;
    cur->next = NULL;
    free(temp);
}