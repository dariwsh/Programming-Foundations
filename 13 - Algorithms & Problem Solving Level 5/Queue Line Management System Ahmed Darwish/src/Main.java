public class Main
{
    public static void main(String[] args)
    {
        clsQueueLine PayBillsQueue = new clsQueueLine("A0" , (short) 10);
        clsQueueLine SubscriptionsQueue = new clsQueueLine("B0" , (short) 10);

        PayBillsQueue.IssueTicket();
        PayBillsQueue.IssueTicket();
        PayBillsQueue.IssueTicket();
        PayBillsQueue.IssueTicket();


        System.out.println("\nPay Bills Queue Info:");
        PayBillsQueue.PrintInfo();
        PayBillsQueue.PrintTicketsLineRTL();
        PayBillsQueue.PrintTicketsLineLTR();

        System.out.println("Print All Tickets");
        PayBillsQueue.PrintAllTickets();
        System.out.println("Print  ServeNextClient");
        // حذف اول عمليه خلص
        PayBillsQueue.ServeNextClient();

        System.out.println("\nPay Bills Queue After Serving One Client");
        PayBillsQueue.PrintInfo();
        System.out.println("\nSubscriptions Queue Info:");

        SubscriptionsQueue.IssueTicket();
        SubscriptionsQueue.IssueTicket();
        SubscriptionsQueue.IssueTicket();
        SubscriptionsQueue.PrintInfo();


        SubscriptionsQueue.PrintTicketsLineRTL();
        SubscriptionsQueue.PrintTicketsLineLTR();

        SubscriptionsQueue.PrintAllTickets();

        SubscriptionsQueue.ServeNextClient();

        System.out.println("\nSubscriptions Queue After Serving One Client");
        SubscriptionsQueue.PrintInfo();
    }
}