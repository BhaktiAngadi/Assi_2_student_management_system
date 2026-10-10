#include <iostream>
#include <string>
using namespace std;


// class Attendance
class Attendance {

private:
    string status;

public:

    // assign status of attendance
    Attendance() {
        status = "Absent";
    }

    // set status
    void setStatus(string status) {
        this->status = status;
    }

    // get status
    string getStatus() {
        return status;
    }

    // display attendance details
    void displayAttendance() {
        cout << "Attendance : " << status << endl;
    }
};
