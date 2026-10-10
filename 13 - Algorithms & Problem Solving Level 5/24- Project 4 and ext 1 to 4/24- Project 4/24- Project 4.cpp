
#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> MyDynamicArray(5);

    // =========================
    // 1. SetItem
    // =========================
    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "============================\n";
    cout << "Original Array\n";
    cout << "============================\n";

    MyDynamicArray.PrintList();

    // =========================
    // 2. Size
    // =========================
    cout << "\nArray Size: "
        << MyDynamicArray.Size() << "\n";

    // =========================
    // 3. IsEmpty
    // =========================
    cout << "Is Empty? "
        << MyDynamicArray.IsEmpty() << "\n";

    // =========================
    // 4. GetItem
    // =========================
    cout << "\nItem at Index 2: "
        << MyDynamicArray.GetItem(2) << "\n";

    // =========================
    // 5. Resize
    // =========================
    MyDynamicArray.Resize(3);

    cout << "\n============================\n";
    cout << "After Resize to 3\n";
    cout << "============================\n";

    MyDynamicArray.PrintList();

    cout << "Array Size: "
        << MyDynamicArray.Size() << "\n";

    // =========================
    // 6. Resize Again
    // =========================
    MyDynamicArray.Resize(5);

    cout << "\n============================\n";
    cout << "After Resize to 5\n";
    cout << "============================\n";

    MyDynamicArray.PrintList();

    // =========================
    // 7. Reverse
    // =========================
    MyDynamicArray.Reverse();

    cout << "\n============================\n";
    cout << "After Reverse\n";
    cout << "============================\n";

    MyDynamicArray.PrintList();

    // =========================
    // 8. Clear
    // =========================
    MyDynamicArray.Clear();

    cout << "\n============================\n";
    cout << "After Clear\n";
    cout << "============================\n";

    cout << "Array Size: "
        << MyDynamicArray.Size() << "\n";

    cout << "Is Empty? "
        << MyDynamicArray.IsEmpty() << "\n";

    cout << "Array Items:\n";
    MyDynamicArray.PrintList();

    system("pause>0");
}

