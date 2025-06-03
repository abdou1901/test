# Reverse Integer Solution

## Problem Summary

Given a 32-bit signed integer, reverse digits of an integer. Note:

- Assumed the environment only supports 32-bit signed integers.
- The range is [−2^31,  2^31 − 1]. If the reversed integer overflows return 0.

## Input/Output

**Input:** An integer `x`. 
**Output:** The reversed integer if it doesn't overflow, otherwise 0.

## Approach

1. **Handling Edge Cases:** Start by checking if the number is zero or outside the valid 32-bit signed integer range.
2. **Determine Sign:** Track the sign of the original number (positive or negative).
3. **Convert to Positive:** Work with the absolute value of the number to simplify the reversal process.
4. **Reversal Logic:** Iteratively extract the last digit, append it to the result, and check for overflow after each addition.
5. **Restore Sign:** Before returning, restore the original sign to the result.

### Code Walkthrough

The reversal process uses a `long int` to handle intermediate results that might temporarily exceed 32-bit bounds, ensuring accuracy during the calculation.

```c
long int result = 0;
for(int i = x ; i > 0 ; i /= 10){
    result = result * 10 + i % 10;
    if(result > 2147483647 || result < -2147483648) return 0;
}
return positive ? result : -result;
```

## Time and Space Complexity

**Time Complexity:** O(log(x)) — Each loop iteration reduces the number of digits by one, making this logarithmic with respect to the number of digits in `x`.
**Space Complexity:** O(1) — We use a constant amount of extra space.

## Test Cases

1. **Normal Case:** `123` → `321`
2. **Negative Number:** `-123` → `-321`
3. **Zero:** `0` → `0`
4. **Overflow Case:** `1534236469` → `0` (Reversed is `9646324351`, which overflows)
5. **Boundary Case:** `2147483648` → `0` (Out of 32-bit signed range)

## Insights

- **Edge Cases:** Always verify edge cases around zero and the boundaries of the integer range.
- **Overflow Handling:** Using a `long int` helps in safely checking for overflow before committing to the result.
- **Optimization:** The solution avoids unnecessary operations and handles signed integers efficiently.

Additional optimizations or alternative approaches like using strings or math functions can be considered for clearer understanding or different constraints.