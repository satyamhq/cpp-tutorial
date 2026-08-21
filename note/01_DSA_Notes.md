# DSA Notes --- Data Structures & Algorithms

## 1. What is DSA?

**DSA (Data Structures and Algorithms)** is the study of:

-   **Data Structures** --- ways to organize and store data.
-   **Algorithms** --- step-by-step procedures used to solve problems.

### Why learn DSA?

-   Write efficient programs.
-   Reduce time and memory usage.
-   Solve complex problems systematically.
-   Prepare for coding interviews and competitive programming.
-   Understand how software works internally.

------------------------------------------------------------------------

# 2. Complexity Analysis

Complexity tells us how an algorithm behaves as the input size `n`
grows.

## 2.1 Time Complexity

Time complexity describes how the number of operations grows with input
size.

Common complexities:

  Complexity     Name           Example
  -------------- -------------- --------------------------------
  `O(1)`         Constant       Array access
  `O(log n)`     Logarithmic    Binary search
  `O(n)`         Linear         Linear search
  `O(n log n)`   Linearithmic   Merge sort
  `O(n²)`        Quadratic      Bubble sort
  `O(n³)`        Cubic          Triple nested loop
  `O(2ⁿ)`        Exponential    Some recursive subset problems
  `O(n!)`        Factorial      Brute-force permutations

### Big-O

Big-O describes an upper-bound growth rate and is commonly used to
discuss algorithm efficiency.

Example:

``` text
for i = 0 to n-1:
    print(i)
```

Time: `O(n)`

Example:

``` text
for i = 0 to n-1:
    for j = 0 to n-1:
        print(i, j)
```

Time: `O(n²)`

## 2.2 Space Complexity

Space complexity describes additional memory used by an algorithm.

Example:

``` text
int sum = 0;
```

Extra space: `O(1)`

Creating an array of size `n`:

``` text
int[] arr = new int[n];
```

Extra space: `O(n)`.

## 2.3 Best, Average and Worst Case

-   **Best case** --- minimum work.
-   **Average case** --- expected work.
-   **Worst case** --- maximum work.

------------------------------------------------------------------------

# 3. ADT --- Abstract Data Type

An **Abstract Data Type (ADT)** is a data type defined by **what it
does** (its behavior and operations), while hiding **how it is
implemented internally**.

``` text
             STACK ADT
                 |
        +--------+--------+
        |                 |
        v                 v
 Array-based       Linked-list-based
 implementation    implementation
```

For example, a Stack ADT can provide:

-   `push()`
-   `pop()`
-   `peek()`
-   `isEmpty()`

The user of the Stack does not need to know whether the stack internally
uses an array or linked list.

> **ADT = What operations are supported**
>
> **Data structure = How those operations are implemented**

------------------------------------------------------------------------

# 4. Arrays

An **array** stores elements in contiguous memory locations.

``` text
Index:   0    1    2    3    4
        +----+----+----+----+----+
Data:   | 10 | 20 | 30 | 40 | 50 |
        +----+----+----+----+----+
```

## Advantages

-   Fast random access.
-   Simple structure.
-   Cache-friendly.
-   Low overhead.

## Disadvantages

-   Fixed-size arrays have fixed capacity.
-   Inserting/deleting from the middle can be expensive.

## Complexity

  Operation                 Complexity
  ----------------------- ------------
  Access                        `O(1)`
  Search                        `O(n)`
  Insert at end\*               `O(1)`
  Insert at beginning           `O(n)`
  Delete from beginning         `O(n)`

`*` Assuming available capacity for a dynamic array.

------------------------------------------------------------------------

# 5. Strings

A string is a sequence of characters.

Common operations:

-   Access character.
-   Concatenate.
-   Compare.
-   Search substring.
-   Reverse.
-   Count characters.
-   Check palindrome.

Useful patterns:

-   Frequency counting.
-   Two pointers.
-   Sliding window.
-   Hashing.
-   String matching algorithms.

------------------------------------------------------------------------

