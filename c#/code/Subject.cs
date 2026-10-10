public class Subject
{
    private int subjectId;
    private string subjectName;
    private int credits;
    private Teacher teacher;

    public Subject(int subjectId, string subjectName, int credits)
    {
        this.subjectId = subjectId;
        this.subjectName = subjectName;
        this.credits = credits;
    }

    public void assignTeacher(Teacher teacher)
    {
        this.teacher = teacher;
    }

    public string getSubjectName()
    {
        return subjectName;
    }

    public void displaySubject()
    {
        Console.WriteLine("Subject ID : " + subjectId);
        Console.WriteLine("Subject : " + subjectName);
        Console.WriteLine("Credits : " + credits);

        if (teacher != null)
            Console.WriteLine("Teacher : " + teacher.name);
    }
}