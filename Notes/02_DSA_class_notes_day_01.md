# Abstract Data Type (ADT)

## Definition

An **Abstract Data Type (ADT)** is a logical definition of a data type
that describes **what it does (behavior and operations)** while **hiding
how it is implemented internally**.

> **ADT = WHAT**\
> **Implementation/Data Structure = HOW**

## Example: Stack ADT

A **Stack** follows the **LIFO (Last In, First Out)** principle.

``` text
                 STACK ADT
                     │
            ┌────────┴────────┐
            ↓                 ↓
      Array-based       Linked-list-based
      implementation     implementation
```

The **Stack ADT** defines operations such as:

-   `push()` → adds an element to the top
-   `pop()` → removes the top element
-   `peek()` / `top()` → returns the top element
-   `isEmpty()` → checks whether the stack is empty

## Important Point

The Stack ADT **does not specify** whether the stack must use an array
or linked list.

It can be implemented using:

``` text
Stack ADT
   │
   ├── Array
   │
   └── Linked List
```

For example:

``` text
push(10)
push(20)
push(30)

        TOP
         ↓
       [30]
       [20]
       [10]
```

Then:

``` text
pop() → 30
```

The behavior remains the same regardless of the internal implementation.

## ADT vs Implementation

  ADT                                   Implementation
  ------------------------------------- ---------------------------------------
  Defines **what** the structure does   Defines **how** it works
  Describes operations                  Contains actual code/data storage
  Hides implementation details          Uses Array, Linked List, etc.
  Example: Stack                        Array-based Stack / Linked-list Stack

## One-Line Exam Definition

> **An ADT is a logical model of a data type that specifies its
> operations and behavior without specifying its implementation.**

## Easy Way to Remember

``` text
ADT                  → WHAT?
Data Structure       → HOW?
Algorithm            → STEPS TO SOLVE
```

### Example

``` text
Stack ADT
   ↓
push(), pop(), peek()
   ↓
Can be implemented using
   ↓
Array OR Linked List
```

> **`push()` and `pop()` are operations defined by the Stack ADT; Array
> or Linked List determines how those operations are implemented
> internally.**
