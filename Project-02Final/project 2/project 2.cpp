#include <iostream>
#include <string>
#include <cstdlib>
// colors
#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"
using namespace std;
enum enOperationType {Add = 1 , Sub  , Mulp , Div , MixOp };
enum enQuestionsLevel {Easy = 1 , Med  , Hard , Mix};
// توليد رقم عشوائي بين From و To
int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}
struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionLevel;
    int CorrectAnswer = 0; // الاسلة الصحة
    int PlayerAnswer = 0; // الاجابات الصحيحة
    bool AnswerResult = false; // هل الاجابة صح ولا غلط
};
struct stQuizz
{
    stQuestion QuestionList[100]; // الاسلة
    short NumberOfQuestions; // عداد الاسلة اناسالته لمستخدام
    enQuestionsLevel QuestionsLevel; //   ايه هو المستوى في enum
    enOperationType OpType; // ايه العمليات 
    short NumberOfWrongAnswers = 0; // عداد الاسلة الخطاء
     short NumberOfRightAnswers = 0; // عداد الاسلة الصحيحة
    bool isPass = false; // هل هو ناجح ام راسب
};

string GetOpTypeSymbol(enOperationType OpType)
{
    switch (OpType)
    {
        case enOperationType::Add:
            return "+";
        case enOperationType::Sub:
            return "-";
        case enOperationType::Mulp:
            return "x";
        case enOperationType::Div:
            return "/";
        default:
            return "Mix";
    }
}
// بيعمل العلميات
int SimpleCalculator(int Number1, int Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2 ;
    case enOperationType::Sub:
        return Number1 - Number2;
    case enOperationType::Mulp:
        return Number1 * Number2;
    case enOperationType::Div:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}

// هي هنا بتشكل من انواع العلميات كل مره هترجع قيمةمختلفة مرة لو 2 يبقي طرح و1 جمع وهكذ
enOperationType GetRandomOpeartionType()
{ 
    int Op = RandomNumber(1,4);
    return (enOperationType)Op;
}


// هو يعمل توليد لاسلة
stQuestion GenerateQuedstion(enQuestionsLevel QuetionLevel, enOperationType OpType)
{
// اول حاجه انا عملته عرفت نوعين من اينم الصعبوبة و العملية بعده
//عملت struct من نوع الاسلة اول حاجه لو المستخدم اختر ماكس اعمل توليد عشوائي منا1الي 3 يعني هيختار من اينم يعني ام جمع او هكذ 
    stQuestion Question;
   

    if (QuetionLevel == enQuestionsLevel::Mix)
    {
        QuetionLevel = (enQuestionsLevel)RandomNumber(1,3);
    }

    // فوق كان الصعوبه 
    //  GetRandomOpeartionType هي هتديلك عمليات مختلفه هنا لو ماكس هيدخل 
    if (OpType == enOperationType::MixOp)
    {
        OpType = GetRandomOpeartionType();
    }

    // هنا اناهاخد العملية 
    Question.OperationType = OpType;
    // بعده هيعرف الصعبوبه جوه switch 
    switch (QuetionLevel)
    {
    case enQuestionsLevel::Easy:
        
        Question.Number1 = RandomNumber(1,10); // هيولد رقم
        Question.Number2 = RandomNumber(1, 10);// هيولد رقم 
        
        //if (Question.OperationType == enOperationType::Div && Question.Number2 == 0)
        //    Question.Number2 = 1;


        Question.CorrectAnswer = SimpleCalculator(Question.Number1 , Question.Number2 , Question.OperationType);
        Question.QuestionLevel = QuetionLevel;
        return Question;

    case enQuestionsLevel::Med:

        Question.Number1 = RandomNumber(10, 50); // هيولد رقم
        Question.Number2 = RandomNumber(10, 50);// هيولد رقم 

        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        Question.QuestionLevel = QuetionLevel;
        return Question;

    case enQuestionsLevel::Hard:

        Question.Number1 = RandomNumber(50, 100); // هيولد رقم
        Question.Number2 = RandomNumber(50, 100);// هيولد رقم 

        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        Question.QuestionLevel = QuetionLevel;
        return Question;
    }
    return Question;
}

string GetQuestonLevelText(enQuestionsLevel QuestionLevel)
{
    string arrQuestion[4] = {"Easy" , "Med", "Hard", "Mix"};
    return arrQuestion[QuestionLevel - 1];
}

void GenrateQuizzQuestiuons(stQuizz& Quizz)
{
    for (short Question = 0; Question < Quizz.NumberOfQuestions; Question++)
        Quizz.QuestionList[Question] = GenerateQuedstion(Quizz.QuestionsLevel , Quizz.OpType);
}




string Tabs(short NumberOfTabs) {
    string t = "";
    for (int i = 0; i < NumberOfTabs; i++)
        t = t + "\t";
    return t;
}

