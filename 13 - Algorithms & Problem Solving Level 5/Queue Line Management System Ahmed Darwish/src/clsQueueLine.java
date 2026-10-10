import java.util.Queue;
import java.util.LinkedList;
import java.util.Stack;
// كلاس يمثل طابور خدمة كامل، مثل طابور دفع الفواتير.
public class clsQueueLine {
    private short _TotalTickets = 0;
    private short _AverageServeTime = 0;
    private String _Prefix = "";

    Queue<clsTicket> QueueLine = new LinkedList<>();

    // Constructor لإنشاء طابور جديد.
    clsQueueLine(String Prefix, short AverageServeTime) {
        _Prefix = Prefix;
        _TotalTickets = 0;
        _AverageServeTime = AverageServeTime;
    }

    int WaitingClients() {
        return QueueLine.size();
    }

    void IssueTicket() {
        _TotalTickets++;

        clsTicket ticket = new clsTicket(
                _Prefix,
                _TotalTickets,
                (short) WaitingClients(),
                _AverageServeTime
        );

        QueueLine.add(ticket);
    }

    // دالة ترجع رقم العميل التالي للخدمة.
    String WhoIsNext() {
        if (QueueLine.isEmpty()) {
            return "No Clients Left";
        } else {
            return QueueLine.peek().FullNumber();
        }
    }


    // دالة لخدمة العميل التالي.
    // ترجع true لو تمت الخدمة، وfalse لو لم يوجد عميل.
    boolean ServeNextClient() {
        if (QueueLine.isEmpty()) {
            return false;
        } else {
            QueueLine.remove();
            return true;
        }
    }

    // دالة تحسب عدد العملاء الذين تم خدمتهم.
    short ServedClients() {
        return (short) (_TotalTickets - WaitingClients());
    }

    void PrintInfo()
    {
        System.out.println("\n\t\t\t _________________________");
        System.out.println("\t\t\t\tQueue Info");
        System.out.println("\t\t\t _________________________");
        System.out.println("\t\t\t    Prefix = " + _Prefix);
        System.out.println("\t\t\t    Total Tickets = " + _TotalTickets);
        System.out.println("\t\t\t    Served Clients = " + ServedClients());
        System.out.println("\t\t\t    Waiting Clients = " + WaitingClients());
        System.out.println("\t\t\t _________________________");
    }

    // تطبع التذاكر من أول عميل إلى آخر عميل.
    void PrintTicketsLineRTL() {
        if (QueueLine.isEmpty()) {
            System.out.println("\n\n\tTickets : is Not Tickets.");
        } else {
            System.out.print("\n\t\tTickets: ");
            Queue<clsTicket> TempQueueLine = new LinkedList<>(QueueLine);

            while (!TempQueueLine.isEmpty()) {
                clsTicket ticket = TempQueueLine.peek();

                System.out.print(" " + ticket.FullNumber() + " <--");

                TempQueueLine.remove();
            }

            System.out.println();
        }

    }

    void PrintTicketsLineLTR()
    {
        if (QueueLine.isEmpty())
        {
            System.out.println("\n\t\tTickets: No Tickets.");
            return;
        }

        System.out.print("\n\t\tTickets: ");

        // نسخة حتى لا نغيّر الطابور الأصلي.
        Queue<clsTicket> TempQueueLine = new LinkedList<>(QueueLine);

        // Stack لعكس الترتيب.
        Stack<clsTicket> TempStackLine = new Stack<>();

        while (!TempQueueLine.isEmpty())
        {
            TempStackLine.push(TempQueueLine.peek());
            TempQueueLine.remove();
        }

        while (!TempStackLine.isEmpty())
        {
            clsTicket ticket = TempStackLine.pop();

            System.out.print(" " + ticket.FullNumber() + " --> ");
        }

        System.out.println();
    }

    void PrintAllTickets()
    {
        System.out.println("\n\n\t\t\t--- Tickets ---");

        if (QueueLine.isEmpty())
        {
            System.out.println("\n\t\t\t--- No Tickets ---");
            return;
        }

        // نسخة حتى لا نحذف التذاكر الحقيقية أثناء الطباعة.
        Queue<clsTicket> TempQueueLine = new LinkedList<>(QueueLine);

        while (!TempQueueLine.isEmpty())
        {
            TempQueueLine.peek().Print();

            TempQueueLine.remove();
        }
    }
}
