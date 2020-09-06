

## 1. Let T(n)= T(n-1) + 1/n. Then T(n) is:

It can be easily seen (or proven formally with induction) that T(n) is the sum of 1/k for the values of k from 1 to n. This is the nth harmonic number, Hn = 1 + 1/2 + 1/3 + ... + 1/n.

Asymptotically, the harmonic numbers grow on the order of log(n). This is because the sum is close in value to the integral of 1/x from 1 to n, which is equal to the natural logarithm of n. In fact, Hn = ln(n) + γ + O(1/n) where γ is a constant. From this, it is easy to show that T(n) = Θ(log(n)).

## 2. Which of the following algorithms is NOT a divide & conquer algorithm by nature?
(A) Euclidean algorithm to compute the greatest common divisor
(B) Heap Sort           --- correct
(C) Cooley-Tukey fast Fourier transform
(D) Quick Sort