# 6. Linked List

A linked list consists of nodes.

Each node usually contains:

``` text
[data | next]
```

## Singly Linked List

``` text
+------+------+
| Data | Next |----+
+------+------+
                  |
                  v
             +------+------+
             | Data | Next |----+
             +------+------+
                              |
                              v
                            NULL
```

## Doubly Linked List

``` text
NULL <- [Prev | Data | Next] <-> [Prev | Data | Next] -> NULL
```

## Types

1.  Singly linked list
2.  Doubly linked list
3.  Circular linked list

## Complexity

  Operation                          Singly Linked List
  -------------------------------- --------------------
  Access by index                                `O(n)`
  Search                                         `O(n)`
  Insert at head                                 `O(1)`
  Delete at head                                 `O(1)`
  Insert after known node                        `O(1)`
  Delete after known predecessor                 `O(1)`

Linked lists are useful when frequent insertions/deletions are needed
and random access is not important.

------------------------------------------------------------------------

# 7. Stack

A **Stack** follows:

> **LIFO --- Last In, First Out**

``` text
        +----+
TOP --> | 30 |
        +----+
        | 20 |
        +----+
        | 10 |
        +----+
```

Main operations:

-   `push(x)` --- insert.
-   `pop()` --- remove top.
-   `peek()` --- view top.
-   `isEmpty()` --- check whether empty.

Usually:

-   Push: `O(1)`
-   Pop: `O(1)`
-   Peek: `O(1)`

## Applications

-   Function calls.
-   Recursion.
-   Undo/redo.
-   Parentheses matching.
-   Expression evaluation.
-   DFS.
-   Browser history.

## Implementation

A Stack ADT can be implemented using:

-   Array.
-   Dynamic array.
-   Linked list.

The interface remains the same even though the internal implementation
changes.

------------------------------------------------------------------------

# 8. Queue

A **Queue** follows:

> **FIFO --- First In, First Out**

``` text
Front                         Rear
  |                             |
  v                             v
+----+----+----+----+
| 10 | 20 | 30 | 40 |
+----+----+----+----+
  ^                    ^
remove                insert
```

Operations:

-   `enqueue(x)`
-   `dequeue()`
-   `front()`
-   `isEmpty()`

Usually:

-   Enqueue: `O(1)`
-   Dequeue: `O(1)`
-   Front: `O(1)`

## Types

-   Simple queue.
-   Circular queue.
-   Deque.
-   Priority queue.

------------------------------------------------------------------------

# 9. Deque

**Deque = Double-Ended Queue**

Insertion and deletion can happen at both ends.

``` text
Front <-> [10] [20] [30] [40] <-> Rear
```

Operations:

-   Insert front.
-   Insert rear.
-   Delete front.
-   Delete rear.

Typical complexity: `O(1)` per end operation.

------------------------------------------------------------------------

# 10. Hash Table / Hash Map

A hash table stores key-value pairs.

``` text
Key -> Hash Function -> Index

"apple" -> hash() -> 3
```

Example:

``` text
{
    "name": "Satyam",
    "age": 20
}
```

Average complexity:

  Operation     Average
  ----------- ---------
  Insert         `O(1)`
  Search         `O(1)`
  Delete         `O(1)`

Worst case can be `O(n)` depending on implementation and collisions.

## Collision Handling

Two common techniques:

### Chaining

Multiple elements are stored in a bucket.

``` text
Bucket 2 -> [A] -> [B] -> [C]
```

### Open Addressing

Find another available position according to a probing strategy.

Common probing methods:

-   Linear probing.
-   Quadratic probing.
-   Double hashing.

------------------------------------------------------------------------

# 11. Recursion

A function calling itself is recursion.

Every recursive solution should have:

1.  **Base case**
2.  **Recursive case**

Example:

``` text
factorial(n):
    if n == 0:
        return 1
    return n * factorial(n - 1)
```

For:

``` text
factorial(5)
```

The calls are:

