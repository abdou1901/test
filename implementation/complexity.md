

**Time Complexity:** The solution iterates through each digit of the input number exactly once, which means that the time complexity is **O(k)**, where **k** is the number of digits in the input integer. This is efficient because the maximum number of iterations needed is 10 (for the largest 32-bit signed integer, 2147483647).

**Space Complexity:** The space complexity is **O(1)** because the solution uses a fixed amount of extra space regardless of the input size. The key variables used are a boolean and a long integer, which do not scale with the input size.