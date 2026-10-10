// class University
#include <iostream>
#include <string>
using namespace std;

class University {

private:
    int universityId;
    string universityName;
    string location;
    School* school;

public:

    // assigning the values
    University(int universityId,
               string universityName,
               string location) {

        this->universityId = universityId;
        this->universityName = universityName;
        this->location = location;

        school = nullptr;
    }

    void addSchool(School* school) {

        this->school = school;
    }

    // method to remove school
    void removeSchool() {

        school = nullptr;
    }

    // display university details
    void displayUniversity() {

        cout << "University ID : "
             << universityId << endl;

        cout << "University : "
             << universityName << endl;

        cout << "Location : "
             << location << endl;

        if (school != nullptr)
            school->displaySchool();
    }
};
