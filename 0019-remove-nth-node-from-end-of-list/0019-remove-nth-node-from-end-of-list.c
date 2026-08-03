/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
    struct ListNode dummy;
    dummy.next = head;
    
    struct ListNode *temp = &dummy;
    struct ListNode *prev = &dummy;

    // Move temp n+1 steps
    for(int i = 0; i <= n; i++){
        temp = temp->next;
    }

    while(temp != NULL){
        temp = temp->next;
        prev = prev->next;
    }

    prev->next = prev->next->next;

    return dummy.next;

}