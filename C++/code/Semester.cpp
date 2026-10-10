// Forward declaration
#include <iostream>
#include <string>
using namespace std;

class Subject;


// class Semester

class Semester {

private:
    int semesterNo;
    Subject* subject;

public:

    // assign values
    Semester(int semesterNo) {

        this->semesterNo = semesterNo;
        subject = nullptr;
    }

    void addSubject(Subject* subject) {
        this->subject = subject;
    }

    // method to remove subject
    void removeSubject() {
        subject = nullptr;
    }

    // method to get subject
    Subject* getSubject() {
        return subject;
    }

    // display semester details
    void displaySemester() {

        cout << "Semester : "
             << semesterNo << endl;

        if (subject != nullptr)
            subject->displaySubject();
    }
};
