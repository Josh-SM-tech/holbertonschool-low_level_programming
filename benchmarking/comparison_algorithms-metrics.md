# Comparison Algorithms Metrics

### Run Data
* **Run 1:** 
  * Naive: 2.738154 seconds
  * Single-pass: 0.000113 seconds
* **Run 2:** 
  * Naive: 2.743731 seconds
  * Single-pass: 0.000106 seconds
* **Run 3:** 
  * Naive: 2.739721 seconds
  * Single-pass: 0.000106 seconds

### Averages
* **Average Naive Time:** 2.740535 seconds
* **Average Single-pass Time:** 0.000108 seconds

### Analysis & Relative Difference
* The Naive algorithm is roughly 25,300 times slower than the Single-pass algorithm.
* **Reasoning:** The Naive implementation utilizes nested loops resulting in an $O(N^2)$ time complexity, whereas the Single-pass implementation iterates through the array exactly once, giving it an $O(N)$ linear complexity. As the array size ($N = 50,000$) scales, the quadratic growth of the Naive algorithm drastically expands CPU execution duration, while the Single-pass algorithm scales predictably and efficiently.
