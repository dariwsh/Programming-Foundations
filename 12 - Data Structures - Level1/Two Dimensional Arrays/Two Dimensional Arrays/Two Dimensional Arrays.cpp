/*
 * ======================================================================================
 * الموضوع: مراجعة المصفوفات ثنائية الأبعاد (2D Arrays / Matrices Revision)
 * الوصف: مرجع شامل لمفاهيم المصفوفات ثنائية الأبعاد والتعامل مع الصفوف والأعمدة.
 * المفاهيم المغطاة:
 *   1. الذاكرة وتخزين الصفوف (Row-Major Order Memory Storage).
 *   2. الإعلان والتهيئة لمصفوفات 2D.
 *   3. جدول الضرب 10x10 وتنسيق المخرجات (Multiplication Table & Formatted Output).
 *   4. حساب مجموع عناصر المصفوفة والصفوف/الأعمدة (Matrix Summation & Row/Col Totals).
 *   5. تدوير/مدور المصفوفة (Matrix Transpose).
 *   6. حساب المجموع القطري الرئيسي والفرعي (Main & Anti-Diagonal Sums).
 * ======================================================================================
 */

#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

const int ROWS = 10;
const int COLS = 10;

// دالة لطباعة مصفوفة ثنائية الأبعاد بشكل منسق
void printMatrix(const int matrix[ROWS][COLS], int rCount, int cCount) {
    for (int r = 0; r < rCount; r++) {
        for (int c = 0; c < cCount; c++) {
            cout << setw(4) << matrix[r][c] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    cout << "=====================================================\n";
    cout << "        2D ARRAYS & MATRICES - مراجعة مصفوفات 2D     \n";
    cout << "=====================================================\n\n";

    // -------------------------------------------------------------
    // مثال 1: جدول الضرب 10x10 (Multiplication Table 10x10)
    // -------------------------------------------------------------
    cout << "--- [1] 10x10 Multiplication Table ---\n";
    int multiplication[ROWS][COLS];

    // ملء جدول الضرب
    for (int Row = 0; Row < ROWS; Row++) {
        for (int Col = 0; Col < COLS; Col++) {
            multiplication[Row][Col] = (Row + 1) * (Col + 1);
        }
    }

    // طباعة جدول الضرب بالتنسيق الجميل
    for (int Row = 0; Row < ROWS; Row++) {
        for (int Col = 0; Col < COLS; Col++) {
            printf("%02d ", multiplication[Row][Col]);
        }
        cout << "\n";
    }
    cout << "\n";

    // -------------------------------------------------------------
    // مثال 2: مجموع الصفوف والأعمدة لمصفوفة 3x3
    // -------------------------------------------------------------
    cout << "--- [2] 3x3 Matrix Summation & Row/Col Totals ---\n";
    int sampleMatrix[3][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    cout << "Sample 3x3 Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(3) << sampleMatrix[i][j] << " ";
        }
        cout << endl;
    }

    // حساب مجموع كل صف
    cout << "\nRow Sums:\n";
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += sampleMatrix[i][j];
        }
        cout << "Row " << (i + 1) << " sum = " << rowSum << endl;
    }

    // حساب مجموع كل عمود
    cout << "\nColumn Sums:\n";
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += sampleMatrix[i][j];
        }
        cout << "Col " << (j + 1) << " sum = " << colSum << endl;
    }
    cout << endl;

    // -------------------------------------------------------------
    // مثال 3: المجموع القطري الرئيسي والفرعي (Diagonals)
    // -------------------------------------------------------------
    cout << "--- [3] Matrix Diagonals ---\n";
    int mainDiagonalSum = 0;
    int antiDiagonalSum = 0;

    for (int i = 0; i < 3; i++) {
        mainDiagonalSum += sampleMatrix[i][i];         // [0,0], [1,1], [2,2]
        antiDiagonalSum += sampleMatrix[i][2 - i];     // [0,2], [1,1], [2,0]
    }

    cout << "Main Diagonal Sum (1 + 5 + 9): " << mainDiagonalSum << endl;
    cout << "Anti Diagonal Sum (3 + 5 + 7): " << antiDiagonalSum << endl << endl;

    // -------------------------------------------------------------
    // مثال 4: مدور المصفوفة (Matrix Transpose)
    // -------------------------------------------------------------
    cout << "--- [4] Matrix Transpose (Swapping Rows and Columns) ---\n";
    int transposed[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[j][i] = sampleMatrix[i][j];
        }
    }

    cout << "Transposed Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(3) << transposed[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n=====================================================\n";
    return 0;
}