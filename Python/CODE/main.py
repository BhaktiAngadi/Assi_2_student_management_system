from university import University
from school import School
from semester import Semester
from subject import Subject
from teacher import Teacher
from course import Course
from fee import Fee
from result import Result
from attendance import Attendance
from student import Student


# ==========================================
# MAIN
# ==========================================

if __name__ == "__main__":

    # University
    university = University(
        1,
        "Goa University",
        "Taleigao, Goa"
    )


    # School
    school = School(
        101,
        "School of Computer Science",
        "Dr. Naik"
    )


    university.addSchool(school)


    # Semester
    semester = Semester(6)


    # Subject
    subject = Subject(
        501,
        "Java Programming",
        4
    )


    semester.addSubject(subject)


    # Teacher
    teacher = Teacher(
        201,
        "Rahul Patil",
        "9876543210",
        "rahul@gmail.com",
        "M.Tech"
    )


    teacher.assignSubject(subject)


    # Course
    course = Course(
        301,
        "BSc Computer Science",
        3,
        120,
        60
    )


    course.assignTeacher(teacher)


    # Student's objects
    fee = Fee(
        401,
        50000
    )


    result = Result()


    attendance = Attendance()


    # Student
    student = Student(
        101,
        "Bhakti",
        "9876543210",
        "bhakti@gmail.com",
        "Goa",
        semester,
        fee,
        result,
        attendance
    )


    # Student registers course
    student.registerCourse(course)


    # Teacher updates student
    teacher.uploadMarks(
        student.getResult(),
        86
    )


    teacher.markAttendance(
        student.getAttendance(),
        "Present"
    )


    # Student pays fee
    student.payFee()


    # ==========================================
    # DISPLAY DETAILS
    # ==========================================

    print("\n UNIVERSITY DETAILS ")

    university.displayUniversity()


    print("\n COURSE DETAILS ")

    course.displayCourse()


    print("\n SEMESTER DETAILS ")

    semester.displaySemester()


    print("\n TEACHER DETAILS ")

    teacher.display()


    print("\n STUDENT DETAILS ")

    student.display()


    print("\n RESULT ")

    student.viewResult()


    print("\n ATTENDANCE ")

    student.viewAttendance()


    print("\n FEE DETAILS ")

    fee.displayFee()


    # Student drops course
    print("\nStudent Drops Course...")

    student.dropCourse()


    print("\n COURSE DETAILS AFTER DROP ")

    course.displayCourse()
