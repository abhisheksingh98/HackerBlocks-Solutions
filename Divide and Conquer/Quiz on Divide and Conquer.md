

## 1. Let T(n)= T(n-1) + 1/n. Then T(n) is:

It can be easily seen (or proven formally with induction) that T(n) is the sum of 1/k for the values of k from 1 to n. This is the nth harmonic number, Hn = 1 + 1/2 + 1/3 + ... + 1/n.

Asymptotically, the harmonic numbers grow on the order of log(n). This is because the sum is close in value to the integral of 1/x from 1 to n, which is equal to the natural logarithm of n. In fact, Hn = ln(n) + γ + O(1/n) where γ is a constant. From this, it is easy to show that T(n) = Θ(log(n)).

## 2. Which of the following algorithms is NOT a divide & conquer algorithm by nature?
(A) Euclidean algorithm to compute the greatest common divisor
(B) Heap Sort           --- correct
(C) Cooley-Tukey fast Fourier transform
(D) Quick Sort

## 3. Consider the following function

find (int n)
 {
  if (n < 2 ) then return; 
  else
   {
    sum= 0;
    for (i= 1; i ≤ 4; i++) find (n/2);
    for (i=1; i≤ n*n; i++) sum= sum + 1;
  } 
}
Assume that the division operation takes constant time and “sum” is global variable. What is the time complexity of “find (n)” ?

### Solution: 
Recurrence Relation for above code is T(n) = 4T(n/2) + n^2
By Master's Theorem we will get time complexity as T(n)= θ(n^2logn)

## Q4. Maximum Sum Subarray
Maximum Subarray Sum problem is to find the subarray with maximum sum. For example, given an array {12, -13, -5, 25, -20, 30, 10}, the maximum subarray sum is 45.
The naive solution for this problem is to calculate sum of all subarrays starting with every element and return the maximum of all. We can solve this using Divide and Conquer, what will be the worst case time complexity using Divide and Conquer.

### Solution:

Naive solution would be to consider every possible subarray and find sum of all of them and take maximum. The problem with this approach is that its worst case time complexity is O(n^2)

## Q5. Comparison Required Using DNC
The number of comparisons required to find maximum and minimum in the given array of n- element using divide and conquer:

a. ciel(3n/2)

b. ciel(3n/2)+2

c. floor(3n/2)

d. floor(3n/2)-2

### Solution:
Steps to find minimum and maximum element out of n numbers:

1. Pick 2 elements(a, b), compare them. (say a > b)
2. Update min by comparing (min, b)
3. Update max by comparing (max, a)
Therefore, we need 3 comparisons for each 2 elements, so total number of required comparisons will be (3n)/2 – 2, because we do not need to update min or max in the very first step.

Recurrence relation will be:

T(n) = T(⌈n/2⌉)+T(⌊n/2⌋)+2 = 2T(n/2)+2 = ⌈3n/2⌉-2

## Q6. DNC OR GREEDY OR DP
If a problem can be solved by combining optimal solutions to non-overlapping problems, the strategy is called _ DIVIDE & CONQUER


