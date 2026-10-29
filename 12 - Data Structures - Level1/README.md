# 🚀 Data Structures - Level 1: Foundations & Core Implementations

Welcome to the **Data Structures (Level 1)** reference repository! This repository documents a comprehensive, hands-on learning journey through foundational data structures, algorithmic complexity, memory management, and practical C++ implementations based on the **ProgrammingAdvices Course 12** curriculum by Dr. Mohammed Abu-Hadhoud.

---

## 👨‍💻 Connect with Me

I am sharing my journey in learning practical software engineering and computer science foundations. Feel free to connect and follow my progress!

- 🔗 **LinkedIn:** [Ahmed Darwish](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
- 🌐 **Portfolio:** [darwish.xo.je](https://darwish.xo.je/)
- 💻 **GitHub:** [@dariwsh](https://github.com/dariwsh)

---

## 📌 Course Roadmap & Module Directory

The course covers fundamental concepts from memory prerequisites up to linear data structures, algorithm complexity analysis, and C++ Standard Template Library (STL) utilities.

| Module / Topic | Directory / Lecture | Key Concepts & Techniques |
| :--- | :--- | :--- |
| **01. 1D Arrays Revision** | [`01 - Revision 1D Arrays`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/01%20-%20Revision%201D%20Arrays) | Contiguous memory allocation, element indexing, min/max search, array traversal |
| **02. 2D Arrays & Matrices** | [`02 - Revision 2D Arrays`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/02%20-%20Revision%202D%20Arrays) | Row-major layout, 2D grid iteration, matrix transposition, diagonal traversal |
| **03. Pointers & Memory** | [`03 - Revision Pointers`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/03%20-%20Revision%20Pointers) | Addresses (`&`), dereferencing (`*`), pointer arithmetic, pass-by-pointer vs pass-by-reference |
| **04. Dynamic Array Allocation** | [`04 - Revision Dynamic Arrays`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/04%20-%20Revision%20Dynamic%20Arrays) | Stack vs Heap memory, dynamic allocation (`new[]`), deallocation (`delete[]`), avoiding memory leaks |
| **05. Recursion Fundamentals** | [`05 - Revision Recursion`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/05%20-%20Revision%20Recursion) | Base cases, recursive steps, execution call stack, factorials, Fibonacci, recursive array operations |
| **06. STL Stack** | [`06 - STL Stack`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/06%20-%20STL%20Stack) | LIFO (Last-In, First-Out) operations using `std::stack`, `push()`, `pop()`, `top()`, `empty()` |
| **07. Stack Operations & Swap** | [`07 - Stack Swap`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/07%20-%20Stack%20Swap) | Interchanging stack contents using `swap()`, stack state duplication and modification |
| **08. STL Queue** | [`08 - STL Queue`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/08%20-%20STL%20Queue) | FIFO (First-In, First-Out) queue management with `std::queue`, `push()`, `pop()`, `front()`, `back()` |
| **09. Queue Operations & Swap** | [`09 - Queue Swap`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/09%20-%20Queue%20Swap) | Swapping queues efficiently using `swap()`, FIFO processing loops |
| **10. Singly Linked List (SLL) Core** | [`10 - Singly Linked List Implementation`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/10%20-%20Singly%20Linked%20List%20Implementation) | Dynamic node creation (`Node*`), head pointer tracking, manual node linking, forward traversal |
| **11. SLL Insert At Beginning** | [`11 - SLL Insert At Beginning`](file:///i:/Programming-Foundations/12%20-%20SLL%20Insert%20At%20Beginning) | $O(1)$ head insertion technique: creating new node, re-pointing `next`, updating `head` |
| **12. SLL Find Node** | [`12 - SLL Find Node`](file:///i:/Programming-Foundations/12%20-%20SLL%20Find%20Node) | Linear search algorithm over linked list nodes, matching values, returning node pointers |
| **13. SLL Insert After** | [`13 - SLL Insert After`](file:///i:/Programming-Foundations/12%20-%20SLL%20Insert%20After) | Arbitrary node insertion: locating target node, linking new node to `target->next`, re-linking `target->next` |
| **14. SLL Insert At End** | [`14 - SLL Insert At End`](file:///i:/Programming-Foundations/12%20-%20SLL%20Insert%20At%20End) | Appending to tail: traversing to the end node (`next == nullptr`), updating tail's `next` pointer |
| **15. SLL Delete Node** | [`15 - SLL Delete Node`](file:///i:/Programming-Foundations/12%20-%20SLL%20Delete%20Node) | General node deletion: updating predecessor's `next` pointer, freeing dynamic memory (`delete`) |
| **16. SLL Delete First Node** | [`16 - SLL Delete First Node`](file:///i:/Programming-Foundations/12%20-%20SLL%20Delete%20First%20Node) | $O(1)$ head deletion: temporary pointer storage, re-assigning head to `head->next`, memory cleanup |
| **17. Doubly Linked List (DLL) Core** | [`17 - Doubly Linked List Implementation`](file:///i:/Programming-Foundations/12%20-%20Doubly%20Linked%20List%20Implementation) | Two-way node navigation: `prev` and `next` pointers, bidirectional traversal mechanics |
| **18. DLL Insert At Beginning** | [`18 - DLL Insert At Beginning`](file:///i:/Programming-Foundations/12%20-%20DLL%20Insert%20At%20Beginning) | Head insertion in DLL: updating `next` and `prev` pointers of new and existing head nodes |
| **19. DLL Find Node** | [`19 - DLL Find Node`](file:///i:/Programming-Foundations/12%20-%20DLL%20Find%20Node) | Efficient node lookup in double-ended/bidirectional linked list structures |
| **20. DLL Insert After** | [`20 - DLL Insert After`](file:///i:/Programming-Foundations/12%20-%20DLL%20Insert%20After) | Re-linking 4 pointer connections (`new->next`, `new->prev`, `prev->next`, `next->prev`) safely |
| **21. DLL Insert At End** | [`21 - DLL Insert At End`](file:///i:/Programming-Foundations/12%20-%20DLL%20Insert%20At%20End) | Tail insertion handling empty list edge cases vs multi-node list tail expansion |
| **22. DLL Delete Node** | [`22 - DLL Delete Node`](file:///i:/Programming-Foundations/12%20-%20DLL%20Delete%20Node) | Removing internal/head/tail nodes safely without causing dangling pointers or lost links |
| **23. DLL Delete First Node** | [`23 - DLL Delete First Node`](file:///i:/Programming-Foundations/12%20-%20DLL%20Delete%20First%20Node) | Deleting head node in DLL and adjusting the new head's `prev` pointer to `nullptr` |
| **24. DLL Delete Last Node** | [`24 - DLL Delete Last Node`](file:///i:/Programming-Foundations/12%20-%20DLL%20Delete%20Last%20Node) | Finding and deleting the last node, updating predecessor's `next` pointer to `nullptr` |
| **25. STL Map** | [`25 - STL Map`](file:///i:/Programming-Foundations/12%20-%20STL%20Map) | Associative key-value containers using `std::map`, balanced BST storage, lookups, insertion |
| **26. C++ Union** | [`26 - C++ Union`](file:///i:/Programming-Foundations/12%20-%20C++%20Union) | Shared memory structures, memory layout optimization, type-punning, saving space |

---

## 💡 Key Theoretical Topics Covered

- **Data Structures vs Databases:** Differences in volatile RAM storage vs persistent disk storage.
- **Data Structure Classifications:** Linear vs Non-Linear, Primitive vs Non-Primitive, Static vs Dynamic.
- **Big O Notation & Complexity Analysis:**
  - $O(1)$ — Constant Time (Direct array lookup, Stack push/pop)
  - $O(n)$ — Linear Time (Unsorted array search, Linked List traversal)
  - $O(n^2)$ — Quadratic Time (Nested loops, Matrix processing)
  - $O(\log n)$ — Logarithmic Time (Binary search, Balanced BST lookup)
- **Abstract Data Types (ADT):** Separating functional specification (what operations do) from implementation details (how data is stored).

---

## 🛠️ Build and Execution Guide

All code examples are configured for **Visual Studio 2022** solutions (`.slnx` / `.vcxproj`).

### Running via Visual Studio
1. Navigate into any topic folder (e.g., `10 - Singly Linked List Implementation`).
2. Open the solution file (`.slnx`).
3. Press `Ctrl + F5` or click **Start Without Debugging**.

### Running via Command Line (MSBuild / C++ Compiler)
```powershell
# Example: Building the Singly Linked List project via MSBuild
MSBuild "10 - Singly Linked List Implementation\10-   Singly Linked List Implementation.slnx" /p:Configuration=Debug /p:Platform=x64

# Executing the compiled binary
& "10 - Singly Linked List Implementation\x64\Debug\10-   Singly Linked List Implementation.exe"
```

---

## 🎯 Primary Engineering Focus & Learning Objectives

1. **Pointer & Memory Mastery:** Building linked structures requires precise control over node allocation on the heap and pointer manipulation.
2. **Leak-Free C++ Coding:** Ensuring every allocated node (`new Node()`) is explicitly destroyed (`delete node`) to prevent memory leaks.
3. **Algorithm Efficiency:** Evaluating operations based on Big O time and space tradeoffs.

---
*Maintained by Ahmed Darwish as part of the Computer Science Foundations curriculum.*
