using System;

public class Program
{
    public static void Main(string[] args)
    {
        // University
        University university = new University(
            1,
            "Goa University",
            "Taleigao, Goa");

        // School
        School school = new School(
            101,
            "School of Computer Science",
            "Dr. Naik");

        university.addSchool(school);

        // Semester
        Semester semester = new Semester(6);

        // Subject
        Subject subject = new Subject(
            501,
            "Java Programming",
            4);

        semester.addSubject(subject);

        // Teacher
        Teacher teacher = new Teacher(
            201,
            "Rahul Patil",
            "9876543210",
            "rahul@gmail.com",
            "M.Tech");

        teacher.assignSubject(subject);

        // Course
        Course course = new Course(
            301,
            "BSc Computer Science",
            3,
            120,
            60);

        course.assignTeacher(teacher);

        // Student's objects
        Fee fee = new Fee(401, 50000);
        Result result = new Result();
        Attendance attendance = new Attendance();

        // Student
        Student student = new Student(
            101,
            "Bhakti",
            "9876543210",
            "bhakti@gmail.com",
            "Goa",
            semester,
            fee,
            result,
            attendance);

        // Student registers course
        student.registerCourse(course);

        // Teacher updates student
        teacher.uploadMarks(student.getResult(), 86);
        teacher.markAttendance(student.getAttendance(), "Present");

        // Student pays fee
        student.payFee();

        // Display Details
        Console.WriteLine("\n===== UNIVERSITY DETAILS =====");
        university.displayUniversity();

        Console.WriteLine("\n===== COURSE DETAILS =====");
        course.displayCourse();

        Console.WriteLine("\n===== SEMESTER DETAILS =====");
        semester.displaySemester();

        Console.WriteLine("\n===== TEACHER DETAILS =====");
        teacher.displayTeacher();

        Console.WriteLine("\n===== STUDENT DETAILS =====");
        student.displayStudent();

        Console.WriteLine("\n===== RESULT =====");
        student.viewResult();

        Console.WriteLine("\n===== ATTENDANCE =====");
        student.viewAttendance();

        Console.WriteLine("\n===== FEE DETAILS =====");
        fee.displayFee();

        // Student drops course
        Console.WriteLine("\nStudent Drops Course...");
        student.dropCourse();

        Console.WriteLine("\n===== COURSE DETAILS AFTER DROP =====");
        course.displayCourse();
    }
}