// عايز اعرف هو هيلعب كام مرة هخزن بعده هبعت الدتا دي 
short ReadHowManyQuestions()
{
    short NumberOfQuestinoos;
    do
    {
        cout << "HowMany Quesions do you want ot answer  ? ";
        cin >> NumberOfQuestinoos;
    }while (NumberOfQuestinoos <1 || NumberOfQuestinoos > 100);
    return NumberOfQuestinoos;
}

// عايز اعرف مستوي الصعبوبه
enQuestionsLevel ReadQuestionsLevel()
{
    short QuestionLevel = 0;
    do
    {
        cout << "[1] Easy ,[2] Med ,[3] Hard ,[4] Mix ?";
        cin >> QuestionLevel;
    }while(QuestionLevel < 1 || QuestionLevel > 4);
    return (enQuestionsLevel)QuestionLevel;
}

// عايز اعرف العمليه
enOperationType ReadOpType()

{
    short Opertor = 0;
    do
    {
        cout << "[1] Add ,[2] Sub ,[3] Mulp ,[4] Div ,[5] Mix ?";
        cin >> Opertor;
    } while (Opertor < 1 || Opertor > 5);
    return (enOperationType)Opertor;
}
int ReadQuestionAnswer()
{
    int Answer = 0;
    cin >> Answer;
    return Answer;
}

void PrintTheQuestion(stQuizz &Quizz, short QuestionNumber)
{
    cout << "\n";
    cout << Quizz.QuestionList[QuestionNumber].Number1 << " "
        << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType) << " "
        << Quizz.QuestionList[QuestionNumber].Number2 << endl;
    cout << "\n______________________________________\n\n";


}

void correctTheQuestionAnswer(stQuizz& Quizz, short QuestionNumbe)
{
    if (Quizz.QuestionList[QuestionNumbe].PlayerAnswer != Quizz.QuestionList[QuestionNumbe].CorrectAnswer)
    {
        Quizz.QuestionList[QuestionNumbe].AnswerResult = false;
        Quizz.NumberOfWrongAnswers++;

        cout << RED << "Wrong Answer :-(\n" << RESET;
        cout << "The Right Anser si : ";
        cout << Quizz.QuestionList[QuestionNumbe].CorrectAnswer;
        cout << "\n";
    }
    else
    {
        Quizz.QuestionList[QuestionNumbe].AnswerResult = true;
        Quizz.NumberOfRightAnswers++;
        cout << GREEN << "Right Answer :-) \n" << RESET;
    }
    cout << endl;

}
void AskAndCorrectQuestionListAnsser(stQuizz& Quizz)
{
    for (short QuestionNumbe = 0;QuestionNumbe < Quizz.NumberOfQuestions; QuestionNumbe++)
    {
        PrintTheQuestion(Quizz, QuestionNumbe);
        Quizz.QuestionList[QuestionNumbe].PlayerAnswer = ReadQuestionAnswer();
        correctTheQuestionAnswer(Quizz, QuestionNumbe);

    }
    Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);

}
string GetFinalResultsText(bool Pass)
{
        if(Pass)
            return "PASS :-)";
        else 
        return "Fail :-(";
}
void PrintQuizzResults(stQuizz Quizz)
{
    
    cout<< "\n______________________________________\n\n";
    if(Quizz.isPass)
        cout << GREEN << "Final Reslt is Pass :-)" << RESET;
    else
    cout << RED <<"Fian Results is FAIL:-(" << RESET;
    cout << "\n______________________________________\n\n";


    cout << "Nubmer of Questions: " << Quizz.NumberOfQuestions << endl;
    cout << "Questions Level    : " << GetQuestonLevelText(Quizz.QuestionsLevel) << endl;
    cout << "Op Type            : " << GetOpTypeSymbol(Quizz.OpType) << endl;
    cout << "Nubmer of Right Answers: " << Quizz.NumberOfRightAnswers << endl;
    cout << "Nubmer of Worng Answers: " << Quizz.NumberOfWrongAnswers << endl;
    cout << "\n______________________________________\n\n";

}
void PlayMathGame() {
    stQuizz Quizz;

    Quizz.NumberOfQuestions = ReadHowManyQuestions();
    Quizz.QuestionsLevel = ReadQuestionsLevel();
    Quizz.OpType = ReadOpType();


    GenrateQuizzQuestiuons(Quizz);
    AskAndCorrectQuestionListAnsser(Quizz);
    PrintQuizzResults(Quizz);
}




void StartGame() {

    char PlayAgain = 'Y';

    do {
        system("cls");      // مسح الشاشة
        system("color 0f"); // reset اللون
        PlayMathGame();
        cout << endl << Tabs(2) << "Do you want to play again? Y/N? ";
       cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}



int main()
{
    srand((unsigned)time(NULL));
    StartGame();
}