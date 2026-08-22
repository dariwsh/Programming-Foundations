#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stDate
{
	short Day;
	short Month;
	short Year;
};
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}


stDate StringToDate(string DateString)
{
	stDate Date;
	vector <string> vDate;
	vDate = SplitString(DateString, "/");

	Date.Day = stoi(vDate[0]);
	Date.Month = stoi(vDate[1]);
	Date.Year = stoi(vDate[2]);

	return Date;
}

string DateToString(stDate Date)
{
	return to_string(Date.Day) + "/" + to_string(Date.Month) +
		"/" + to_string(Date.Year);
}
string RelaceWordInString(string S1, string StirngToReplace, string sReplaceTo)
{
	short Pos = S1.find(StirngToReplace);
	while (Pos != std::string::npos)
	{
		S1 = S1.replace(Pos, StirngToReplace.length() , sReplaceTo);
		Pos = S1.find(StirngToReplace);
	}
	return S1;
}

string FormateDate(stDate Date, string DateFormat = "dd/mm/yyyy")
{
	string FormattedDateString = "";
	FormattedDateString = RelaceWordInString(DateFormat, "dd",
		to_string(Date.Day));
	FormattedDateString = RelaceWordInString(FormattedDateString, "mm",
		to_string(Date.Month));
	FormattedDateString = RelaceWordInString(FormattedDateString, "yyyy",
		to_string(Date.Year));
	return FormattedDateString;
}


string ReadStringDate(string Message)
{
	string DateString;
	cout << Message;
	getline(cin >> ws, DateString);

	return DateString;
}

int main()
{
	string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? ");
	
	stDate Date = StringToDate(DateString);

	cout << "\n" << FormateDate(Date) << "\n";
	cout << "\n" << FormateDate(Date, "yyyy/dd/mm");
	cout << "\n" << FormateDate(Date, "dd / mm / yyyy");
	cout << "\n" << FormateDate(Date, "dd/yyyy/mm");

	cout << "\n" << FormateDate(Date, "mm-dd-yyyy") << "\n";
	cout << "\n" << FormateDate(Date, "dd-mm-yyyy") << "\n";
	cout << "\n" << FormateDate(Date, "Day:dd, Month:mm,Year:yyyy") << "\n";
	system("pause>0");
	return 0;
}