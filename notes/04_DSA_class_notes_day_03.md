# Introduction to Complexity

## 1. What is Complexity?

**Complexity** tells us how much **time and memory** an algorithm needs as the input size (`n`) increases.

**Example:** If we have 1000 numbers instead of 10 numbers, complexity tells us how the algorithm's performance changes.

---

## 2. Why do we study Complexity?

* To compare different algorithms.
* To find which algorithm is faster.
* To reduce memory usage.
* To make programs efficient for large inputs.

---

## 3. How is Complexity measured?

We mainly use **Big-O notation (`O`)**.

Big-O describes the **growth rate** of an algorithm as the input size `n` increases.

---

## 4. Where is Complexity used in Real Life?

Complexity is important in:

* Searching in Google
* Sorting large data
* Social media applications
* GPS and Maps
* Database systems
* AI and Machine Learning
* E-commerce websites

---

## 5. Time Complexity

**Time Complexity** tells how the **running time** of an algorithm increases with input size.

### Example

```text
for i = 1 to n
    print(i)
```

The loop runs `n` times.

Therefore:

**Time Complexity = O(n)**

---

## 6. Space Complexity

**Space Complexity** tells how much **extra memory** an algorithm needs as the input size grows.

### Example

If an algorithm creates an array of size `n`:

**Space Complexity = O(n)**

---

## 7. Time-Space Trade-off

A **time-space trade-off** means we can sometimes:

* Use **more memory to save time**, or
* Use **less memory but take more time**.

### Example

Using a **Hash Table** requires extra memory but makes searching faster.

---

# 8. Common Time Complexities

| Complexity     | Name         | Simple Meaning                         |
| -------------- | ------------ | -------------------------------------- |
| **O(1)**       | Constant     | Same time regardless of `n`            |
| **O(log n)**   | Logarithmic  | Very fast; input reduces step by step  |
| **O(n)**       | Linear       | Time increases directly with `n`       |
| **O(n log n)** | Linearithmic | Common in efficient sorting            |
| **O(n²)**      | Quadratic    | Usually occurs with nested loops       |
| **O(2ⁿ)**      | Exponential  | Becomes very slow for large `n`        |
| **O(n!)**      | Factorial    | Extremely slow; tries all arrangements |

## Order from Fastest to Slowest

**O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)**

> Note: Write **O(1)** instead of just **O**, and **O(n)** instead of **o(n)** when listing common Big-O complexities.

---

## 9. Simple Examples

* **O(1):** Accessing `arr[5]`
* **O(log n):** Binary Search
* **O(n):** Linear Search
* **O(n log n):** Merge Sort
* **O(n²):** Bubble Sort
* **O(2ⁿ):** Some recursive subset problems
* **O(n!):** Trying every possible permutation

---

## 10. Quick Revision

**Time Complexity →** How much time an algorithm takes.

**Space Complexity →** How much extra memory an algorithm uses.

**Big-O →** Describes how complexity grows when input size increases.

**Trade-off →** Sometimes we use more memory to make the algorithm faster.

**Main order:**

`O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)`
