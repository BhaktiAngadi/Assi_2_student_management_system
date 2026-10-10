public class Attendance
{
    private string status;

    public Attendance()
    {
        status = "Absent";
    }

    public void setStatus(string status)
    {
        this.status = status;
    }

    public string getStatus()
    {
        return status;
    }

    public void displayAttendance()
    {
        Console.WriteLine("Attendance : " + status);
    }
}