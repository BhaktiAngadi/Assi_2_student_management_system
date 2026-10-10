public class Result
{
    private int marks;
    private string grade;

    public Result()
    {
        marks = 0;
        grade = "NA";
    }

    public void setMarks(int marks)
    {
        this.marks = marks;
    }

    public void calculateGrade()
    {
        if (marks >= 90)
            grade = "A+";
        else if (marks >= 75)
            grade = "A";
        else if (marks >= 60)
            grade = "B";
        else if (marks >= 40)
            grade = "C";
        else
            grade = "Fail";
    }

    public void displayResult()
    {
        Console.WriteLine("Marks : " + marks);
        Console.WriteLine("Grade : " + grade);
    }
}