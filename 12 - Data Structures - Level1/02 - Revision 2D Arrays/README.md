# 02 - Revision 2D Arrays & Matrices (المصفوفات ثنائية الأبعاد)

## 📌 Topic Overview / نظرة عامة
2D Arrays represent grid-like data structures composed of rows and columns. This module covers row-major indexing, 2D grid iteration, multiplication table generation, row/column sum calculations, diagonal traversals (main & anti-diagonal), and matrix transposition.

المصفوفات ثنائية الأبعاد تُستخدم لتمثيل البيانات على هيئة شبكة (صفوف وأعمدة). يغطي هذا الدرس كيفية التعامل مع Matrices والتحكم في عناصرها باستخدام 2D Loops.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Traversing a 2D Matrix
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Nested Loops Grid Iteration:** استخدام الـ Loops المتداخلة للتنقل عبر الصفوف والأعمدة وإجراء عمليات مثل حساب المجموع أو التدوير (Matrix Transposition).

---

## 🧠 الخلاصة (Key Takeaways)
1. **Row-Major Memory Layout:** في C++، الـ 2D Array تتخزن في الـ Memory كـ 1D Array متصلة صفاً تلو الآخر.
2. **Indexing Standard:** العنصر يتحدد بـ `matrix[row][col]`.
3. **Square Matrix Diagonals:** الـ Main Diagonal فيه دائماً `row == col`.

---

## 🔑 أهم Syntax
- **Declaration:** `int matrix[ROWS][COLS];`
- **Access Element:** `int x = matrix[r][c];`

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Swapping Row and Column Bounds:** الخلط بين عدد الصفوف وعدد الأعمدة عند كتابة الـ Nested Loops للمصفوفات غير المربعة (Rectangular Matrices)، مما يسبب Crash عند الوصول لـ Index خاطئ.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Matrix** | مصفوفة ثنائية الأبعاد |
| **Row** | صف |
| **Column** | عمود |
| **Nested Loops** | حلقات تكرارية متداخلة |
| **Transposition** | تدوير المصفوفة (قلب الصفوف أعمدة) |
