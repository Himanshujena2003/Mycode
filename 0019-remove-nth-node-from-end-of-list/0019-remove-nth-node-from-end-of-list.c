/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head->next == NULL) return NULL;
    //int count=0,a=1;
    struct ListNode* t=head;
    struct ListNode* z=head;
    
    while(n--){
        t=t->next;
    }
    if(t==NULL){
        return z->next;
    }
    while(t->next!=NULL){
        z=z->next;
        t=t->next;
    }
    z->next=z->next->next;
    
    return head;
    
}