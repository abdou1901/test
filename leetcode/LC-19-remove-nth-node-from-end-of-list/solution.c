struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode temp;
    temp.next = head;
    struct ListNode *slow = &temp, *fast = &temp;
    
    for(int i = 0; i <= n; i++){
        if(fast)
            fast = fast->next;
    }
    
    while (fast){
        slow = slow->next;
        fast = fast->next;
    }
    
    struct ListNode* temp2 = slow->next;
    slow->next = slow->next->next;
    free(temp2);
    
    return temp.next;
}