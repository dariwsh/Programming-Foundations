# C++ Lesson — Input Validation


---

## 📌 Overview
This lesson explains how to safely read numbers from the user and prevent invalid input from breaking the program.

---

## 🧠 Core Idea
> Never trust user input.

Always validate:
- Data type (number vs text)
- Range (accepted values)

---

## 🔧 Basic Validation

```cpp
while(!(cin >> num))
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
```

---

## 🔍 How It Works

| Function | Purpose |
|--------|--------|
| `cin >> num` | tries to read input |
| `cin.fail()` | detects invalid input |
| `cin.clear()` | resets error state |
| `cin.ignore()` | clears buffer |

---

## 🔁 Full Example (Best Practice)

```cpp
#include <iostream>
#include <limits>
using namespace std;

int ReadNumber()
{
    int num;

    while (true)
    {
        cout << "Enter a number (1 - 5): ";

        if (cin >> num && num >= 1 && num <= 5)
            return num;

        cout << "Invalid input, try again.\n";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main()
{
    cout << ReadNumber();
}
```

---

## ⚠️ Common Mistakes

- ❌ Using `cin >>` without validation  
- ❌ Forgetting `cin.clear()`  
- ❌ Forgetting `cin.ignore()`  
- ❌ Not checking range  

---

## 💡 Key Takeaways

- Validation prevents crashes  
- Always clean the input buffer  
- Combine type + range validation  

---

## 🎯 Goal
Write safe and reliable programs that handle user input correctly.

## 👨‍💻 Author
Ahmed Darwish
