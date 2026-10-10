public class Student : Person
{
    private string address;
    private Semester semester;
    private Course course;
    private Fee fee;
    private Result result;
    private Attendance attendance;

    public Student(int id, string name, string phone,
                   string email, string address,
                   Semester semester, Fee fee,
                   Result result, Attendance attendance)
        : base(id, name, phone, email)
    {
        this.address = address;
        this.semester = semester;
        this.fee = fee;
        this.result = result;
        this.attendance = attendance;
    }

    public void registerCourse(Course course)
    {
        this.course = course;
        course.addStudent();
    }

    public void dropCourse()
    {
        if (course != null)
        {
            course.removeStudent();
            course = null;
        }
    }

    public void payFee()
    {
        fee.payFee();
    }

    public void viewAttendance()
    {
        attendance.displayAttendance();
    }

    public void viewResult()
    {
        result.displayResult();
    }

    public Result getResult()
    {
        return result;
    }

    public Attendance getAttendance()
    {
        return attendance;
    }

    public void displayStudent()
    {
        displayPerson();

        Console.WriteLine("Address : " + address);

        if (course != null)
            Console.WriteLine("Course : " + course.getCourseName());

        fee.displayFee();
    }
}