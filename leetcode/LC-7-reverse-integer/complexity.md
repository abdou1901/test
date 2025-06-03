### Time Complexity
The algorithm processes each digit of the integer exactly once. Thus, the time complexity is **O(log(x))**, where **x** is the input integer. This is because we are essentially iterating through the digits of the integer, which is logarithmic with respect to its size.

### Space Complexity
The space complexity is **O(1)** (constant). The solution uses a fixed amount of extra space regardless of the input size, specifically a few variables to store intermediate results. No additional data structures grow with the size of the input.