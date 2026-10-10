// class Result
#include <iostream>
#include <string>
using namespace std;

class Result {

private:
    int marks;
    string grade;

public:

    Result() {
        marks = 0;
        grade = "NA";
    }

    // set marks
    void setMarks(int marks) {
        this->marks = marks;
    }

    // calculate grades based on conditions
    void calculateGrade() {

        if (marks >= 90)
            grade = "A+";
        else if (marks >= 75)
            grade = "A";
        else if (marks >= 60)
            grade = "B";
        else if (marks >= 40)
            grade = "C";
        else
            grade = "Fail";
    }

    // display result
    void displayResult() {

        cout << "Marks : " << marks << endl;
        cout << "Grade : " << grade << endl;
    }
};
