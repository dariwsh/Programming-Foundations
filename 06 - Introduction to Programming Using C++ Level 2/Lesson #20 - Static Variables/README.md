# 📘 Lesson 4 — More About Variables

> Part of: [Programming Foundations – C++ Level 2](https://github.com/dariwsh/Programming-Foundations/tree/main/06%20-%20Introduction%20to%20Programming%20Using%20C%2B%2B%20Level%202)

---

## 📋 Topics Covered

| # | Topic | Summary |
|---|-------|---------|
| 20 | Static Variables | Variables that keep their value between function calls |
| 21 | Automatic Variables | Default local variables, stored on the Stack |
| 22 | Register Variables | Hint to compiler to store variable in CPU register |

---

## 20 — Static Variables

A `static` variable inside a function is **initialized only once** and retains its value across all subsequent calls.

```cpp
void MyFunc() {
    static int Number = 1;   // initialized once
    cout << "Value: " << Number << "\n";
    Number++;
}

int main() {
    MyFunc();  // Output: Value: 1
    MyFunc();  // Output: Value: 2
    MyFunc();  // Output: Value: 3
}
```

### Without `static` vs With `static`

| Behavior | Normal Variable | Static Variable |
|----------|----------------|-----------------|
| Initialized | Every function call | Once only |
| Value reset | Yes, every call | No, persists |
| Lifetime | Lifetime of the function | Lifetime of the program |
| Storage | Stack | Data Segment |

### Key Rules
- The `static` keyword is written once before the type: `static int x = 0;`
- The variable is scoped to the function — not accessible from outside
- Even if the function ends, the value stays in memory

---

## 21 — Automatic Variables

Normal local variables are called **automatic** — they are created when a block starts and destroyed when it ends.

```cpp
int main() {
    auto x   = 10;               // Type: int
    auto y   = 12.5;             // Type: double
    auto z   = "Mohammed";       // Type: string
}
```

> Since C++11, `auto` also works for **type inference** — the compiler deduces the type from the assigned value.

---

## 22 — Register Variables

A **register variable** is a hint to the compiler to store the variable in a CPU register for faster access.

```cpp
void example() {
    register int counter = 0;
}
```

> **Note:** Modern compilers largely ignore `register` and optimize on their own. The keyword is deprecated in C++17.

---

## 📁 File Structure

```
Lesson 04 - More About Variables/
├── README.md
├── 20_static_variables.cpp
├── 21_automatic_variables.cpp
└── 22_register_variables.cpp
```

---

## 🔗 Resources

- [C++ Reference — Storage Duration](https://en.cppreference.com/w/cpp/language/storage_duration)
- [C++ Reference — auto specifier](https://en.cppreference.com/w/cpp/language/auto)
