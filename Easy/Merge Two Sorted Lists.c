/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL && l2 == NULL) return NULL;
    struct ListNode* rNode = (struct ListNode*)malloc(sizeof(struct ListNode)), *ltemp = l1, *rtemp = l2;
    rNode->next = NULL;
    struct ListNode* head = rNode;

    while(ltemp != NULL && rtemp != NULL){
        struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->next = NULL;
        if(ltemp->val <= rtemp->val){
            temp->val = ltemp->val;
            ltemp = ltemp->next;
        }
        else{
            temp->val = rtemp->val;
            rtemp = rtemp->next;
        }
        rNode->next = temp;
        rNode = rNode->next;
    }
    if(rtemp != NULL){
        while(rtemp != NULL){
            struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp->val = rtemp->val;
            temp->next = NULL;
            rNode->next = temp;
            rNode = rNode->next;
            rtemp = rtemp->next;
        }
    }
    if(ltemp != NULL){
        while(ltemp != NULL){
            struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp->val = ltemp->val;
            temp->next = NULL;
            rNode->next = temp;
            rNode = rNode->next;
            ltemp = ltemp->next;
        }
    }
    
    return head->next;
}