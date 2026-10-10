public class Course
{
    private int courseId;
    private string courseName;
    private int duration;
    private int totalCredits;
    private int maxCapacity;
    private int studentCount;
    private Teacher teacher;

    public Course(int courseId, string courseName, int duration,
                  int totalCredits, int maxCapacity)
    {
        this.courseId = courseId;
        this.courseName = courseName;
        this.duration = duration;
        this.totalCredits = totalCredits;
        this.maxCapacity = maxCapacity;
        studentCount = 0;
    }

    public void assignTeacher(Teacher teacher)
    {
        this.teacher = teacher;
    }

    public void addStudent()
    {
        if (studentCount < maxCapacity)
        {
            studentCount++;
        }
        else
        {
            Console.WriteLine("Course is full.");
        }
    }

    public void removeStudent()
    {
        if (studentCount > 0)
            studentCount--;
    }

    public string getCourseName()
    {
        return courseName;
    }

    public void displayCourse()
    {
        Console.WriteLine("Course ID : " + courseId);
        Console.WriteLine("Course Name : " + courseName);
        Console.WriteLine("Duration : " + duration + " Years");
        Console.WriteLine("Credits : " + totalCredits);
        Console.WriteLine("Students : " + studentCount + "/" + maxCapacity);

        if (teacher != null)
            Console.WriteLine("Teacher : " + teacher.name);
    }
}