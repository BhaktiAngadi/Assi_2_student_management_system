/*
Author name = Bhakti Angadi
Roll no = 2613

description = implemented C++ OOP concepts
in a "student management system"

concepts = Encapsulation, Polymorphism,
Object references, Inheritance, Abstraction
*/


#include <iostream>
#include <string>

using namespace std;


// ==========================================
// INCLUDE ALL CLASS FILES
// ==========================================

#include "Person.cpp"

#include "Attendance.cpp"

#include "Fee.cpp"

#include "Result.cpp"

#include "School.cpp"

#include "Subject.cpp"

#include "Teacher.cpp"

#include "Course.cpp"

#include "Semester.cpp"

#include "Student.cpp"

#include "University.cpp"


// ==========================================
// SUBJECT DISPLAY FUNCTION
// ==========================================

// Teacher is completely defined by this point,
// so now Subject can access Teacher's getName().

void Subject::displaySubject() {

    cout << "Subject ID : "
         << subjectId << endl;

    cout << "Subject : "
         << subjectName << endl;

    cout << "Credits : "
         << credits << endl;

    if (teacher != nullptr)
        cout << "Teacher : "
             << teacher->getName() << endl;
}


// ==========================================
// MAIN
// ==========================================

int main() {

    // University
    University university(
        1,
        "Goa University",
        "Taleigao, Goa"
    );


    // School
    School school(
        101,
        "School of Computer Science",
        "Dr. Naik"
    );


    university.addSchool(&school);


    // Semester
    Semester semester(6);


    // Subject
    Subject subject(
        501,
        "Java Programming",
        4
    );


    semester.addSubject(&subject);


    // Teacher
    Teacher teacher(
        201,
        "Rahul Patil",
        "9876543210",
        "rahul@gmail.com",
        "M.Tech"
    );


    teacher.assignSubject(&subject);


    // Course
    Course course(
        301,
        "BSc Computer Science",
        3,
        120,
        60
    );


    course.assignTeacher(&teacher);


    // Student's objects
    Fee fee(
        401,
        50000
    );


    Result result;


    Attendance attendance;


    // Student
    Student student(
        101,
        "Bhakti",
        "9876543210",
        "bhakti@gmail.com",
        "Goa",
        &semester,
        &fee,
        &result,
        &attendance
    );


    // Student registers course
    student.registerCourse(&course);


    // Teacher updates student
    teacher.uploadMarks(
        student.getResult(),
        86
    );


    teacher.markAttendance(
        student.getAttendance(),
        "Present"
    );


    // Student pays fee
    student.payFee();


    // ==========================================
    // DISPLAY DETAILS
    // ==========================================

    cout << "\n UNIVERSITY DETAILS " << endl;

    university.displayUniversity();


    cout << "\n COURSE DETAILS " << endl;

    course.displayCourse();


    cout << "\n SEMESTER DETAILS " << endl;

    semester.displaySemester();


    cout << "\n TEACHER DETAILS " << endl;

    teacher.display();


    cout << "\n STUDENT DETAILS " << endl;

    student.display();


    cout << "\n RESULT " << endl;

    student.viewResult();


    cout << "\n ATTENDANCE " << endl;

    student.viewAttendance();


    cout << "\n FEE DETAILS " << endl;

    fee.displayFee();


    // Student drops course
    cout << "\nStudent Drops Course..." << endl;

    student.dropCourse();


    cout << "\n COURSE DETAILS AFTER DROP " << endl;

    course.displayCourse();


    return 0;
}
