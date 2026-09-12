#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class clsString
{
private:
    string _Value;

public:

    // Constructor بدون Parameters:
    // بيعمل Object جديد ويخلي قيمة الـ _Value عبارة عن String فاضية.
    clsString()
    {
        _Value = "";
    }
    // Constructor بياخد String:
    // بيعمل Object جديد ويخزن الـ String اللي استلمها داخل _Value.
    clsString(string Value)
    {
        _Value = Value;
    }

    // SetValue:
    // بتغير قيمة الـ _Value الموجودة داخل الـ Object.
    void SetValue(string Value)
    {
        _Value = Value;
    }


    // GetValue:
    // بترجع القيمة الحالية الموجودة داخل _Value.
    string GetValue()
    {
        return _Value;
    }


    // Property:
    // بتسمح باستخدام Value كأنها Variable،
    // لكنها في الحقيقة بتستخدم GetValue للقراءة و SetValue للتعديل.
    __declspec(property(get = GetValue, put = SetValue)) string Value;


    // Length - Static:
    // بترجع عدد الـ Characters الموجودة في String يتم إرسالها للدالة.
    // Static يعني نقدر نستخدمها بدون إنشاء Object من clsString.
    static short Length(string S1)
    {
        return S1.length();
    };


    // Length - Object:
    // بترجع عدد الـ Characters الموجودة في _Value الخاصة بالـ Object الحالي.
    short Length()
    {
        return _Value.length();
    };


    // CountWords - Static:
    // بتحسب عدد الكلمات الموجودة داخل String.
    // المسافة " " هي الـ delimiter الذي يفصل بين الكلمات.
    static short CountWords(string S1)
    {
        string delim = " ";
        short Counter = 0;
        short pos = 0;
        string sWord;

        // تبحث عن أول Space داخل الـ String.
        while ((pos = S1.find(delim)) != std::string::npos)
        {
            // تأخذ الكلمة الموجودة قبل الـ Space.
            sWord = S1.substr(0, pos);

            // لو الكلمة ليست فارغة، تزود العداد.
            if (sWord != "")
            {
                Counter++;
            }

            // تحذف الكلمة والـ Space وتكمل على باقي الـ String.
            S1.erase(0, pos + delim.length());
        }

        // حساب آخر كلمة لأنها لا يوجد بعدها Space.
        if (S1 != "")
        {
            Counter++;
        }

        return Counter;
    }


    // CountWords - Object:
    // بتحسب عدد الكلمات الموجودة في _Value الخاصة بالـ Object.
    // وتستدعي نسخة الـ Static Function.
    short CountWords()
    {
        return CountWords(_Value);
    };


    // UpperFirstLetterOfEachWord - Static:
    // بتحول أول حرف من كل كلمة إلى Capital Letter.
    static string UpperFirstLetterOfEachWord(string S1)
    {
        bool isFirstLetter = true;

        for (short i = 0; i < S1.length(); i++)
        {
            // لو الحرف ليس Space وهو أول حرف في الكلمة،
            // يتم تحويله إلى Capital.
            if (S1[i] != ' ' && isFirstLetter)
            {
                S1[i] = toupper(S1[i]);
            }

            // لو الحرف الحالي Space،
            // الحرف التالي سيكون أول حرف في كلمة جديدة.
            isFirstLetter = (S1[i] == ' ' ? true : false);
        }

        return S1;
    }


    // UpperFirstLetterOfEachWord - Object:
    // بتحول أول حرف من كل كلمة في _Value إلى Capital.
    // وتخزن النتيجة مرة أخرى داخل _Value.
    void UpperFirstLetterOfEachWord()
    {
        _Value = UpperFirstLetterOfEachWord(_Value);
    }


    // LowerFirstLetterOfEachWord - Static:
    // بتحول أول حرف من كل كلمة إلى Small Letter.
    static string LowerFirstLetterOfEachWord(string S1)
    {
        bool isFirstLetter = true;

        for (short i = 0; i < S1.length(); i++)
        {
            // لو الحرف ليس Space وهو أول حرف في الكلمة،
            // يتم تحويله إلى Small Letter.
            if (S1[i] != ' ' && isFirstLetter)
            {
                S1[i] = tolower(S1[i]);
            }

            // تحديد هل الحرف التالي هو أول حرف في كلمة جديدة أم لا.
            isFirstLetter = (S1[i] == ' ' ? true : false);
        }

        return S1;
    }


    // LowerFirstLetterOfEachWord - Object:
    // بتحول أول حرف من كل كلمة في _Value إلى Small.
    void LowerFirstLetterOfEachWord()
    {
        _Value = LowerFirstLetterOfEachWord(_Value);
    }


    // UpperAllString - Static:
    // بتحول كل حروف الـ String إلى Capital Letters.
    static string UpperAllString(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            S1[i] = toupper(S1[i]);
        }

        return S1;
    }


    // UpperAllString - Object:
    // بتحول كل حروف _Value إلى Capital Letters.
    void UpperAllString()
    {
        _Value = UpperAllString(_Value);
    }


    // LowerAllString - Static:
    // بتحول كل حروف الـ String إلى Small Letters.
    static string LowerAllString(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            S1[i] = tolower(S1[i]);
        }

        return S1;
    }


    // LowerAllString - Object:
    // بتحول كل حروف _Value إلى Small Letters.
    void LowerAllString()
    {
        _Value = LowerAllString(_Value);
    }


    // InvertLetterCase:
    // بتعكس حالة حرف واحد:
    // Capital → Small
    // Small → Capital
    static char InvertLetterCase(char char1)
    {
        return isupper(char1) ? tolower(char1) : toupper(char1);
    }


    // InvertAllLettersCase - Static:
    // بتعكس حالة كل الحروف الموجودة في الـ String.
    // Capital تصبح Small والعكس.
    static string InvertAllLettersCase(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            S1[i] = InvertLetterCase(S1[i]);
        }

        return S1;
    }


    // InvertAllLettersCase - Object:
    // بتعكس حالة كل الحروف الموجودة في _Value.
    void InvertAllLettersCase()
    {
        _Value = InvertAllLettersCase(_Value);
    }


    // Enum:
    // بيحدد نوع الحروف التي نريد حسابها:
    // SmallLetters = الحروف الصغيرة
    // CapitalLetters = الحروف الكبيرة
    // All = كل الحروف
    enum enWhatToCount
    {
        SmallLetters = 0,
        CapitalLetters = 1,
        All = 3
    };


    // CountLetters:
    // بتحسب عدد الحروف حسب النوع المطلوب:
    // Small أو Capital أو All.
    static short CountLetters(
        string S1,
        enWhatToCount WhatToCount = enWhatToCount::All)
    {
        // لو المطلوب كل الحروف، ترجع طول الـ String مباشرة.
        if (WhatToCount == enWhatToCount::All)
        {
            return S1.length();
        }

        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            // لو المطلوب Capital Letters والحرف Capital،
            // نزود العداد.
            if (WhatToCount == enWhatToCount::CapitalLetters &&
                isupper(S1[i]))
                Counter++;


            // لو المطلوب Small Letters والحرف Small،
            // نزود العداد.
            if (WhatToCount == enWhatToCount::SmallLetters &&
                islower(S1[i]))
                Counter++;
        }

        return Counter;
    }


    // CountCapitalLetters - Static:
    // بتحسب عدد الـ Capital Letters الموجودة في الـ String.
    static short CountCapitalLetters(string S1)
    {
        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            if (isupper(S1[i]))
                Counter++;
        }

        return Counter;
    }


    // CountCapitalLetters - Object:
    // بتحسب عدد الـ Capital Letters الموجودة في _Value.
    short CountCapitalLetters()
    {
        return CountCapitalLetters(_Value);
    }


    // CountSmallLetters - Static:
    // بتحسب عدد الـ Small Letters الموجودة في الـ String.
    static short CountSmallLetters(string S1)
    {
        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            if (islower(S1[i]))
                Counter++;
        }

        return Counter;
    }


    // CountSmallLetters - Object:
    // بتحسب عدد الـ Small Letters الموجودة في _Value.
    short CountSmallLetters()
    {
        return CountSmallLetters(_Value);
    }


    // CountSpecificLetter - Static:
    // بتحسب عدد مرات تكرار حرف معين داخل الـ String.
    // MatchCase = true  → يفرق بين A و a.
    // MatchCase = false → لا يفرق بين A و a.
    static short CountSpecificLetter(
        string S1,
        char Letter,
        bool MatchCase = true)
    {
        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            if (MatchCase)
            {
                // مقارنة الحروف مع مراعاة Capital و Small.
                if (S1[i] == Letter)
                    Counter++;
            }
            else
            {
                // مقارنة الحروف بدون الاهتمام بحالة الحرف.
                if (tolower(S1[i]) == tolower(Letter))
                    Counter++;
            }
        }

        return Counter;
    }


    // CountSpecificLetter - Object:
    // بتحسب عدد مرات تكرار حرف معين داخل _Value.
    short CountSpecificLetter(
        char Letter,
        bool MatchCase = true)
    {
        return CountSpecificLetter(_Value, Letter, MatchCase);
    }


    // IsVowel:
    // بتحدد هل الحرف Vowel أم لا.
    // Vowels هي: a, e, i, o, u.
    // ترجع true لو Vowel و false لو مش Vowel.
    static bool IsVowel(char Ch1)
    {
        Ch1 = tolower(Ch1);

        return ((Ch1 == 'a') ||
            (Ch1 == 'e') ||
            (Ch1 == 'i') ||
            (Ch1 == 'o') ||
            (Ch1 == 'u'));
    }


    // CountVowels - Static:
    // بتحسب عدد الـ Vowels الموجودة في الـ String.
    static short CountVowels(string S1)
    {
        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            if (IsVowel(S1[i]))
                Counter++;
        }

        return Counter;
    }


    // CountVowels - Object:
    // بتحسب عدد الـ Vowels الموجودة في _Value.
    short CountVowels()
    {
        return CountVowels(_Value);
    }


    // Split - Static:
    // بتقسم الـ String إلى مجموعة Strings
    // بناءً على الـ Delimiter الذي نرسله.
    // وترجعهم داخل vector.
    static vector<string> Split(string S1, string Delim)
    {
        vector<string> vString;

        short pos = 0;
        string sWord;

        // البحث عن الـ Delimiter.
        while ((pos = S1.find(Delim)) != std::string::npos)
        {
            // أخذ الجزء الموجود قبل الـ Delimiter.
            sWord = S1.substr(0, pos);

            // إضافة الكلمة للـ vector لو ليست فارغة.
            if (sWord != "")
            {
                vString.push_back(sWord);
            }

            // حذف الجزء الذي تم التعامل معه.
            S1.erase(0, pos + Delim.length());
        }

        // إضافة آخر كلمة.
        if (S1 != "")
        {
            vString.push_back(S1);
        }

        return vString;
    }


    // Split - Object:
    // بتقسم قيمة _Value إلى أجزاء باستخدام الـ Delimiter.
    vector<string> Split(string Delim)
    {
        return Split(_Value, Delim);
    }


    // TrimLeft - Static:
    // بتحذف الـ Spaces الموجودة في بداية الـ String فقط.
    static string TrimLeft(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ')
            {
                return S1.substr(i, S1.length() - i);
            }
        }

        return "";
    }


    // TrimLeft - Object:
    // بتحذف الـ Spaces من بداية _Value.
    void TrimLeft()
    {
        _Value = TrimLeft(_Value);
    }


    // TrimRight - Static:
    // بتحذف الـ Spaces الموجودة في نهاية الـ String فقط.
    static string TrimRight(string S1)
    {
        for (short i = S1.length() - 1; i >= 0; i--)
        {
            if (S1[i] != ' ')
            {
                return S1.substr(0, i + 1);
            }
        }

        return "";
    }


    // TrimRight - Object:
    // بتحذف الـ Spaces من نهاية _Value.
    void TrimRight()
    {
        _Value = TrimRight(_Value);
    }


    // Trim - Static:
    // بتحذف الـ Spaces من بداية ونهاية الـ String.
    // تستخدم TrimLeft و TrimRight معًا.
    static string Trim(string S1)
    {
        return (TrimLeft(TrimRight(S1)));
    }


    // Trim - Object:
    // بتحذف الـ Spaces من بداية ونهاية _Value.
    void Trim()
    {
        _Value = Trim(_Value);
    }


    // JoinString - Vector:
    // بتجمع كل الـ Strings الموجودة داخل vector
    // في String واحدة، وتضع الـ Delimiter بينهم.
    static string JoinString(vector<string> vString, string Delim)
    {
        string S1 = "";

        for (string& s : vString)
        {
            S1 = S1 + s + Delim;
        }

        // حذف الـ Delimiter الزائد من النهاية.
        return S1.substr(0, S1.length() - Delim.length());
    }


    // JoinString - Array:
    // بتجمع عناصر الـ Array في String واحدة
    // وتضع الـ Delimiter بينهم.
    static string JoinString(
        string arrString[],
        short Length,
        string Delim)
    {
        string S1 = "";

        for (short i = 0; i < Length; i++)
        {
            S1 = S1 + arrString[i] + Delim;
        }

        // حذف الـ Delimiter الزائد من النهاية.
        return S1.substr(0, S1.length() - Delim.length());
    }


    // ReverseWordsInString - Static:
    // بتعكس ترتيب الكلمات في الـ String.
    // مثال:
    // "Ali Ahmed Mohamed"
    // تصبح:
    // "Mohamed Ahmed Ali"
    static string ReverseWordsInString(string S1)
    {
        vector<string> vString;
        string S2 = "";

        // تقسيم الـ String إلى Words.
        vString = Split(S1, " ");

        // وضع الـ iterator عند نهاية الـ vector.
        vector<string>::iterator iter = vString.end();

        while (iter != vString.begin())
        {
            // الرجوع إلى العنصر السابق.
            --iter;

            // إضافة الكلمة إلى S2.
            S2 += *iter + " ";
        }

        // حذف الـ Space الأخيرة.
        S2 = S2.substr(0, S2.length() - 1);

        return S2;
    }


    // ReverseWordsInString - Object:
    // بتعكس ترتيب الكلمات الموجودة في _Value.
    void ReverseWordsInString()
    {
        _Value = ReverseWordsInString(_Value);
    }


    // ReplaceWord - Static:
    // بتبحث عن Word معينة وتستبدلها بـ Word أخرى.
    // MatchCase = true  → يفرق بين Capital و Small.
    // MatchCase = false → لا يفرق بين Capital و Small.
    static string ReplaceWord(
        string S1,
        string StringToReplace,
        string sRepalceTo,
        bool MatchCase = true)
    {
        // تقسيم الـ String إلى Words.
        vector<string> vString = Split(S1, " ");

        for (string& s : vString)
        {
            if (MatchCase)
            {
                // استبدال الكلمة لو كانت مطابقة تمامًا.
                if (s == StringToReplace)
                {
                    s = sRepalceTo;
                }
            }
            else
            {
                // المقارنة بدون الاهتمام بحالة الحروف.
                if (LowerAllString(s) ==
                    LowerAllString(StringToReplace))
                {
                    s = sRepalceTo;
                }
            }
        }

        // إعادة تجميع الكلمات في String واحدة.
        return JoinString(vString, " ");
    }


    // ReplaceWord - Object:
    // بتستبدل Word داخل _Value.
    string ReplaceWord(
        string StringToReplace,
        string sRepalceTo)
    {
        return ReplaceWord(
            _Value,
            StringToReplace,
            sRepalceTo);
    }


    // RemovePunctuations - Static:
    // بتحذف كل علامات الترقيم من الـ String.
    // مثل: ! , . ? :
    static string RemovePunctuations(string S1)
    {
        string S2 = "";

        for (short i = 0; i < S1.length(); i++)
        {
            // لو الحرف ليس Punctuation يتم الاحتفاظ به.
            if (!ispunct(S1[i]))
            {
                S2 += S1[i];
            }
        }

        return S2;
    }


    // RemovePunctuations - Object:
    // بتحذف علامات الترقيم من _Value
    // وتخزن الـ String الجديدة مرة أخرى داخل _Value.
    void RemovePunctuations()
    {
        _Value = RemovePunctuations(_Value);
    }
};