``` text
5 * factorial(4)
    4 * factorial(3)
        3 * factorial(2)
            2 * factorial(1)
                1 * factorial(0)
```

## Important

Recursion uses the **call stack**.

Common recursive problems:

-   Factorial.
-   Fibonacci.
-   Tree traversal.
-   DFS.
-   Backtracking.
-   Divide and conquer.

------------------------------------------------------------------------

# 12. Searching

## 12.1 Linear Search

Check elements one by one.

``` text
[10, 20, 30, 40, 50]
          ^
        target
```

Time: `O(n)`

Works on unsorted data.

## 12.2 Binary Search

Binary search requires a **sorted** search space.

``` text
[10, 20, 30, 40, 50, 60, 70]
             ^
           middle
```

At each step, eliminate roughly half of the search space.

Time: `O(log n)`

### Binary Search Template

``` text
low = 0
high = n - 1

while low <= high:
    mid = low + (high - low) / 2

    if arr[mid] == target:
        return mid
    else if arr[mid] < target:
        low = mid + 1
    else:
        high = mid - 1

return -1
```

Binary search can also be applied to an **answer space** when a
monotonic condition exists.

------------------------------------------------------------------------

# 13. Sorting

## 13.1 Bubble Sort

Repeatedly swap adjacent elements if they are in the wrong order.

Time:

-   Best: `O(n)` with an optimized implementation.
-   Average: `O(n²)`
-   Worst: `O(n²)`

## 13.2 Selection Sort

Repeatedly select the minimum element and place it at the correct
position.

Time: `O(n²)`

## 13.3 Insertion Sort

Build the sorted portion one element at a time.

Time:

-   Best: `O(n)`
-   Average: `O(n²)`
-   Worst: `O(n²)`

Useful for small or nearly sorted data.

## 13.4 Merge Sort

Divide the array into halves, sort each half, and merge them.

``` text
              [8 3 2 9 7 1]
                 /       \
            [8 3 2]    [9 7 1]
             /   \       /   \
           ...   ...   ...   ...
```

Time: `O(n log n)`

Extra space: typically `O(n)` for arrays.

## 13.5 Quick Sort

Choose a pivot and partition elements around it.

Average: `O(n log n)`

Worst: `O(n²)`

Extra space depends on partition implementation and recursion depth.

## Sorting Comparison

  Algorithm             Best        Average          Worst
  ----------- -------------- -------------- --------------
  Bubble            `O(n)`\*        `O(n²)`        `O(n²)`
  Selection          `O(n²)`        `O(n²)`        `O(n²)`
  Insertion           `O(n)`        `O(n²)`        `O(n²)`
  Merge         `O(n log n)`   `O(n log n)`   `O(n log n)`
  Quick         `O(n log n)`   `O(n log n)`        `O(n²)`

`*` With an early-exit optimization.

------------------------------------------------------------------------

# 14. Trees

A tree is a hierarchical data structure.

``` text
              10
            /    \
           5      15
          / \    /  \
         2   7  12  20
```

Terminology:

-   **Root** --- top node.
-   **Parent** --- node with children.
-   **Child** --- node below a parent.
-   **Leaf** --- node with no children.
-   **Height** --- longest downward path, depending on convention.
-   **Depth** --- distance from root, depending on convention.

------------------------------------------------------------------------

# 15. Binary Tree

A binary tree has at most two children per node:

-   Left child.
-   Right child.

## Traversals

### Preorder

``` text
Root -> Left -> Right
```

### Inorder

``` text
Left -> Root -> Right
```

### Postorder

``` text
Left -> Right -> Root
```

### Level Order

Visit nodes level by level, usually using a queue.

``` text
        1
       / \
      2   3
     / \
    4   5
```

-   Preorder: `1 2 4 5 3`
-   Inorder: `4 2 5 1 3`
-   Postorder: `4 5 2 3 1`
-   Level order: `1 2 3 4 5`

------------------------------------------------------------------------

# 16. Binary Search Tree (BST)

A BST maintains:

``` text
Left subtree < Root < Right subtree
```

