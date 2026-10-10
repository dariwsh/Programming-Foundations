import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
public class clsTicket {
    private short _Numbre = 0;
    private String _Prefix;
    private String _TicketTime;
    private  short _WaitingClients = 0;
    private short _AverageServeTime = 0;

   public clsTicket(String Prefix, short Numbre, short WaitingClients, short AverageServeTime)
    {
        _TicketTime = LocalDateTime.now().format(
                DateTimeFormatter.ofPattern("dd/MM/yyyy hh:mm a")
        );
        _Numbre = Numbre;
        _Prefix = Prefix;
        _WaitingClients = WaitingClients;
        _AverageServeTime = AverageServeTime;
    }

    // دالة ترجع رمز التذكرة، مثل A0.
    String Prefix()
    {
        return _Prefix;
    }
    short Number()
    {
        return _Numbre;
    }

    String FullNumber()
    {
        return _Prefix + String.valueOf(_Numbre);
    }

    String TicketTime()
    {
        return _TicketTime;
    }

    short WatingClients()
    {
        return _WaitingClients;
    }
    short ExpectedServeTime()
    {
        return (short) (_AverageServeTime * _WaitingClients);
    }

    void Print()
    {
        System.out.println("\n\t\t\t  _______________________");

        System.out.println("\n\t\t\t\t    " + FullNumber());

        System.out.println("\n\t\t\t    " + _TicketTime);

        System.out.println("\n\t\t\t    Waiting Clients = " + _WaitingClients);

        System.out.println("\n\t\t\t      Serve Time In");

        System.out.println("\n\t\t\t       " + ExpectedServeTime() + " Minutes.");

        System.out.println("\n\t\t\t  _______________________");
    }
}
