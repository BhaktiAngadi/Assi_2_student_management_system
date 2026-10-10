public class School
{
    private int schoolId;
    private string schoolName;
    private string hod;

    public School(int schoolId, string schoolName, string hod)
    {
        this.schoolId = schoolId;
        this.schoolName = schoolName;
        this.hod = hod;
    }

    public void assignHOD(string hod)
    {
        this.hod = hod;
    }

    public void displaySchool()
    {
        Console.WriteLine("School ID : " + schoolId);
        Console.WriteLine("School Name : " + schoolName);
        Console.WriteLine("HOD : " + hod);
    }
}