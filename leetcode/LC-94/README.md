## Problem Summary
The "Binary Tree Inorder Traversal" problem on LeetCode asks us to perform an inorder traversal of a binary tree and return the node values in a list. Inorder traversal involves visiting the left subtree, the root node, and then the right subtree.

## Input/Output Description
- **Input**: A root pointer to a binary tree.
- **Output**: An array containing the node values in inorder traversal. The array must be dynamically allocated and it's up to the caller to free the memory.

## Approach
The provided solution uses a recursive function to perform inorder traversal of the binary tree.
## Code Walkthrough
The code includes helper function : traverse and main function : inorderTraversal.

Here's the submitted solution explained:
```
void traverse(struct  TreeNode* root , int *index, int *arr){
    if(root == NULL) return;
    traverse(root->left ,index , arr );
    arr[*index] = root->val;
    (*index)++;
    traverse(root->right ,index , arr );
}

 int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr= (int *)malloc(10*sizeof(int));
    *returnSize = 0;
    traverse(root ,returnSize , arr ); 
    return arr;
}
```
### Key Points
- **Traverse Function**: This function takes a tree node, an index, and an array. If the node is NULL, it returns. Otherwise, it recursively traverses the left subtree, sets the current node's value in the array, increments the index, and then traverses the right subtree.

To match the structure definition of the problem, change the function header and traverse to include the tree definition.
## Complexity Analysis
The time complexity of this solution is O(n), where n is the number of nodes in the binary tree. This is because each node is visited exactly once.
Space complexity is O(n) in the worst case due to the recursion stack for skewed trees.

## Test Cases
Let's test our function with a few examples: 
1. **Case 1**: Input = [1, NULL, 2, 3]
   - Expected Output: [3, 1, 2]
   - Explanation: Inorder traversal of [1, NULL, 2, 3] yields [3, 1, 2].
2. **Case 2**: Input = [1]
   - Expected Output: [1]
   - Explanation: Inorder traversal of a single node returns the node value.
3. **Case 3**: Input = []
   - Expected Output: []
   - Explanation: Inorder traversal of an empty tree returns an empty list.
4. **Edge Case**: Input = [1, 2]
   - Expected Output: [2, 1]
   - Explanation: Handles case where root has only left child.
5. **Edge Case**: Input = [1, NULL, 2]
   - Expected Output: [1, 2]
   - Explanation: Handles case where root has only right child.

## Additional Notes 
Ensure that the dynamic memory allocation is properly handled by the caller as specified in the problem statement. It's important to avoid memory leaks.
