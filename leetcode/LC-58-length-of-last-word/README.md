## Problem Summary
The "Length of Last Word" problem on LeetCode challenges you to find the length of the last word in a given string. A word is defined as a sequence of non-space characters. The string may contain leading, trailing, or multiple spaced characters between words.

## Input/Output Description
- **Input**: A string of characters.
- **Output**: An integer representing the length of the last word in the input string.

## Approach 
The solution involves the following steps:
1. Start from the end of the string and move backward until a non-space character is found.
2. Continue moving backward, counting the length of the current word until a space or the start of the string is reached.
3. Return the length of the word.

## Code Walkthrough 
Here's the submitted solution explained:
```c
int lengthOfLastWord(char* s) {
    int i = strlen(s) - 1;
    while (s[i] == ' ') i--;
    int length = 0;
    while (i >= 0 && s[i] != ' ') {length++; i--;}
    return length;
}
```
### Key Points
- **Initial Traversal**: The first loop 'while (s[i] == '')' skips trailing spaces.
- **Counting Length**: The second loop 'while (i >= 0 && s[i] != ' ')' counts the length of the last word by moving backward from the end.
- **Edge Cases**: The solution assumes the string is non-empty and correctly handles trailing and multiple spaces.

## Complexity Analysis
- **Time Complexity**: O(n), where n is the length of the string. The solution traverses the string at most twice (to remove trailing spaces and count the last word).
- **Space Complexity**: O(1). Only a few extra variables are used.

## Test Cases
Let's test our function with a few examples:
1. **Case 1**: Input = "Hello World"
   - Expected Output: 5
   - Explanation: The last word is "World", which has 5 characters.
2. **Case 2**: Input = "   fly me   to   the moon  "
   - Expected Output: 4
   - Explanation: The last word is "moon", which has 4 characters, ignoring the trailing spaces.
3. **Case 3**: Input = "luffy is still joyboy"
   - Expected Output: 6
   - Explanation: The last word is "joyboy", which has 6 characters.
4. **Case 4**: Input = ""
   - Expected Output: 0
   - Explanation: An empty string has no words, so the length is 0.
5. **Edge Case**: Input = "a"
   - Expected Output: 1
   - Explanation: The single character "a" is considered a word with length 1.

## Extra Insights
- **Edge Case Handling**: Ensure to handle strings with only spaces or empty inputs.
- **Efficiency**: The solution is efficient with O(n) time complexity and constant space usage.