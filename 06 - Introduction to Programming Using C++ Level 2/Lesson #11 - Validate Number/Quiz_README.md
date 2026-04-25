# C++ Quiz — Input Validation

## 👨‍💻 Author
Ahmed Darwish

---

## 📌 Topics Covered
- cin.fail()
- cin.clear()
- cin.ignore()
- Input validation
- Buffer handling

---

## 🧪 Questions

### Q1
```cpp
cin >> x;
```
❓ What is the problem with this line?

---

### Q2
```cpp
while(cin.fail())
```
❓ When does this loop run?

---

### Q3
```cpp
cin.clear();
```
❓ What does it do?

---

### Q4
```cpp
cin.ignore(2, '\n');
```
❓ Why is this dangerous?

---

### Q5
What happens if we remove `cin.ignore()`?

---

### Q6
Write a function that:
- reads a number
- prevents invalid input
- accepts only values from 1 to 5

---

## 🎯 هدف الكويز
Test real understanding of input validation and buffer handling.

---

## 🧠 Hint
> clear fixes the error, ignore cleans the buffer.