The problem involves reversing the digits of a given integer. The solution needs to handle cases where the reversed integer overflows a 32-bit signed integer. The core idea is to collect digits from the end while keeping track of whether the original number was positive or negative.

**Logic:**
1. Initialize a flag to track whether the number is positive.
2. Convert the number to positive (if it's negative) to work with it easily.
3. Use a loop to extract digits from the least significant to the most significant.
4. Construct the reversed number digit by digit.
5. Check for integer overflow at each step by comparing with the bounds of 32-bit integers.
6. Finally, restore the sign and return the result.
