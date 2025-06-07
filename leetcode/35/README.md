## Problem Summary
The "Search Insert Position" problem on LeetCode involves finding the index at which a target value should be inserted into a sorted array of integers, so that the array remains sorted.

If the target is already present in the array, return its index. Otherwise, return the index where it should be inserted.

## Input/Output Description
- **Input**: A sorted array of integers 'nums' and an integer 'target'.
- **Output**: The index in the array where the target should be inserted to maintain the sorted order.

## Approach
The solution uses a binary search algorithm to efficiently find the correct insertion index. Here’s a step-by-step breakdown:
1. **Initial Checks**: Validate the size of the array. If the array is empty, return -1 after printing an error message.
2. **Binary Search**: Use two pointers, 'start' and 'end', to search through the array.
3. **Mid-point Calculation**: Calculate the mid-point to check the middle element.
4. **Comparison and Adjustment**: Adjust the search boundaries based on the comparison of the mid-point element with the target.
5. **Result**: If the target is found, return the index. If not, determine the correct insertion index based on the final 'middle' position.

## Code Walkthrough
Here's the submitted solution explained:
```c
int searchInsert(int* nums, int numsSize, int target) {
    if(numsSize <= 0) {printf("Invalid numsSize\n");return -1;}
    int end = numsSize - 1, start = 0, middle;
    bool found = false;
    while(start <= end){
        middle = start + (end - start) / 2;
        if(nums[middle] == target){
            return middle;
        } else if(nums[middle] > target){
            end = middle - 1;
        } else{
            start = middle + 1;
        }
    }
    
    return nums[middle] < target ? middle + 1 : middle;
}
```
### Key Points
- **Initial Check**: The code checks if the array size is valid. If not, it prints an error message and returns -1.
- **Binary Search**: The algorithm uses the binary search technique to find the target or the insertion point.
- **Mid-point Calculation**: The mid-point is calculated to avoid potential overflow issues.
- **Boundary Adjustment**: Depending on the comparison result, the search boundaries are adjusted.
- **Result Determination**: After the loop, the correct insertion index is determined based on the final mid-point value.

## Complexity Analysis
- **Time Complexity**: O(log n). The binary search algorithm divides the search interval in half each time, resulting in logarithmic time complexity.
- **Space Complexity**: O(1). The algorithm uses a constant amount of extra space.

## Test Cases
Let's test our function with a few examples:
1. **Case 1**: Input = [1,3,5,6], target = 5
   - Expected Output: 2
   - Explanation: The target 5 is already in the array at index 2.
2. **Case 2**: Input = [1,3,5,6], target = 2
   - Expected Output: 1
   - Explanation: The target 2 should be inserted at index 1 to keep the array sorted.
3. **Case 3**: Input = [1,3,5,6], target = 7
   - Expected Output: 4
   - Explanation: The target 7 should be inserted at index 4 to keep the array sorted.
4. **Case 4**: Input = [1], target = 2
   - Expected Output: 1
   - Explanation: The target 2 should be inserted at index 1.
5. **Edge Case**: Input = [], target = 1
   - Expected Output: -1 (Prints "Invalid numsSize\n")
   - Explanation: The array is empty, so the function prints an error message and returns -1.

## Extra Insights
- **Edge Case Handling**: Ensure to handle edge cases like empty arrays and targets that are out of the array's range.
- **Overflow Prevention**: The calculation of the mid-point prevents potential overflow issues.