// Forward declaration
#include <iostream>
#include <string>
using namespace std;

class Teacher;


// class Subject

class Subject {

private:
    int subjectId;
    string subjectName;
    int credits;
    Teacher* teacher;

public:

    // assigning values
    Subject(int subjectId, string subjectName, int credits) {

        this->subjectId = subjectId;
        this->subjectName = subjectName;
        this->credits = credits;
        teacher = nullptr;
    }

    void assignTeacher(Teacher* teacher) {
        this->teacher = teacher;
    }

    string getSubjectName() {
        return subjectName;
    }

    // display subject details
    void displaySubject();
};
