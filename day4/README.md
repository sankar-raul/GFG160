# Rotate Array

## Problem Statement

Given an unsorted array `arr[]`, rotate the array to the left (counter-clockwise direction) by `d` steps, where `d` is a positive integer. Do the mentioned change in the array in place.

**Note**: Consider the array as circular.

---

## 📝 Problem Description

- **Difficulty**: Medium
- **Accuracy**: 37.06%
- **Submissions**: 398K+
- **Points**: 4

---

## 🏅 Examples

### Example 1:
**Input:**
```plaintext
arr[] = [1, 2, 3, 4, 5], d = 2
```
**Output:**

```plaintext
[3, 4, 5, 1, 2]
```
> **Explanation:** When rotated by 2 elements, the array becomes 3 4 5 1 2.

### Example 2:
**Input:**

```plaintext
arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
```
**Output:**

```plaintext
[8, 10, 12, 14, 16, 18, 20, 2, 4, 6]
```
> **Explanation:** When rotated by 3 elements, the array becomes 8 10 12 14 16 18 20 2 4 6.

### Example 3:
**Input:**

```plaintext
arr[] = [7, 3, 9, 1], d = 9
```
**Output:**

```plaintext
[3, 9, 1, 7]
```
> **Explanation:** When rotated by 9 elements, the array becomes 3 9 1 7.

## 📏 Constraints:
```
1 ≤ arr.size(), d ≤ 10^5
```
```
0 ≤ arr[i] ≤ 10^5
```
