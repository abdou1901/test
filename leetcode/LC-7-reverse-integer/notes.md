This solution is quite efficient considering the constraints. Despite being straightforward, it carefully handles edge cases, particularly with integer overflow. A critical point to note is the way this solution checks for overflow after each operation rather than immediately after rescoring the bounds of the input.

Some possible further optimizations or improvements can be considered:
1. The initial check for bounds might be premature because it immediately discards specific edge cases without evaluating them.
2. Ensure the code handles cases like 0 correctly as per the problem requirement.