// مكتبة الإدخال والإخراج؛ نستخدم منها cout للطباعة.
#include <iostream>

// مكتبة الـ Queue: أول عنصر يدخل هو أول عنصر يخرج.
#include <queue>

// مكتبة الـ Stack: آخر عنصر يدخل هو أول عنصر يخرج.
#include <stack>

// مكتبة النصوص string.
#include <string>

// مكتبة الوقت؛ تحتاجها مكتبة clsDate.
#include <ctime>

// مكتبة التاريخ الخاصة بك، وفيها دالة لجلب تاريخ ووقت الجهاز.
#include "clsDate.h"

// حتى نكتب cout وstring مباشرة بدل std::cout وstd::string.
using namespace std;


// كلاس يمثل طابور خدمة كامل، مثل طابور دفع الفواتير.
class clsQueueLine
{
private:

	// إجمالي عدد التذاكر التي أصدرناها في هذا الطابور.
	short _TotalTickets = 0;

	// متوسط وقت خدمة عميل واحد بالدقائق.
	short _AverageServeTime = 0;

	// رمز الطابور، مثل A0 أو B0.
	string _Prefix = "";


	// كلاس داخلي يمثل تذكرة واحدة داخل الطابور.
	// هو داخلي لأنه خاص بكلاس clsQueueLine فقط.
	class clsTicket
	{
	private:

		// رقم التذكرة، مثل 1 أو 2 أو 3.
		short _Numbre = 0;

		// رمز الطابور الخاص بالتذكرة.
		string _Prefix;

		// الوقت الذي أُصدرت فيه التذكرة.
		string _TicketTime;

		// عدد العملاء الموجودين قبل صاحب هذه التذكرة.
		short _WaitingClients = 0;

		// متوسط زمن خدمة العميل الواحد.
		short _AverageServeTime = 0;

		// هذا المتغير غير مستخدم؛ لأن الوقت المتوقع نحسبه داخل الدالة.
		short _ExpectedServeTime = 0;

	public:

		// Constructor: يُنفّذ عند إنشاء تذكرة جديدة.
		clsTicket(string Prefix, short Numbre, short WaitingClients, short AverageServeTime)
		{
			// نخزن وقت وتاريخ إصدار التذكرة.
			_TicketTime = clsDate::GetSystemDateTimeString();

			// نخزن رقم التذكرة.
			_Numbre = Numbre;

			// نخزن رمز الطابور.
			_Prefix = Prefix;

			// نخزن عدد العملاء السابقين لصاحب التذكرة.
			_WaitingClients = WaitingClients;

			// نخزن متوسط زمن الخدمة.
			_AverageServeTime = AverageServeTime;
		}

		// دالة ترجع رمز التذكرة، مثل A0.
		string Prefix()
		{
			return _Prefix;
		}

		// دالة ترجع رقم التذكرة فقط، مثل 3.
		short Number()
		{
			return _Numbre;
		}

		// دالة ترجع رقم التذكرة كاملًا، مثل A03.
		string FullNumber()
		{
			return _Prefix + to_string(_Numbre);
		}

		// دالة ترجع وقت إصدار التذكرة.
		string TicketTime()
		{
			return _TicketTime;
		}

		// دالة ترجع عدد العملاء الذين ينتظرون قبل هذا العميل.
		short WatingClients()
		{
			return _WaitingClients;
		}

		// دالة تحسب وقت الخدمة المتوقع.
		// مثال: أمامه 3 عملاء ومتوسط خدمة العميل 10 دقائق = 30 دقيقة.
		short ExpectedServeTime()
		{
			return _AverageServeTime * _WaitingClients;
		}

		// دالة تطبع بيانات التذكرة بشكل منظم.
		void Print()
		{
			// طباعة حد علوي للتذكرة.
			cout << "\n\t\t\t  _______________________\n";

			// طباعة رقم التذكرة كاملًا.
			cout << "\n\t\t\t\t    " << FullNumber();

			// طباعة وقت إصدار التذكرة.
			cout << "\n\n\t\t\t    " << _TicketTime;

			// طباعة عدد العملاء الذين أمام العميل.
			cout << "\n\t\t\t    Wating Clients = " << _WaitingClients;

			// عنوان وقت الخدمة المتوقع.
			cout << "\n\t\t\t      Serve Time In";

			// طباعة الوقت المتوقع لخدمة العميل بالدقائق.
			cout << "\n\t\t\t       " << ExpectedServeTime() << " Minutes.";

			// طباعة حد سفلي للتذكرة.
			cout << "\n\t\t\t  _______________________\n";
		}
	};


public:

	// الـ Queue الحقيقي الذي يخزن كل التذاكر المنتظرة.
	queue <clsTicket> QueueLine;

	// Constructor لإنشاء طابور جديد.
	clsQueueLine(string Prefix, short AverageServeTime)
	{
		// نخزن رمز الطابور.
		_Prefix = Prefix;

		// في البداية لا توجد أي تذاكر.
		_TotalTickets = 0;

		// نخزن متوسط زمن خدمة العميل.
		_AverageServeTime = AverageServeTime;
	}

	// دالة لإصدار تذكرة جديدة وإضافتها إلى نهاية الطابور.
	void IssueTicket()
	{
		// نزيد إجمالي عدد التذاكر أولًا.
		_TotalTickets++;

		// ننشئ تذكرة جديدة.
		// WaitingClients() تحسب العملاء الحاليين قبل إضافة التذكرة الجديدة.
		clsTicket Ticket(_Prefix, _TotalTickets, WaitingClients(), _AverageServeTime);

		// نضيف التذكرة في آخر الـ Queue.
		QueueLine.push(Ticket);
	}

