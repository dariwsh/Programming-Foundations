# 📘 C++ Lesson — Vector Input & Output

<p align="center">
  <img src="https://img.shields.io/badge/C++-Vector-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Concept-User%20Input-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson demonstrates how to:

* Read data into a vector from the user
* Store values dynamically using `push_back`
* Print vector elements using loops

> 🎯 Goal: Build dynamic input systems using vectors

---

## 🧠 Key Idea

> Vector allows continuous input without knowing the size in advance

---

## 🔹 Read Data into Vector

```cpp
void ReadVector(vector<int> &Vnumber)
{
    int Number;
    char Check = 'Y';

    do
    {
        cout << "Please Enter A Number: ";
        cin >> Number;

        Vnumber.push_back(Number);

        cout << "Do You want to add more? Y/N: ";
        cin >> Check;

    } while (Check == 'Y' || Check == 'y');
}
```

---

## 🔹 Print Vector

```cpp
void PrintVector(vector<int> &Vnumber)
{
    cout << "The Vector: ";

    for (int &i : Vnumber)
    {
        cout << i << " ";
    }

    cout << endl;
}
```

---

## 🔹 Main Function

```cpp
int main()
{
    vector<int> Vnumber;

    ReadVector(Vnumber);
    PrintVector(Vnumber);

    return 0;
}
```

---

## 🧠 Concepts Used

* `vector<int>` → dynamic storage
* `push_back()` → add elements
* `&` (reference) → avoid copying
* loop → access elements

---

## 🔥 How It Works

```text
User enters numbers → stored in vector
Loop continues until user enters N
Then all numbers are printed
```

---

## 💣 Important Notes

* Always use reference (`&`) with vectors in functions
* Avoid copying vectors (performance issue)
* Validate user input in real applications

---

## 🧪 Example Run

```
Please Enter A Number: 10
Do You want to add more? Y/N: y
Please Enter A Number: 20
Do You want to add more? Y/N: n

The Vector: 10 20
```

---

## 🎯 Goal

> Learn how to build interactive programs using vectors

---

## 🚀 Next Step

* Add validation (only numbers)
* Calculate sum / average
* Search inside vector
