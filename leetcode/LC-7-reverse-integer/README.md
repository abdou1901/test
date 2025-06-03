# Reverse Integer
The reverse integer problem involves reversing the digits of an integer. The challenge is to ensure that the reversed integer stays within the 32-bit signed integer range, handling both positive and negative integers.

## Approach
The provided solution first checks if the input integer is within the valid 32-bit signed integer bounds. It then proceeds to reverse the integer by extracting each digit, reversing the process, and finally, applying the correct sign.

### Steps:
1. Check if the input integer is zero or exceeds 32-bit signed integer bounds. Return 0 if true.
2. Determine the sign of the integer. If the integer is negative, make it positive for easier manipulation.
3. Reverse the digits by iterating through each digit, constructing the reversed integer.
4. Check bounds during the reversal process to handle overflow.
5. Return the reversed integer with the correct sign.

## Test Cases
**Test Case 1:**
 - Input: 123
 - Output: 321
 - Explanation: Reversing 123 gives 321.

**Test Case 2:**
 - Input: -123
 - Output: -321
 - Explanation: Reversing -123 gives -321.

**Test Case 3 (Edge Case):**
 - Input: 1534236469
 - Output: 0
 - Explanation: Reversing 1534236469 will exceed 32-bit signed integer bounds.

**Test Case 4 (Edge Case):**
 - Input: -2147483648
 - Output: 0
 - Explanation: Reversing -2147483648 will exceed 32-bit signed integer bounds.