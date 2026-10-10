// class Student
// inheritance + abstraction + object references
#include <iostream>
#include <string>
using namespace std;

class Student : public Person {

private:
    string address;
    Semester* semester;
    Course* course;
    Fee* fee;
    Result* result;
    Attendance* attendance;

public:

    // assign the values
    Student(int id, string name, string phone,
            string email, string address,
            Semester* semester, Fee* fee,
            Result* result, Attendance* attendance)
        : Person(id, name, phone, email) {

        this->address = address;
        this->semester = semester;
        this->fee = fee;
        this->result = result;
        this->attendance = attendance;

        course = nullptr;
    }

    // register course
    void registerCourse(Course* course) {

        this->course = course;

        course->addStudent();
    }

    // method to drop course
    void dropCourse() {

        if (course != nullptr) {

            course->removeStudent();

            course = nullptr;
        }
    }

    // method for pay fee
    void payFee() {

        fee->payFee();
    }

    // view attendance
    void viewAttendance() {

        attendance->displayAttendance();
    }

    // view result
    void viewResult() {

        result->displayResult();
    }

    Result* getResult() {

        return result;
    }

    Attendance* getAttendance() {

        return attendance;
    }

    // polymorphism
    void display() override {

        displayPerson();

        cout << "Address : "
             << address << endl;

        if (course != nullptr)
            cout << "Course : "
                 << course->getCourseName() << endl;

        fee->displayFee();
    }
};
