#include <iostream>
#include <vector>
#include <string>

using namespace std;

void showMenu() {
    cout << "\n--- ÈÑäÇãÌ ÅÏÇÑÉ ÇáãåÇã ---" << endl;
    cout << "1. ÅÖÇİÉ ãåãÉ ÌÏíÏÉ" << endl;
    cout << "2. ÚÑÖ ßá ÇáãåÇã" << endl;
    cout << "3. ÇáÎÑæÌ" << endl;
    cout << "ÇÎÊÑ ÑŞã ÇáÚãáíÉ: ";
}

int main() {
    vector<string> tasks;
    int choice;
    string task;

    while (true) {
        showMenu();
        cin >> choice;
        cin.ignore(); // áÊäÙíİ ÇáĞÇßÑÉ ÇáãÄŞÊÉ ÈÚÏ ÅÏÎÇá ÇáÑŞã

        if (choice == 1) {
            cout << "ÇßÊÈ ÇáãåãÉ: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "ÊãÊ ÅÖÇİÉ ÇáãåãÉ ÈäÌÇÍ!" << endl;
        }
        else if (choice == 2) {
            cout << "\n--- ŞÇÆãÉ ãåÇãß ---" << endl;
            if (tasks.empty()) {
                cout << "ÇáŞÇÆãÉ İÇÑÛÉ ÍÇáíÇğ." << endl;
            }
            else {
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            cout << "ãÚ ÇáÓáÇãÉ!" << endl;
            break;
        }
        else {
            cout << "ÇÎÊíÇÑ ÛíÑ ÕÍíÍ¡ ÍÇæá ãÑÉ ÃÎÑì." << endl;
        }
    }

    return 0;
}