Example:

``` text
        8
       / \
      3   10
     / \    \
    1   6    14
```

Average search/insert/delete: `O(log n)` for a reasonably balanced tree.

Worst case: `O(n)` when the tree becomes skewed.

------------------------------------------------------------------------

# 17. Heap

A heap is a complete binary tree satisfying a heap property.

## Min Heap

Parent \<= children.

``` text
        1
       / \
      3   5
     / \
    7   9
```

## Max Heap

Parent \>= children.

Main operations:

  Operation          Complexity
  ---------------- ------------
  Get min/max            `O(1)`
  Insert             `O(log n)`
  Delete min/max     `O(log n)`
  Build heap             `O(n)`

Applications:

-   Priority queues.
-   Heap sort.
-   Top-K problems.
-   Scheduling.
-   Graph algorithms.

------------------------------------------------------------------------

# 18. Trie

A **Trie** is a tree-like structure used for strings and prefixes.

Example words:

``` text
cat
car
can
```

They share the prefix:

``` text
ca
```

Applications:

-   Autocomplete.
-   Dictionary.
-   Prefix search.
-   Spell checking.
-   Word games.

Typical search complexity:

`O(L)`

where `L` is the length of the searched word/prefix.

------------------------------------------------------------------------

# 19. Graphs

A graph consists of:

-   **Vertices / Nodes**
-   **Edges**

``` text
A ----- B
|       |
|       |
C ----- D
```

## Types

-   Directed graph.
-   Undirected graph.
-   Weighted graph.
-   Unweighted graph.
-   Cyclic graph.
-   Acyclic graph.
-   Connected/disconnected graph.

## Representations

### Adjacency Matrix

``` text
matrix[u][v] = 1
```

Space: `O(V²)`

### Adjacency List

``` text
A -> B, C
B -> A, D
C -> A, D
D -> B, C
```

Space: `O(V + E)`

For sparse graphs, adjacency lists are usually preferred.

------------------------------------------------------------------------

# 20. BFS --- Breadth-First Search

BFS explores level by level.

Uses a **queue**.

``` text
Start
  |
  +-- Level 1
       |
       +-- Level 2
            |
            +-- Level 3
```

Time with adjacency lists: `O(V + E)`

Applications:

-   Shortest path in an unweighted graph.
-   Level-order traversal.
-   Connected components.
-   Multi-source BFS.
-   Grid problems.

------------------------------------------------------------------------

# 21. DFS --- Depth-First Search

DFS explores as deeply as possible before backtracking.

Uses:

-   Recursion, or
-   Explicit stack.

Time with adjacency lists: `O(V + E)`

Applications:

-   Connected components.
-   Cycle detection.
-   Topological sorting.
-   Path finding.
-   Backtracking.
-   Tree traversal.

------------------------------------------------------------------------

# 22. Shortest Path Algorithms

## BFS

For unweighted graphs:

``` text
Time = O(V + E)
```

## Dijkstra

For graphs with non-negative edge weights.

Typical complexity with a binary heap:

``` text
O((V + E) log V)
```

## Bellman-Ford

Supports negative edge weights and can detect negative cycles.

Typical complexity:

``` text
O(VE)
```

## Floyd-Warshall

All-pairs shortest paths.

Time:

``` text
O(V³)
```

------------------------------------------------------------------------

# 23. Minimum Spanning Tree

A **Minimum Spanning Tree (MST)** connects all vertices of a connected,
weighted, undirected graph with minimum total edge weight.

Important algorithms:

-   Kruskal's algorithm.
-   Prim's algorithm.

## Kruskal

1.  Sort edges by weight.
2.  Add the smallest edge that does not create a cycle.
3.  Use **Disjoint Set Union (DSU)** to detect cycles efficiently.

Sorting dominates typical complexity:

`O(E log E)`

------------------------------------------------------------------------

# 24. Disjoint Set Union (DSU)

Also called:

-   Union-Find.

Operations:

