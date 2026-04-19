#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Enum لاختيار اللعبة (بدل الأرقام)
enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };

// Enum لتحديد الفائز
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

// بيانات الجولة الواحدة
struct stRoundInfo {
    short RoundNumber = 0;              // رقم الجولة
    enGameChoice Player1Choice;         // اختيار اللاعب
    enGameChoice ComputerChoice;        // اختيار الكمبيوتر
    enWinner Winner;                    // الفائز في الجولة
    string WinnerName;                  // اسم الفائز
};

// بيانات نتيجة اللعبة بالكامل
struct stGameReslut {
    short GameRounds = 0;               // عدد الجولات
    short Player1WinTimes = 0;          // مرات فوز اللاعب
    short ComputerWinTimes = 0;         // مرات فوز الكمبيوتر
    short DrawTimes = 0;                // مرات التعادل
    enWinner GameWinner;                // الفائز النهائي
    string WinnerName = "";             // اسم الفائز النهائي
};

// تحويل الفائز (enum) إلى string
string WinnerName(enWinner Winner) {
    string arrWinnerName[3] = { "Player1", "Computer", "No Winner" };
    return arrWinnerName[Winner - 1];
}

// تحويل اختيار اللعبة إلى string
string ChoiceName(enGameChoice Choice) {
    string arrGameChoice[3] = { "Stone", "Paper", "Scissors" };
    return arrGameChoice[Choice - 1];
}

// تغيير لون الشاشة حسب الفائز
void SetWinnerScreenColor(enWinner Winner) {
    switch (Winner) {
    case enWinner::Player1:
        system("color 2f"); // أخضر
        break;
    case enWinner::Computer:
        system("color 4f"); // أحمر + صوت
        cout << "\a";
        break;
    default:
        system("color 6f"); // أصفر (تعادل)
        break;
    }
}

// عمل Tabs للتنسيق في الطباعة
string Tabs(short NumberOfTabs) {
    string t = "";
    for (int i = 0; i < NumberOfTabs; i++)
        t = t + "\t";
    return t;
}

// توليد رقم عشوائي بين From و To
int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

// اختيار الكمبيوتر عشوائي
enGameChoice GetComputerChoice() {
    return (enGameChoice)RandomNumber(1, 3);
}

// تحديد الفائز في الجولة
enWinner WhoWonTheRound(stRoundInfo RoundInfo) {

    // لو الاختيارين زي بعض → تعادل
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
        return enWinner::Draw;

    // مقارنة الاختيارات
    switch (RoundInfo.Player1Choice) {

    case enGameChoice::Stone:
        return (RoundInfo.ComputerChoice == enGameChoice::Paper)
            ? enWinner::Computer
            : enWinner::Player1;

    case enGameChoice::Paper:
        return (RoundInfo.ComputerChoice == enGameChoice::Scissors)
            ? enWinner::Computer
            : enWinner::Player1;

    case enGameChoice::Scissors:
        return (RoundInfo.ComputerChoice == enGameChoice::Stone)
            ? enWinner::Computer
            : enWinner::Player1;
    }

    return enWinner::Player1; // fallback
}

// تحديد الفائز النهائي
enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes) {

    if (Player1WinTimes > ComputerWinTimes)
        return enWinner::Player1;

    else if (ComputerWinTimes > Player1WinTimes)
        return enWinner::Computer;

    else
        return enWinner::Draw;
}

// تعبئة نتيجة اللعبة
stGameReslut FillGameResults(int GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes) {

    stGameReslut GameResults;

    GameResults.GameRounds = GameRounds;
    GameResults.Player1WinTimes = Player1WinTimes;
    GameResults.ComputerWinTimes = ComputerWinTimes;
    GameResults.DrawTimes = DrawTimes;

    // تحديد الفائز النهائي
    GameResults.GameWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes);

    // تحويله لاسم
    GameResults.WinnerName = WinnerName(GameResults.GameWinner);

    return GameResults;
}

