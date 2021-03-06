# What are data structures?
A data Structure (DS) is a way of organizing data so that it can 
be used effectively.

# Why Data Structures?
- Essential ingredients in crating fast and powerful algorithms.
- Help to manage and organize data.
- They make code cleaner and easier to understand

# Abstract Data Type
- An Abstract data type (ADT) is an abstraction of a data structure which provide
only the interface to which a data structure must adhere to.
- The interface does not give any specific details about how something should be
implementd or in what progamming language.
- Eg.

| ADT |	DS |
| ----- | ---- |
| List| Dynamic Array Linked List |
| Queue | Linked List based queue, Array based Queue, Stack Based Queue |
| Map | Tree Map, Hash Map / Hash Table |
| Vehicle | Golf Cart, Bicycle, Smart Car |

# Computational Complexity Analysis
As programmers, we often find ourselves asking the same two question over & over
again:
- How much time does this algorithm need to finish?
- How much space does this algo need for computation?

# Big-O Notation
Big-O Notation gives a upper bound of the complexity in the worst case, helping
to quantify performace as the input size becomes arbitrarily large.

n - The size of the input Complexities ordered in from smallest to largest

**Constant Time**: O(1)
**Logarithmic Time**: O(log(n))
**Linear Time**: O(n)
**Linearthmic Time**: O(nlog(n))
**Quadratic Time**: O(n^2)
**Cubic Time**: O(n^3)
**Exponential Time**: O(b^n), b > 1
**Factorial Time**: O(n!)

## Big-O Properties
O(n + c) = O(n)
O(cn) = O(n)
