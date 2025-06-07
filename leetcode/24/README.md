## Problem Summary
The "Swap Nodes in Pairs" problem on LeetCode requires you to swap nodes in pairs within a singly linked list. This effectively means rearranging every set of two consecutive nodes in the list. An empty list or a list with a single node should be returned as is. 

## Input/Output Description
- **Input**: A pointer to the head of a singly-linked list.
- **Output**: A pointer to the new head of the singly-linked list after swapping pairs of nodes. 

## Approach 
The solution involves the following steps:
1. Define a struct for the ListNode, as given in the problem statement.
2. Use a while loop to iterate through the list, swapping pairs of nodes.
3. Adjust the pointers to swap the nodes and keep track of the previous node to maintain the list structure.
4. Handle edge cases such as an empty list or a list with a single node.

## Code Walkthrough 
Here's the submitted solution explained: 

```c
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
``` 
### Key Points 
- **Initial Check**: Returns the head immediately if the list is empty or has only one node.
- **New Head Assignment**: The new head is initialized to head->next, which becomes the new start of the modified list.
- **Swapping Logic**: The current pair of nodes `first` and `second` is swapped using pointer manipulations.
- **Previous Node Tracking**: `prev` keeps track of the previous node to correctly update the list structure after swapping.

## Complexity Analysis 
- **Time Complexity**: O(n). The algorithm processes each node exactly once in a single pass through the list.
- **Space Complexity**: O(1). The solution uses a constant amount of extra space, regardless of the list size.

## Test Cases 
Here are some test cases to validate the solution:
1. **Case 1**: Input = [1, 2, 3, 4]
   - Expected Output: [2, 1, 4, 3]
   - Explanation: Each pair is swapped, resulting in the reversed pairs within the list.
2. **Case 2**: Input = [1, 2, 3]
   - Expected Output: [2, 1, 3]
   - Explanation: Only the first pair is swapped.
3. **Case 3**: Input = []
   - Expected Output: []
   - Explanation: An empty list remains unchanged.
4. **Case 4**: Input = [1]
   - Expected Output: [1]
   - Explanation: A single node list remains unchanged.

## Extra Insights
- **Edge Case Handling**: The code correctly handles lists with an odd number of nodes by leaving the last single node as is.
- **Efficiency**: The linear time complexity ensures that the solution scales well with large lists.