-   `find(x)` --- find the representative.
-   `union(a, b)` --- merge sets.

Optimizations:

-   Path compression.
-   Union by rank/size.

With both optimizations, operations are effectively near-constant
amortized time:

`O(α(n))`

where `α` is the inverse Ackermann function.

Applications:

-   Kruskal's algorithm.
-   Connected components.
-   Dynamic connectivity.

------------------------------------------------------------------------

# 25. Greedy Algorithms

A greedy algorithm makes the best-looking local choice at each step.

Examples:

-   Activity selection.
-   Fractional knapsack.
-   Huffman coding.
-   Kruskal.
-   Prim.
-   Dijkstra under its required edge-weight condition.

Important:

> A greedy strategy is not automatically correct. You need a proof or
> known property showing that local choices lead to a global optimum.

------------------------------------------------------------------------

# 26. Divide and Conquer

Divide the problem into smaller independent subproblems.

Three steps:

1.  **Divide**
2.  **Conquer**
3.  **Combine**

Examples:

-   Merge sort.
-   Quick sort.
-   Binary search.

------------------------------------------------------------------------

# 27. Backtracking

Backtracking builds a solution incrementally and abandons a partial
solution when it cannot lead to a valid answer.

General pattern:

``` text
choose
explore
unchoose
```

Applications:

-   N-Queens.
-   Sudoku.
-   Permutations.
-   Combinations.
-   Subsets.
-   Maze problems.

------------------------------------------------------------------------

# 28. Dynamic Programming

Dynamic Programming (DP) solves problems with:

1.  **Overlapping subproblems**
2.  **Optimal substructure**

Two common approaches:

### Memoization

Top-down recursion + cache.

``` text
solve(state):
    if state in dp:
        return dp[state]

    dp[state] = ...
    return dp[state]
```

### Tabulation

Bottom-up iterative solution.

``` text
dp[0] = base
for state from small to large:
    dp[state] = ...
```

## Common DP Problems

-   Fibonacci.
-   Climbing stairs.
-   0/1 Knapsack.
-   Coin change.
-   Longest Common Subsequence.
-   Longest Increasing Subsequence.
-   Edit distance.
-   Grid DP.

------------------------------------------------------------------------

# 29. Two Pointers

Use two indices to process a sequence efficiently.

Example:

``` text
[1, 2, 3, 4, 5, 6]
 ^              ^
left           right
```

Common uses:

-   Sorted pair-sum.
-   Removing duplicates.
-   Palindrome checking.
-   Merging arrays.
-   Partitioning.

Often reduces `O(n²)` brute force to `O(n)`.

------------------------------------------------------------------------

# 30. Sliding Window

Used for contiguous subarrays/substrings.

Example:

``` text
[1, 2, 3, 4, 5, 6]
 ^-------^
 window
```

Types:

-   Fixed-size window.
-   Variable-size window.

Common problems:

-   Maximum sum subarray of size `k`.
-   Longest substring without repeating characters.
-   Minimum window substring.
-   Longest subarray satisfying a condition.

------------------------------------------------------------------------

# 31. Prefix Sum

Prefix sums allow fast range-sum queries.

Given:

``` text
arr = [2, 4, 1, 5]
```

Prefix:

``` text
prefix = [0, 2, 6, 7, 12]
```

Range sum from `l` to `r`:

``` text
sum(l, r) = prefix[r + 1] - prefix[l]
```

Preprocessing: `O(n)`

Each range query: `O(1)`

------------------------------------------------------------------------

# 32. Bit Manipulation

Important operators:

  Operator   Meaning
  ---------- -------------
  `&`        AND
  `|`        OR
  `^`        XOR
  `~`        NOT
  `<<`       Left shift
  `>>`       Right shift

Useful identities:

``` text
x ^ 0 = x
x ^ x = 0
x & 1       -> checks odd/even
```

## Common Uses

-   Check/set/clear bits.
-   XOR tricks.
-   Bit masks.
-   Subset generation.
-   Power-of-two checks.

------------------------------------------------------------------------

