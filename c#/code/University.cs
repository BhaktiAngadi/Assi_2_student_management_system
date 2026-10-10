public class University
{
    private int universityId;
    private string universityName;
    private string location;
    private School school;

    public University(int universityId, string universityName, string location)
    {
        this.universityId = universityId;
        this.universityName = universityName;
        this.location = location;
    }

    public void addSchool(School school)
    {
        this.school = school;
    }

    public void removeSchool()
    {
        school = null;
    }

    public void displayUniversity()
    {
        Console.WriteLine("University ID : " + universityId);
        Console.WriteLine("University : " + universityName);
        Console.WriteLine("Location : " + location);

        if (school != null)
            school.displaySchool();
    }
}