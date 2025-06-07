## Problem Summary
The "Remove Nth Node From End of List" problem on LeetCode requires you to remove the nth node from the end of a singly linked list and return the modified list. The solution is achieved by using the two-pointer technique.

## Input/Output Description
- **Input**: The function takes a pointer to the head of a singly linked list and an integer n.
- **Output**: The function returns the modified list with the nth node from the end removed.

## Approach
The two-pointer technique is employed to efficiently find and remove the target node without needing to traverse the list multiple times. Here is the implementation breakdown:

1. **Initialization**: Create a temporary node pointing to the head of the list to handle edge cases where the head itself might need to be removed.
2. **Two-Pointer Setup**: Use two pointers, `slow` and `fast`, both initially pointing to the `temp` node.
3. **Window Creation**: Move the `fast` pointer n+1 steps ahead to create a distance of n nodes between `slow` and `fast`.
4. **Pointer Alignment**: Move both `slow` and `fast` pointers one step at a time until `fast` reaches the end of the list. At this point, `slow` will be just before the node to be removed.
5. **Node Removal**: Adjust the `next` pointer of the `slow` node to skip the node to be removed and free the removed node.

### Key Points
- **Temporary Node**: This technique handles cases where the head of the list might be removed by allowing us to always update pointers of a node before the node itself.
- **Two-Pointer Technique**: This technique is efficient for finding the nth node from the end in a single pass, making it O(n) in time complexity.

## Code Walkthrough
```c
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode temp;
    temp.next = head;
    struct ListNode *slow = &temp, *fast = &temp;
    for(int i = 0; i <= n; i++)
        if(fast)
            fast = fast->next;
    while (fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    struct ListNode* temp2 = slow->next;
    slow->next = slow->next->next;
    free(temp2);
    return temp.next;
}
```

- **Initialization**: `temp.next = head` ensures that the `slow` pointer works correctly for the edge case where the head node itself is the target node.
- **Creating the Gap**: The loop `for(int i = 0; i <= n; i++)` moves the `fast` pointer n+1 nodes ahead.
- **Aligning Pointers**: The `while` loop aligns the `slow` pointer correctly.
- **Removing the Node**: `slow->next = slow->next->next;` skips the target node.
- **Memory Management**: `free(temp2);` ensures the memory is freed properly.

## Complexity Analysis
- **Time Complexity**: O(L), where L is the length of the linked list. Each node is visited exactly once.
- **Space Complexity**: O(1). Only a few extra pointers are used, regardless of the input size.

### Why O(n) and O(1)?
- The **time complexity** is O(n) because we traverse the list only once using the two-pointer technique. The inner loop runs a fixed number of times based on n.
- The **space complexity** is O(1) since we are using a fixed amount of additional space irrespective of the input size.

## Test Cases
Let's test the function with a few cases:
1. **Case 1**: 
   - Input: head = [1,2,3,4,5], n = 2
   - Expected Output: [1,2,3,5]
   - Explanation: Remove the 2nd to last node (4) from the list.
2. **Case 2**: 
   - Input: head = [1], n = 1
   - Expected Output: []
   - Explanation: Remove the only node in the list.
3. **Case 3**: 
   - Input: head = [1,2], n = 1
   - Expected Output: [1]
   - Explanation: Remove the last node from the list.
4. **Edge Case 1**: 
   - Input: head = [], n = 1
   - Expected Output: []
   - Explanation: The list is empty; no operation is needed.
5. **Edge Case 2**: 
   - Input: head = [1,2,3], n = 3
   - Expected Output: [2,3]
   - Explanation: Remove the first node from the list.

### Explanation of Edge Cases
- If the list is empty and n = 1, the function should simply return an empty list without attempting any operations.
- Removing the head node is handled by the `temp` node, as `slow` will start from `temp`, which points to `head`.
- If n exceeds the length of the list, the loop that moves the `fast` pointer can only move as far as the list's length, ensuring safe navigation.

## Extra Insights
- **Linked List Traversal**: Always consider edge cases like an empty list, single-node or two-node lists, and cases where n is exactly the length of the list.
- **Pointer Manipulation**: Proper manipulation of `next` pointers is crucial to maintaining list integrity.
- **Memory Safety**: Ensure that dynamically allocated memory is freed accurately by managing pointers and freeing as required.