# 33. Important Data Structure Complexity

  Data Structure           Access           Search           Insert           Delete
  ---------------- -------------- ---------------- ---------------- ----------------
  Array                    `O(1)`           `O(n)`         `O(n)`\*         `O(n)`\*
  Linked List              `O(n)`           `O(n)`       `O(1)`\*\*       `O(1)`\*\*
  Stack              `O(n)`\*\*\*     `O(n)`\*\*\*           `O(1)`           `O(1)`
  Queue              `O(n)`\*\*\*     `O(n)`\*\*\*           `O(1)`           `O(1)`
  Hash Table                  ---       `O(1)` avg       `O(1)` avg       `O(1)` avg
  BST                         ---   `O(log n)` avg   `O(log n)` avg   `O(log n)` avg
  Heap                        ---           `O(n)`       `O(log n)`       `O(log n)`

`*` Depends on position and whether shifting is required.\
`**` When the relevant node/position is already known.\
`***` Stack/queue normally restrict access to their ends, so arbitrary
access/search is not their intended operation.

------------------------------------------------------------------------

# 34. Important Algorithm Patterns

When solving DSA problems, identify the pattern before coding.

## Pattern 1 --- Frequency Map

Use when you need to count occurrences.

``` text
frequency[x]++
```

Useful for:

-   Anagrams.
-   Duplicate detection.
-   Frequency problems.

## Pattern 2 --- Two Pointers

Useful for:

-   Sorted arrays.
-   Palindromes.
-   Pair problems.

## Pattern 3 --- Sliding Window

Useful for:

-   Subarrays.
-   Substrings.
-   Longest/shortest contiguous ranges.

## Pattern 4 --- Binary Search

Ask:

> Is the search space sorted or monotonic?

If yes, binary search may apply.

## Pattern 5 --- BFS

Ask:

> Do I need minimum number of edges/steps in an unweighted graph?

If yes, consider BFS.

## Pattern 6 --- DFS

Ask:

> Do I need to explore connected regions or recursively traverse
> possibilities?

Consider DFS.

## Pattern 7 --- Heap

Ask:

> Do I repeatedly need the smallest/largest element?

Consider a heap.

## Pattern 8 --- Greedy

Ask:

> Can a locally optimal choice be proven to produce a global optimum?

## Pattern 9 --- DP

Ask:

> Are there repeated states/subproblems?

Define the state and transition.

## Pattern 10 --- Backtracking

Ask:

> Do I need to explore many possible choices and undo decisions?

------------------------------------------------------------------------

# 35. Problem-Solving Framework

Use this process for DSA problems:

``` text
1. Understand the problem
        ↓
2. Identify input/output
        ↓
3. Check constraints
        ↓
4. Create examples
        ↓
5. Think of brute force
        ↓
6. Find the bottleneck
        ↓
7. Identify a pattern
        ↓
8. Optimize
        ↓
9. Analyze time/space
        ↓
10. Code
        ↓
11. Test edge cases
```

## Always Check Constraints

Constraints often tell you the expected complexity.

Rough intuition:

             n Usually consider
  ------------ ---------------------------------------------------
     `n <= 10` Brute force / exponential may work
     `n <= 20` Backtracking / bitmask / exponential with pruning
    `n <= 10²` `O(n³)` may sometimes work
    `n <= 10³` `O(n²)` may work
    `n <= 10⁵` Usually `O(n log n)` or `O(n)`
    `n <= 10⁶` Usually close to `O(n)`

These are guidelines, not strict rules; actual operation counts and time
limits matter.

------------------------------------------------------------------------

# 36. Edge Cases Checklist

Before submitting a solution, test:

-   Empty input.
-   One element.
-   Duplicate values.
-   Already sorted data.
-   Reverse sorted data.
-   Negative numbers.
-   Very large values.
-   Minimum/maximum constraints.
-   All values equal.
-   No valid answer.
-   Multiple valid answers.
-   Boundary indices.
-   Integer overflow where applicable.

