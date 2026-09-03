// كورس C++ المستوى الأول - الدرس الثامن والثلاثون
#include <iostream>
using namespace std;

struct stBook {
    string Title;
    int Pages;
};

void printBookInfo(stBook book) {
    cout << "Book Title: " << book.Title << ", Pages: " << book.Pages << endl;
}

int main() {
    stBook book1 = {"C++ Basics", 250};
    printBookInfo(book1);
    return 0;
}