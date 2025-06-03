## Problem Summary
The "Length of Last Word" problem on LeetCode requires finding the length of the last word in a string. A word is defined as a maximal substring consisting of non-space characters. Words are separated by single or multiple spaces.

## Input/Output Description
- **Input**: A string `s` containing words separated by spaces.
- **Output**: An integer representing the length of the last word in the string.

## Approach
The solution takes the following steps:
1. Traverse the string from the end to find the first non-space character.
2. Count the length of the word by moving backwards until a space or the start of the string is encountered.
3. Return the counted length.

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
- **Traversal**: The outer loop skips trailing spaces, ensuring we start at the last character of the last word.
- **Counting Length**: The inner loop counts the number of non-space characters until it hits the start of the string or a space.

## Complexity Analysis
- **Time Complexity**: O(n), where n is the length of the string. In the worst case, we have to traverse the entire string.
- **Space Complexity**: O(1). We use only a few extra variables to keep track of the position and length.

## Test Cases
Let's test our function with a few examples:
1. **Case 1**: Input = "Hello World"\n   - Expected Output: 5\n   - Explanation: The last word is "World", which has 5 characters.
2. **Case 2**: Input = "   fly me   to   the moon  "\n   - Expected Output: 4\n   - Explanation: The last word is "moon", which has 4 characters, skipping trailing spaces.
3. **Case 3**: Input = "luffy is still joyboy"\n   - Expected Output: 6\n   - Explanation: The last word is "joyboy", which has 6 characters.
4. **Edge Case**: Input = ""\n   - Expected Output: 0\n   - Explanation: An empty string has no words.
5. **Edge Case (all spaces)**: Input = "     "\n   - Expected Output: 0\n   - Explanation: The string contains only spaces.

## Extra Insights
- **Edge Cases**: Ensure to handle strings with leading, trailing, or multiple spaces correctly.
- **Simplicity**: The solution is straightforward and avoids unnecessary complexity, making it efficient and easy to understand.