------------------------------------------------------------------------

# 37. Recommended DSA Learning Order

``` text
Programming Basics
        ↓
Complexity Analysis
        ↓
Arrays & Strings
        ↓
Linked Lists
        ↓
Stack & Queue
        ↓
Hashing
        ↓
Recursion
        ↓
Searching & Sorting
        ↓
Trees & BST
        ↓
Heap / Priority Queue
        ↓
Trie
        ↓
Graphs
        ↓
Greedy
        ↓
Backtracking
        ↓
Dynamic Programming
        ↓
Advanced Algorithms
```

------------------------------------------------------------------------

# 38. Core Topics Checklist

## Fundamentals

-   [ ] Big-O
-   [ ] Time complexity
-   [ ] Space complexity
-   [ ] Recursion
-   [ ] ADT

## Linear Data Structures

-   [ ] Arrays
-   [ ] Strings
-   [ ] Linked Lists
-   [ ] Stack
-   [ ] Queue
-   [ ] Deque

## Hashing

-   [ ] Hash Map
-   [ ] Hash Set
-   [ ] Collision handling
-   [ ] Frequency counting

## Searching & Sorting

-   [ ] Linear Search
-   [ ] Binary Search
-   [ ] Bubble Sort
-   [ ] Selection Sort
-   [ ] Insertion Sort
-   [ ] Merge Sort
-   [ ] Quick Sort
-   [ ] Heap Sort

## Trees

-   [ ] Binary Tree
-   [ ] Tree Traversals
-   [ ] BST
-   [ ] Heap
-   [ ] Trie

## Graphs

-   [ ] BFS
-   [ ] DFS
-   [ ] Cycle Detection
-   [ ] Topological Sort
-   [ ] Shortest Path
-   [ ] MST
-   [ ] DSU

## Problem-Solving Patterns

-   [ ] Two Pointers
-   [ ] Sliding Window
-   [ ] Prefix Sum
-   [ ] Binary Search on Answer
-   [ ] Greedy
-   [ ] Divide and Conquer
-   [ ] Backtracking
-   [ ] Dynamic Programming
-   [ ] Bit Manipulation

------------------------------------------------------------------------

# 39. Quick Revision Sheet

``` text
ARRAY
Access             O(1)
Search             O(n)

STACK
Push               O(1)
Pop                O(1)
Peek               O(1)
Rule               LIFO

QUEUE
Enqueue            O(1)
Dequeue            O(1)
Rule               FIFO

HASH TABLE
Search             O(1) average
Insert             O(1) average
Delete             O(1) average

BINARY SEARCH
Requirement        Sorted/monotonic search space
Time               O(log n)

MERGE SORT
Time               O(n log n)
Extra array space  O(n)

BST
Average operations O(log n)
Worst case         O(n)

HEAP
Top element        O(1)
Insert             O(log n)
Delete top         O(log n)

BFS
Data structure     Queue
Graph time         O(V + E)

DFS
Data structure     Stack/Recursion
Graph time         O(V + E)

DIJKSTRA
Requirement        Non-negative edge weights

DP
Key idea           Overlapping subproblems
                   + optimal substructure

GREEDY
Key idea           Best local choice
Requirement        Correctness proof/property
```

------------------------------------------------------------------------

# 40. Final DSA Mindset

Do not memorize solutions only.

For every problem, ask:

1.  **What is the brute-force solution?**
2.  **What makes it slow?**
3.  **What information can I store?**
4.  **Can hashing help?**
5.  **Can sorting help?**
6.  **Can two pointers help?**
7.  **Can a sliding window help?**
8.  **Is the search space monotonic?**
9.  **Do I need a stack or queue?**
10. **Is this a tree/graph traversal?**
11. **Do I repeatedly need min/max?**
12. **Are there overlapping subproblems?**
13. **Can I use greedy/backtracking/DP?**
14. **What are the time and space complexities?**

> **The goal of DSA is not just to write code that works.**
>
> **The goal is to understand why it works and make it efficient.**
