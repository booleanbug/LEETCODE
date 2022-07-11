/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* tortoise = head;
    struct ListNode* hare = head;
    while(hare != NULL && hare -> next != NULL){
        tortoise = tortoise -> next;
        hare = hare -> next -> next;
    }
    return tortoise;
}
