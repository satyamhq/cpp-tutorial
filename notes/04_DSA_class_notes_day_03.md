# Introduction to Complexity

## 1. What is Complexity?

**Complexity** tells us how much **time and memory** an algorithm needs as the input size (`n`) increases.

**Example:** If we have 1000 numbers instead of 10, complexity tells us how the algorithm's performance changes.

---

## 2. Why do we study Complexity?

* To compare different algorithms.
* To find which algorithm is faster.
* To reduce memory usage.
* To make programs efficient for large inputs.
* **Bottleneck:** A specific part of code that slows down the execution of the entire program.

---

## 3. How is Complexity measured?

We mainly use **Big-O notation (`O`)**.

Big-O describes how the **resource usage grows** as input size `n` increases.

---

## 4. Where is Complexity used in Real Life?

* Google/Search
* Sorting large data
* Social media
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

**Time Complexity = O(n)**

---

## 6. Space Complexity

**Space Complexity** tells how much **extra memory** an algorithm needs as input size grows.

**Example:** An array of size `n` requires:

**Space Complexity = O(n)**

---

## 7. Time-Space Trade-off

Sometimes we can:

* Use **more memory to save time**, or
* Use **less memory but take more time**.

**Example:** A Hash Table uses extra memory but provides faster searching.

---

# 8. Common Time Complexities

| Complexity     | Name         | Example         |
| -------------- | ------------ | --------------- |
| **O(1)**       | Constant     | Array access    |
| **O(log n)**   | Logarithmic  | Binary Search   |
| **O(n)**       | Linear       | Linear Search   |
| **O(n log n)** | Linearithmic | Merge Sort      |
| **O(n²)**      | Quadratic    | Bubble Sort     |
| **O(2ⁿ)**      | Exponential  | Subset problems |
| **O(n!)**      | Factorial    | Permutations    |

### Fastest → Slowest

**O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)**

---

# 9. Asymptotic Notations

Asymptotic notation describes the performance of an algorithm as `n` becomes very large.

### Big-O — `O`

Represents the **upper bound** of an algorithm's growth.

**Example:** `O(n)`

### Omega — `Ω`

Represents the **lower bound** of an algorithm's growth.

**Example:** `Ω(n)`

### Theta — `Θ`

Represents the **tight bound** — both upper and lower bounds.

**Example:** `Θ(n)`

---

# 10. Three Key Concepts

### 1. Input Size (`n`)

The number of elements or amount of data an algorithm must process.

### 2. Growth Rate

How quickly the resource usage increases as `n` increases.

### 3. Best, Average and Worst Case

Different input situations can give different running times for the same algorithm.

* **Best Case:** Minimum time
* **Average Case:** Expected/average time
* **Worst Case:** Maximum time

---

# 11. Why Complexity is Important?

1. **Compare algorithms objectively**
2. **Predict performance for large inputs**
3. **Identify bottlenecks in code**
4. **Make better design decisions**

---

# 12. Quick Revision

**Time Complexity →** Time taken by an algorithm.

**Space Complexity →** Extra memory used by an algorithm.

**Big-O →** Upper bound.

**Omega (Ω) →** Lower bound.

**Theta (Θ) →** Tight bound.

**Bottleneck →** Part of code that slows down the program.
![alt text](Time-and-Space-Complexity.jpeg)
**Trade-off →** Using more memory to reduce execution time.

**Main Order:**

`O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)`
