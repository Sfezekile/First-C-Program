# Calculator

## README / User Guide
**Compile:** `g++ -Wall -o Calculator Calculator.cpp`
**Run:** `./Q1` (Windows: `Calculator.exe`)

Enter, in order: operation code (1 = Addition, 2 = Subtraction, 3 = Multiplication, 4 = Division), First number, and Second number. The program prints the result. Then enter Y/N to continue. If any value is invalid, it shows an error message.

| # | Test Case | Menu Choice | Input 1 | Input 2 | Again? | Expected Output | Pass/Fail |
|---|-----------|-------------|---------|---------|--------|-----------------|-----------|
| 1 | Add two positive integers | 1 | 5 | 3 | n | Sum: 8 | |
| 2 | Add with decimals | 1 | 2.5 | 1.5 | n | Sum: 4 | |
| 3 | Add negative numbers | 1 | -4 | -6 | n | Sum: -10 | |
| 4 | Subtract (positive result) | 2 | 10 | 4 | n | Difference: 6 | |
| 5 | Subtract (negative result) | 2 | 3 | 8 | n | Difference: -5 | |
| 6 | Multiply two integers | 3 | 6 | 7 | n | Product: 42 | |
| 7 | Multiply by zero | 3 | 9 | 0 | n | Product: 0 | |
| 8 | Divide evenly | 4 | 20 | 4 | n | Quotient: 5 | |
| 9 | Divide with remainder (no truncation) | 4 | 7 | 2 | n | Quotient: 3.5 | |
| 10 | Divide by zero | 4 | 5 | 0 | n | Error: cannot divide by zero | |
| 11 | Zero divided by a number | 4 | 0 | 5 | n | Quotient: 0 | |
| 12 | Invalid menu choice (number) | 9 | - | - | n | Error: Enter a number from 1 - 4 | |
| 13 | Invalid menu choice (letter) | a | - | - | n | Error: Enter a number from 1 - 4 | |
| 14 | Loop: repeat with lowercase `y` | 1 | 1 | 1 | y | Sum: 2, then menu shows again | |
| 15 | Loop: repeat with uppercase `Y` | 1 | 1 | 1 | Y | Sum: 2, then menu shows again | |
| 16 | Loop: exit with `n` | 1 | 1 | 1 | n | Sum: 2, then "Goodbye!" | |
| 17 | Loop: exit with any other character | 1 | 1 | 1 | x | Sum: 2, then "Goodbye!" | |
| 18 | Multiple calculations in a row | 1, then 3 | 2, 4 | 3, 5 | y, n | Sum: 5, then Product: 20, then "Goodbye!" | |
| 19 | Invalid choice, then valid one (loop recovery) | 7, then 1 | -, 2 | -, 2 | y, n | Error message, menu again, then Sum: 4 | |
 
## Known Edge Cases (expected to fail for now)
 
| # | Test Case | Input | Current Behavior | Fix Needed |
|---|-----------|-------|------------------|------------|
| A | Letter entered instead of a number | Menu: 1, Input 1: `abc` | `cin` enters a fail state; program may loop endlessly or skip inputs | Check `cin.fail()`, then `cin.clear()` and `cin.ignore()` |
| B | Multi-character menu input | Menu: `12` | Reads `1`, leaves `2` in the buffer, which is then taken as the first number | Read input as a `string`, or clear the buffer with `cin.ignore()` |
 
## Notes
 
- Fill in the **Pass/Fail** column as you run each test.
- Output formatting (e.g. `4` vs `4.0`) depends on `cout` defaults for `double`.
 
