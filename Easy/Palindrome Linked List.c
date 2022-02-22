/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int countNode(struct ListNode* head) {
    struct ListNode* temp = head;
    int count = 0;
    while (temp != NULL) {
        count += 1;
        temp = temp->next;
    }
    
    return count;
}

struct ListNode* reverseLeft(struct ListNode* head, int count) {

    struct ListNode* pre = NULL, *cur = head, *fast = head->next;
    int leftCount = count/2-1, temp = 0;
    
    while (temp <= leftCount) {
        cur->next = pre;
        pre = cur;
        cur = fast;
        fast = fast->next;
        
        temp += 1;
    }
    
    return pre;
}

bool isPalindrome(struct ListNode* head){
    if (head == NULL || head->next == NULL) return true;
    
    int count = countNode(head);
    
    struct ListNode* rightHead = head;

    int temp = 0;    
    while (temp != count/2) {
        rightHead = rightHead->next;
        temp += 1;
    }
    if (count%2) rightHead = rightHead->next;
    struct ListNode* leftHead = reverseLeft(head, count);
        
    while (leftHead) {
        if (leftHead->val != rightHead->val) return false;
        leftHead = leftHead->next;
        rightHead = rightHead->next;
    }
    
    return true;
}