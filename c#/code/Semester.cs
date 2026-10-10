public class Semester
{
    private int semesterNo;
    private Subject subject;

    public Semester(int semesterNo)
    {
        this.semesterNo = semesterNo;
    }

    public void addSubject(Subject subject)
    {
        this.subject = subject;
    }

    public void removeSubject()
    {
        subject = null;
    }

    public Subject getSubject()
    {
        return subject;
    }

    public void displaySemester()
    {
        Console.WriteLine("Semester : " + semesterNo);

        if (subject != null)
            subject.displaySubject();
    }
}