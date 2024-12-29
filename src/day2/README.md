# Move All Zeroes to End

## Problem Statement

Given an array `arr[]`, push all the zeroes of the given array to the right end of the array while maintaining the order of non-zero elements. Do the mentioned change in the array in place.

---

## 📝 Problem Description

- **Difficulty**: Easy

---

## 🏅 Examples

### Example 1:
**Input:**
```plaintext
arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
```
**Output:**

```plaintext
[1, 2, 4, 3, 5, 0, 0, 0]
```
> **Explanation:** There are three 0s that are moved to the end of the array.

### Example 2:
**Input:**

```plaintext
arr[] = [10, 20, 30]
```
**Output:**

```plaintext
[10, 20, 30]
```
> **Explanation:** No change in the array as there are no 0s.

### Example 3:
**Input:**

```plaintext
arr[] = [0, 0]
```
**Output:**

```plaintext
[0, 0]
```
> **Explanation:** No change in the array as there are all 0s.

## 📏 Constraints:
```
1 ≤ arr.size() ≤ 10^5
```
```
0 ≤ arr[i] ≤ 10^5
```
