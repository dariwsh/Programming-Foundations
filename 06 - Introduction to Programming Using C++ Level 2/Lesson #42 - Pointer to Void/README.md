# 📘 C++ Lesson 42 — Void Pointer (`void*`)

<p align="center">
  <img src="https://img.shields.io/badge/C++-VoidPointer-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/C++-Memory-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Concept-Generic%20Pointer-green?style=for-the-badge"/>
</p>

---

# 👨‍💻 Author

Ahmed Darwish

---

# 📌 Overview

This lesson explains:

* What `void*` means
* Generic pointers
* Type casting
* Why dereferencing requires casting
* How low-level memory systems work

---

# 🧠 Core Concept

```text id="q4x7mn"
void* = Generic Pointer
```

A `void*` can store:

* int address
* float address
* char address
* struct address
* object address

---

# 🔥 Example

```cpp id="m8v2pk"
void *ptr;
```

---

# 🧠 Important Insight

```text id="r1k9wx"
void pointer knows address only
NOT data type
```

---

# 🔹 Example Code

```cpp id="c5m3zn"
float f1 = 10.5;

void *ptr;

ptr = &f1;
```

Now:

```text id="n7q2vu"
ptr stores address of float
```

But:

```text id="x3w8kp"
Compiler does not know it is float
```

---

# 💣 Why Dereference Fails

---

## ❌ Wrong

```cpp id="t6m1qx"
*ptr
```

---

# 🧠 Why?

Because compiler does not know:

* data type
* size
* memory interpretation

---

# 🔥 Solution → Type Casting

```cpp id="k9v4mr"
static_cast<float*>(ptr)
```

Meaning:

```text id="p2x7zn"
Treat ptr as float pointer
```

---

# 🔥 Correct Dereference

```cpp id="f5w3kq"
*(static_cast<float*>(ptr))
```

---

# 🎯 Output

```text id="u8m1rv"
10.5
```

---

# 🔹 Second Example

```cpp id="z7x4pm"
int x = 1000;

ptr = &x;

cout << *(static_cast<int*>(ptr));
```

---

# 🎯 Output

```text id="d2q9kw"
1000
```

---

# 🧠 Memory Model

```text id="m4w7xn"
Address      Value

0x100        10.5
0x200        1000
```

`ptr` stores addresses only.

---

# 🔥 Why `void*` Is Important

Because it enables:

```text id="v1k5pq"
Generic memory handling
```

---

# 💣 Used In

* Memory allocators
* Operating Systems
* Game Engines
* Generic libraries
* Low-level APIs
* C libraries

---

# 🔥 Famous Real Example

```cpp id="x8m2rv"
malloc()
```

returns:

```cpp id="q3w6kn"
void*
```

---

# 🧠 Why?

Because:

```text id="t9x1mp"
malloc does not know desired data type
```

---

# 🔥 Example

```cpp id="j7v4px"
int *p = (int*)malloc(sizeof(int));
```

---

# ⚠️ Dangerous Mistakes

---

## ❌ Wrong Cast

```cpp id="s5m8zw"
float x = 10.5;

void *ptr = &x;

cout << *(static_cast<int*>(ptr));
```

---

# 💣 Problem

```text id="g2q7wv"
Reading memory with wrong type
```

May cause:

* Garbage values
* Undefined behavior
* Crash

---

# 🧠 Senior-Level Insight

```text id="y4m1kn"
void* removes type information
```

Compiler loses:

* size
* operations
* memory interpretation

---

# 🔥 Casting Restores Type Information

```cpp id="r8x3pq"
static_cast<float*>(ptr)
```

returns:

```text id="n6w2mv"
Typed pointer again
```

---

# 💣 Golden Rule

```text id="k1m7zx"
void pointer stores address only
```

NOT:

```text id="w5q4rp"
data type information
```

---

# 🔥 Full Example

```cpp id="b9x2mk"
#include <iostream>
using namespace std;

int main()
{
    void *ptr;

    float f1 = 10.5;
    int x = 1000;

    ptr = &f1;

    cout << *(static_cast<float*>(ptr)) << endl;

    ptr = &x;

    cout << *(static_cast<int*>(ptr));

    return 0;
}
```

---

# 🚀 What You Learned

✔️ Generic Pointers
✔️ `void*` Concept
✔️ Type Casting
✔️ Dereferencing Rules
✔️ Low-Level Memory Access
✔️ Why Casting Is Necessary

---

# 📚 Next Step

* Dynamic Memory Allocation
* malloc / new
* Raw Memory Manipulation
* Advanced Pointer Systems

---

<p align="center">
  Made with ❤️ by Ahmed Darwish
</p>