// قراءة اختيار اللاعب
enGameChoice ReadPlayer1Choice() {

    short Choice;

    do {
        cout << "[ 1 ] = Stone\n"
            << "[ 2 ] = Paper\n"
            << "[ 3 ] = Scissors\n";

        cin >> Choice;

    } while (Choice < 1 || Choice > 3);

    return (enGameChoice)Choice;
}

// طباعة نتيجة الجولة
void PrintRoundResults(stRoundInfo RoundInfo) {

    cout << "\n____________ Round [" << RoundInfo.RoundNumber << "] ____________\n\n";

    cout << "Player1 Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner   : [" << RoundInfo.WinnerName << "]\n";

    cout << "_________________________________________\n" << endl;

    // تغيير اللون حسب الفائز
    SetWinnerScreenColor(RoundInfo.Winner);
}

// تشغيل اللعبة (المحرك الأساسي)
stGameReslut PlayGame(short HowManyRounds) {

    stRoundInfo RoundInfo;

    short Player1WinTimes = 0;
    short ComputerWinTime = 0;
    short DrawTime = 0;

    // Loop لكل الجولات
    for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++) {

        cout << "\nRound [ " << GameRound << "] begins:\n";

        RoundInfo.RoundNumber = GameRound;

        // إدخال اللاعب
        RoundInfo.Player1Choice = ReadPlayer1Choice();

        // اختيار الكمبيوتر
        RoundInfo.ComputerChoice = GetComputerChoice();

        // تحديد الفائز
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);

        // اسم الفائز
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        // تحديث النتائج
        if (RoundInfo.Winner == enWinner::Player1)
            Player1WinTimes++;

        else if (RoundInfo.Winner == enWinner::Computer)
            ComputerWinTime++;

        else
            DrawTime++;

        // طباعة الجولة
        PrintRoundResults(RoundInfo);
    }

    // إرجاع نتيجة اللعبة
    return FillGameResults(HowManyRounds, Player1WinTimes, ComputerWinTime, DrawTime);
}

// شاشة نهاية اللعبة
void ShowGameOveScreen() {

    cout << Tabs(2) << "__________________________________________________________\n\n";
    cout << Tabs(2) << "                  +++ G a m e  O v e r +++\n";
    cout << Tabs(2) << "__________________________________________________________\n\n";
}

// عرض النتيجة النهائية
void ShowFinalGameResults(stGameReslut GamResults) {

    cout << Tabs(2) << "______________________[Game Results ] ____________________\n\n";

    cout << Tabs(2) << "Game Rounds          : " << GamResults.GameRounds << endl;
    cout << Tabs(2) << "Player1 won          : " << GamResults.Player1WinTimes << endl;
    cout << Tabs(2) << "Computer Won Times   : " << GamResults.ComputerWinTimes << endl;
    cout << Tabs(2) << "Draw Times           : " << GamResults.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner         : " << GamResults.WinnerName << endl;

    cout << Tabs(2) << "__________________________________________________________\n";

    // لون النتيجة النهائية
    SetWinnerScreenColor(GamResults.GameWinner);
}

// بداية اللعبة + إعادة التشغيل
void StartGame() {

    char PlayAgain = 'Y';

    do {
        system("cls");      // مسح الشاشة
        system("color 0f"); // reset اللون

        int Rounds;

        cout << "How Many Rounds 1 to 10? ";
        cin >> Rounds;

        // تشغيل اللعبة
        stGameReslut GameResults = PlayGame(Rounds);

        // عرض النتائج
        ShowGameOveScreen();
        ShowFinalGameResults(GameResults);

        cout << endl << Tabs(2) << "Do you want to play again? Y/N? ";
        cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain
    
    == 'y');
}

// نقطة البداية
int main() {

    srand((unsigned)time(NULL)); // seed للـ random

    StartGame();

    return 0;
}