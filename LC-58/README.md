## Problem Summary
The "Length of Last Word" problem on LeetCode challenges us to find the length of the last word in a given string. The string may contain leading or trailing spaces, but words are separated by single spaces.

## Input/Output Description
- **Input**: The function takes a pointer to a string (char*) as input.
- **Output**: The function returns an integer representing the length of the last word in the string.

## Approach 
The solution involves the following steps:
1. Start from the end of the string and move backwards to skip any trailing spaces.
2. Count the characters of the last word by moving backwards until a space or the start of the string is encountered.
3. Return the count of characters.

## Code Walkthrough 
Here's the submitted solution explained:
```c
int lengthOfLastWord(char* s) {
    int i = strlen(s) - 1;
    while(s[i] == ' ') i--;
    int length = 0;
    while(i >= 0 && s[i] != ' ') {length++; i--;}
    return length;
}
```
### Key Points
- **Trailing Spaces Handling**: The outer while loop skips any trailing spaces.
- **Counting Characters**: The inner while loop counts the characters of the last word by decrementing the index.

## Complexity Analysis 
- **Time Complexity**: O(n). The solution traverses the string roughly twice, once to skip trailing spaces and once to count the characters of the last word.
- **Space Complexity**: O(1). The solution uses a fixed amount of extra space.

## Test Cases
Let's test our function with a few examples:
1. **Case 1**: Input = "Hello World"
   - Expected Output: 5
   - Explanation: The last word "World" has 5 characters.
2. **Case 2**: Input = "   fly me   to   the moon  "
   - Expected Output: 4
   - Explanation: The last word "moon" has 4 characters.
3. **Case 3**: Input = "luffy is still joyboy"
   - Expected Output: 6
   - Explanation: The last word "joyboy" has 6 characters.
4. **Edge Case**: Input = ""
   - Expected Output: 0
   - Explanation: An empty string has no words.

## Extra Insights
- **String Manipulation**: The solution effectively uses string manipulation techniques to handle spaces and count characters.
- **Efficiency**: The approach is efficient with linear time complexity and constant space usage.
