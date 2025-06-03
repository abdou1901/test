## Problem Summary
The Length of Last Word problem on LeetCode asks us to compute the length of the last word in a given string, where words are separated by spaces and leading or trailing spaces might exist.

## Input/Output Description
- **Input**: The function takes a single string `s` as an input parameter, which is a pointer to a character array in C.
- **Output**: The function returns an integer representing the length of the last word in the input string.

## Approach 
The strategy employed in the solution is as follows:
1. Find the end of the string and then ignore trailing spaces.
2. Traverse backwards until the start of the last word by counting the characters or using spaces as the stop.
3. Return the length of the identified last word.

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
- **Initial Index**: 'int i = strlen(s) - 1;' sets the starting index to the last character of the string.
- **Skip Trailing Spaces**: 'while(s[i] == ' ' ') i--;' moves the index backwards until it finds the last character that is not a space.
- **Word Length Calculation**: 'while (i >= 0 && s[i] != ' ' ') {length++; i--;}' counts the characters of the last word by moving backwards until a space or the start of the string is found.

## Complexity Analysis 
- **Time Complexity**: O(n). In the worst case, we traverse the string once to handle all spaces and characters.
- **Space Complexity**: O(1). The solution uses a constant amount of extra space for the variables 'length' and 'i'.

## Test Cases
Let's validate our function with a few sample test cases:
1. **Case 1**: Input = "Hello World"
   - Expected Output: 5
   - Explanation: The last word is 'World', which has 5 characters.
2. **Case 2**: Input = "   fly me   to  the moon   "
   - Expected Output: 4
   - Explanation: The last word, after ignoring spaces, is 'moon', which has 4 characters.
3. **Case 3**: Input = "luffy is still joyboy"
   - Expected Output: 6
   - Explanation: The last word 'joyboy' has 6 characters.
4. **Case 4**: Input = " "
   - Expected Output: 0
   - Explanation: There are no words in the input string, only spaces.

## Extra Insights
- **Handling Edge Cases**: The function efficiently handles cases with leading, trailing, or multiple spaces.
- **Optimization**: If it's necessary to be more runtime-efficient in a language with built-in string utilities (e.g., Python), you might split and use the end of the list for the word directly.
