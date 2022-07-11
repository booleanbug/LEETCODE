/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* floydDetection(struct ListNode* head){
        struct ListNode* slow = head;
        struct ListNode* fast = head;
        
        while(fast!=NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
            
            if(fast == slow){
                return slow;
            }
        }
        return NULL;
    }

struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode* temp = floydDetection(head);
        
    if(temp == NULL){
        return NULL;
    }
    struct ListNode* slow = head;
    while(temp != slow){
        temp = temp -> next;
        slow = slow -> next;
    }
    return temp;
}
