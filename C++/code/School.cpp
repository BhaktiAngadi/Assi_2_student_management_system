// class School
#include <iostream>
#include <string>
using namespace std;

class School {

private:
    int schoolId;
    string schoolName;
    string hod;

public:

    // assign values
    School(int schoolId, string schoolName, string hod) {

        this->schoolId = schoolId;
        this->schoolName = schoolName;
        this->hod = hod;
    }

    void assignHOD(string hod) {
        this->hod = hod;
    }

    // display school details
    void displaySchool() {

        cout << "School ID : " << schoolId << endl;
        cout << "School Name : " << schoolName << endl;
        cout << "HOD : " << hod << endl;
    }
};
