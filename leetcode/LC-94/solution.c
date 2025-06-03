#include <stdlib.h>




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