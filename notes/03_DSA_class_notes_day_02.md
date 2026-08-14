# Abstract Data Type (ADT)

## Definition

**Abstract Data Type (ADT)** is a **mathematical model for a data type** that defines **what operations can be performed on data and what those operations do**, without specifying how they are implemented.

In simple words:

> **ADT describes what a data structure does, not how it does it.**

### Example

A **Stack ADT** supports operations such as:

* `push()` — insert an element
* `pop()` — remove the top element
* `peek()` — view the top element
* `isEmpty()` — check whether the stack is empty

The stack can be implemented using an **array or linked list**, but the ADT remains the same.

---

## What is an ADT?

An ADT specifies:

1. **Data** — what kind of data is stored.
2. **Operations** — what operations can be performed.
3. **Behavior** — what each operation should do.

It does **not** specify the internal implementation.

---

## Why do we use ADT?

ADT is useful because it:

* Provides **abstraction** by hiding implementation details.
* Makes programs easier to **design and understand**.
* Allows different implementations of the same data type.
* Improves **modularity and maintainability**.
* Makes code easier to modify without changing how users interact with it.

### Example

A **Queue ADT** can be implemented using:

* Array
* Linked List
* Circular Array

The user only needs to know operations such as `enqueue()` and `dequeue()`.

---

## How does an ADT work?

An ADT works through a **well-defined interface**.

```text
        User / Program
              |
              ↓
     ┌─────────────────┐
     │   ADT Interface │
     │ push()          │
     │ pop()           │
     │ peek()          │
     └─────────────────┘
              |
              ↓
     ┌─────────────────┐
     │ Implementation  │
     │ Array / Linked  │
     │ List / Other    │
     └─────────────────┘
```

The user interacts with the interface and does not need to know the internal implementation.

---

## Where are ADTs used?

ADTs are widely used in **Data Structures and Software Engineering**.

Examples:

| ADT   | Common Operations                  | Possible Implementation |
| ----- | ---------------------------------- | ----------------------- |
| Stack | `push()`, `pop()`, `peek()`        | Array, Linked List      |
| Queue | `enqueue()`, `dequeue()`           | Array, Linked List      |
| List  | `insert()`, `delete()`, `search()` | Array, Linked List      |
| Set   | `add()`, `remove()`, `contains()`  | Hash Table, Tree        |
| Map   | `put()`, `get()`, `remove()`       | Hash Table, Tree        |

---

# Three Characteristics of an ADT

## 1. Encapsulation

**Encapsulation** means combining data and the operations that work on that data into a single logical unit.

It prevents direct and uncontrolled access to the internal data.

### Example

In a Stack ADT, the user uses:

```cpp
stack.push(10);
stack.pop();
```

Instead of directly modifying the internal storage.

---

## 2. Information Hiding

**Information hiding** means hiding the internal implementation details from the user.

The user only needs to know **what operations are available**, not **how they are implemented**.

### Example

A Stack may internally use an array:

```text
Stack → Array → [10, 20, 30]
```

But the user does not need to know that an array is being used.

If the implementation changes from an array to a linked list, the interface can remain the same.

---

## 3. Well-Defined Interface

A **well-defined interface** specifies the operations that users can perform on the ADT and the expected behavior of those operations.

### Example: Stack Interface

```text
push(x)       → Adds x to the top
pop()         → Removes the top element
peek()        → Returns the top element
isEmpty()     → Checks whether the stack is empty
```

The interface provides a clear way for users to interact with the ADT.

---

# Key Point

> **ADT = What + Behavior, not How**

For example:

**Stack ADT** tells us that we can `push`, `pop`, and `peek`, but it does not tell us whether the stack must be implemented using an array or a linked list.


