# Question 1 – VukaFit Membership Quotation

## README / User Guide
**Compile:** `g++ -Wall -o Q1 Q1.cpp`
**Run:** `./Q1` (Windows: `Q1.exe`)

Enter, in order: student number, full name, membership code (1 = Basic Access, 2 = Active Plus, 3 = Complete Wellness), number of months (1–6), and Y/N for the fitness assessment (case-insensitive). The program prints a detailed quotation. If any value is invalid it shows an error message and stops without producing a quotation.

## Test Table

| # | Input (membership, months, assessment) | Expected result | Actual result | Pass/Fail |
|---|---|---|---|---|
| 1 | 3, 6, Y (Naledi Mokoena, VF1008) | Subtotal R2880.00; discount R345.60; assessment R180.00; final R2714.40 | Same | Pass |
| 2 | 2, 6, Y (sample output) | Subtotal R2100.00; discount R252.00; final R2028.00 | Same | Pass |
| 3 | 2, 4, N | Subtotal R1400.00; 7% = R98.00; final R1302.00 | Same | Pass |
| 4 | 1, 2, N | Subtotal R440.00; no discount; final R440.00 | Same | Pass |
| 5 | 4, 2, N | Error: invalid membership code; no quotation | Same | Pass |
| 6 | 1, 7, N | Error: months outside 1–6; no quotation | Same | Pass |
| 7 | 1, 0, N | Error: months outside 1–6; no quotation | Same | Pass |
| 8 | 1, 2, X | Error: answer must be Y or N; no quotation | Same | Pass |
| 9 | "abc" as membership | Error: code must be a number; no quotation | Same | Pass |
