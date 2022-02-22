/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(!head) return head;
    
    struct ListNode* temp = head;
    int cnt = 0, i;
    
    while(temp){
        cnt += 1;
        temp = temp->next;
    }
    
    temp = head;
    
    if(cnt-n-1 < 0) {
        head = head->next;
        free(temp);
    }
    else{
        for(i=0; i<cnt-n-1; i++)
            temp = temp->next;
        struct ListNode* target = temp->next;

        if(target){
            temp->next = target->next;
        }
        else{
            temp->next = NULL;
        }
        free(target);
    }
    
    return head;
}