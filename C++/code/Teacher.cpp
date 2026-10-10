// class Teacher
// inherited from class Person
// encapsulation
#include <iostream>
#include <string>
using namespace std;

class Teacher : public Person {

private:
    string qualification;
    Subject* subject;

public:

    // assigning values
    Teacher(int id, string name, string phone,
            string email, string qualification)
        : Person(id, name, phone, email) {

        this->qualification = qualification;
        subject = nullptr;
    }

    void assignSubject(Subject* subject) {

        this->subject = subject;
        subject->assignTeacher(this);
    }

    // method to upload marks
    void uploadMarks(Result* result, int marks) {

        result->setMarks(marks);
        result->calculateGrade();
    }

    // marking attendance
    void markAttendance(Attendance* attendance,
                        string status) {

        attendance->setStatus(status);
    }

    // polymorphism
    void display() override {

        displayPerson();

        cout << "Qualification : "
             << qualification << endl;

        if (subject != nullptr)
            cout << "Subject : "
                 << subject->getSubjectName() << endl;
    }
};