	// دالة ترجع عدد العملاء المنتظرين حاليًا.
	int WaitingClients()
	{
		// size ترجع عدد العناصر الموجودة في الـ Queue.
		return QueueLine.size();
	}

	// دالة ترجع رقم العميل التالي للخدمة.
	string WhoIsNext()
	{
		// لو الطابور فارغ، لا يوجد عميل لخدمته.
		if (QueueLine.empty())
		{
			return "No Clients Left.";
		}

		// لو ليس فارغًا، front ترجع أول عميل في الطابور.
		else
		{
			return QueueLine.front().FullNumber();
		}
	}

	// دالة لخدمة العميل التالي.
	// ترجع true لو تمت الخدمة، وfalse لو لم يوجد عميل.
	bool ServeNextClient()
	{
		// لا يمكن حذف عميل من طابور فارغ.
		if (QueueLine.empty())
		{
			return false;
		}

		// pop تحذف أول عنصر من الـ Queue.
		QueueLine.pop();

		// معناها أن الخدمة تمت بنجاح.
		return true;
	}

	// دالة تحسب عدد العملاء الذين تم خدمتهم.
	short ServedClients()
	{
		// كل التذاكر التي صدرت ناقص التذاكر التي ما زالت تنتظر.
		return _TotalTickets - WaitingClients();
	}

	// دالة تطبع ملخصًا عن حالة الطابور.
	void PrintInfo()
	{
		// عنوان التقرير.
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t\tQueue Info";
		cout << "\n\t\t\t _________________________\n";

		// طباعة رمز الطابور.
		cout << "\n\t\t\t    Prefix   = " << _Prefix;

		// طباعة إجمالي التذاكر الصادرة.
		cout << "\n\t\t\t    Total Tickets   = " << _TotalTickets;

		// طباعة عدد العملاء الذين تم خدمتهم.
		cout << "\n\t\t\t    Served Clients  = " << ServedClients();

		// طباعة عدد العملاء الذين ما زالوا ينتظرون.
		cout << "\n\t\t\t    Wating Clients  = " << WaitingClients();

		// نهاية التقرير.
		cout << "\n\t\t\t _________________________\n";
		cout << "\n";
	}

	// تطبع التذاكر من أول عميل إلى آخر عميل.
	void PrintTicketsLineRTL()
	{
		// لو لا توجد تذاكر نطبع رسالة مناسبة.
		if (QueueLine.empty())
			cout << "\n\t\tTickets: No Tickets.";

		// لو توجد تذاكر نطبع عنوان القائمة.
		else
			cout << "\n\t\tTickets: ";

		// نأخذ نسخة من الطابور حتى لا نحذف من الطابور الأصلي أثناء الطباعة.
		queue <clsTicket> TempQueueLine = QueueLine;

		// نستمر طالما النسخة المؤقتة تحتوي على تذاكر.
		while (!TempQueueLine.empty())
		{
			// نأخذ أول تذكرة من النسخة.
			clsTicket Ticket = TempQueueLine.front();

			// نطبع رقم التذكرة.
			cout << " " << Ticket.FullNumber() << " <--";

			// نحذف التذكرة من النسخة فقط.
			TempQueueLine.pop();
		}

		// سطر جديد بعد الانتهاء.
		cout << "\n";
	}

	// تطبع التذاكر بالعكس: من آخر عميل إلى أول عميل.
	void PrintTicketsLineLTR()
	{
		// لو الطابور فارغ نطبع رسالة مناسبة.
		if (QueueLine.empty())
			cout << "\n\t\tTickets : No Tickets.";

		// لو يوجد عملاء نطبع عنوان القائمة.
		else
			cout << "\n\t\tTickets: ";

		// ننسخ الطابور حتى نحافظ على الأصل.
		queue <clsTicket> TempQueueLine = QueueLine;

		// Stack مؤقت لعكس ترتيب التذاكر.
		stack <clsTicket> TempStackLine;

		// نأخذ العناصر من الـ Queue ونضعها في الـ Stack.
		while (!TempQueueLine.empty())
		{
			// نضيف أول عنصر من الـ Queue إلى الـ Stack.
			TempStackLine.push(TempQueueLine.front());

			// نحذفه من النسخة المؤقتة.
			TempQueueLine.pop();
		}

		// لأن الـ Stack يعيد آخر عنصر أضفناه أولًا، سيظهر الترتيب معكوسًا.
		while (!TempStackLine.empty())
		{
			// نأخذ آخر تذكرة تم وضعها في الـ Stack.
			clsTicket Ticket = TempStackLine.top();

			// نطبع رقم التذكرة.
			cout << " " << Ticket.FullNumber() << " --> ";

			// نحذفها من الـ Stack المؤقت.
			TempStackLine.pop();
		}

		// سطر جديد بعد الانتهاء.
		cout << "\n";
	}

	// دالة تطبع التفاصيل الكاملة لكل التذاكر المنتظرة.
	void PrintAllTickets()
	{
		// عنوان قسم التذاكر.
		cout << "\n\n\t\t\t       ---Tickets---";

		// لو الطابور فارغ نطبع رسالة مناسبة.
		if (QueueLine.empty())
			cout << "\n\n\t\t\t     ---No Tickets---\n";

		// ننسخ الطابور؛ لأننا سنستخدم pop أثناء الطباعة.
		queue <clsTicket> TempQueueLine = QueueLine;

		// نطبع كل تذكرة في النسخة المؤقتة.
		while (!TempQueueLine.empty())
		{
			// نطبع بيانات أول تذكرة.
			TempQueueLine.front().Print();

			// نحذفها من النسخة المؤقتة.
			TempQueueLine.pop();
		}
	}
};