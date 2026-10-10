public class Fee
{
    private int feeId;
    private double amount;
    private string status;

    public Fee(int feeId, double amount)
    {
        this.feeId = feeId;
        this.amount = amount;
        status = "Pending";
    }

    public void payFee()
    {
        if (status.Equals("Pending"))
            status = "Paid";
    }

    public string getStatus()
    {
        return status;
    }

    public void displayFee()
    {
        Console.WriteLine("Fee ID : " + feeId);
        Console.WriteLine("Amount : " + amount);
        Console.WriteLine("Status : " + status);
    }
}