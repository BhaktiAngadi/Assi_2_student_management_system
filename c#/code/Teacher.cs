public class Teacher : Person
{
    private string qualification;
    private Subject subject;

    public Teacher(int id, string name, string phone,
                   string email, string qualification)
        : base(id, name, phone, email)
    {
        this.qualification = qualification;
    }

    public void assignSubject(Subject subject)
    {
        this.subject = subject;
        subject.assignTeacher(this);
    }

    public void uploadMarks(Result result, int marks)
    {
        result.setMarks(marks);
        result.calculateGrade();
    }

    public void markAttendance(Attendance attendance, string status)
    {
        attendance.setStatus(status);
    }

    public void displayTeacher()
    {
        displayPerson();

        Console.WriteLine("Qualification : " + qualification);

        if (subject != null)
            Console.WriteLine("Subject : " + subject.getSubjectName());
    }
}