struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    struct ListNode* newHead = head->next;
    struct ListNode* prev = NULL;
    struct ListNode* first = head;
    while (first && first->next) {
        struct ListNode* second = first->next;
        struct ListNode* nextPair = second->next;
        second->next = first;
        first->next = nextPair;
        if (prev != NULL) {
            prev->next = second;
        }
        prev = first;
        first = nextPair;
    }
    return newHead;
}