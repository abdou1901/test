# Test Cases
1. **Single Operation**
- Input:
   1
3
x + 2 x + 1
- Expected Output:
42
2. **Empty Expression**
- Input:
   1
0
- Expected Output:
0
3. **Large Expression**
- Input:
   1
20
x 2 x 2 + 2+x +
- Expected Output: 
2048
4. **Mixed Operations Precision Verification**
- Input:
   2
10
x x + x x + 1.x +
x 2 x 2 + 2 x +
- Expected Output:
216
5. **Nested Validations Edge case Detection**
- Input:
   1
7
x + 1 + x x 1 <<
- Expected Output:
20