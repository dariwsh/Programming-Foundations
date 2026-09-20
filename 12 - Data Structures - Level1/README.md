# 📚 Data Structures - Level 1: Core Prerequisites & Fundamentals

Welcome to the **Data Structures (Level 1)** prerequisite reference repository! This folder serves as a comprehensive, well-structured reference guide to key C++ programming concepts required before diving into advanced data structures like Linked Lists, Stacks, Queues, Trees, and Graphs.

---

## 📂 Topic Index & Directory Structure

| # | Topic Name | Directory | Key Concepts Covered |
|---|---|---|---|
| **01** | **1D Arrays Revision** | [`01 - Revision 1D Arrays`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/01%20-%20Revision%201D%20Arrays) | • Contiguous memory layout<br>• Traditional loops vs. Range-based `for`<br>• Min/Max search, sum/average, array reversal |
| **02** | **2D Arrays & Matrices** | [`02 - Revision 2D Arrays`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/02%20-%20Revision%202D%20Arrays) | • Row-Major memory indexing<br>• 10x10 Multiplication table & formatted output<br>• Row/Column sums, main/anti-diagonal traversal<br>• Matrix transposition |
| **03** | **Pointers & Memory** | [`03 - Revision Pointers`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/03%20-%20Revision%20Pointers) | • Address-of (`&`) and Dereference (`*`) operators<br>• Pointer reassignment & memory inspection<br>• Defensive programming with `nullptr`<br>• Pass-by-Value vs. Pass-by-Pointer vs. Pass-by-Reference<br>• Pointer arithmetic |
| **04** | **Dynamic Memory Allocation** | [`04 - Revision Dynamic Arrays`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/04%20-%20Revision%20Dynamic%20Arrays) | • Stack vs. Heap memory allocation<br>• Dynamic array allocation (`new[]`) and deallocation (`delete[]`) <br>• Preventing memory leaks<br>• Manual dynamic array resizing |
| **05** | **Recursion Fundamentals** | [`05 - Revision Recursion`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/05%20-%20Revision%20Recursion) | • Base Case vs. Recursive Step definition<br>• Understanding the OS Call Stack<br>• Classic recursive patterns: Powers ($Base^{Power}$), Factorial ($N!$), Fibonacci, and recursive array traversal |

---

## ⚙️ Building and Running Projects

All projects are fully configured for **Visual Studio** (`.slnx` / `.vcxproj`).

### Option 1: Visual Studio IDE
Open any `.slnx` solution file located inside the respective topic directory in Visual Studio and hit `Ctrl + F5` to compile and run.

### Option 2: Command Line (MSBuild / C++ Compiler)
```powershell
# Example: Building the Dynamic Arrays project via MSBuild
MSBuild "04 - Revision Dynamic Arrays\Dynmaic Array\Dynmaic Array.vcxproj" /p:Configuration=Debug /p:Platform=x64

# Executing the compiled binary
& "04 - Revision Dynamic Arrays\Dynmaic Array\x64\Debug\Dynmaic Array.exe"
```

---

## 🎯 Important Guidelines for Data Structures

1. **Master Pointers:** Pointer arithmetic and reference manipulation are foundational for linked structures (Nodes, Trees, Graphs).
2. **Memory Clean-up:** Always pair every `new[]` statement with `delete[]` to avoid memory leakage in production code.
3. **Recursive Reasoning:** Understanding call stack behavior is critical for tree traversals, graph searches (DFS), and divide-and-conquer sorting algorithms (QuickSort, MergeSort).

---
*Maintained and structured for clear reference & foundational mastery.*
