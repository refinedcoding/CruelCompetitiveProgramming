Familiarity with these bounds:

- $2^{10} \approx 10^{3}， 2^{20} \approx 10^{6}$
- 32-bit signed integers and 64 bit signed integers have upper limits $2^{31} - 1 \approx 2 \times 10^{9}$ and $2^{63} - 1 \approx 9 \times 10^{18}$
- Unsigned integers can be used if only non-negative numbers are required. 32-bit unsigned integers and 64 bit-unsigned integers have upper limits of $2^{32} - 1 \approx 4 \times 10^{9}$ and $2^{64} - 1 \approx 1.8  \times 10^{19}$ respectively.
- The largest input size for typical programming contest problems must be < 1M. Beyond that, the time needed to read the input will be the bottlenect.
- A typical year 2013 CPU can process 100M operations in a few seconds.

Tips for testing:

1. Your test cases should include the sample test cases since the sample output is guaranteed to be correct
2. For problems with multiple test cases in a single run (see Section 1.3.2), you should include two identical sample test cases consecutively in the same run.
3. Your test cases should include tricky corner cases.
4. Your test cases should include large cases.
5. Though this is rare in modern programming contests, do not assume that the input will always be nicely formatted if the problem description does not explicitly state it (especially for a badly written problem).