// class Course
#include <iostream>
#include <string>
using namespace std;

class Course {

private:
    int courseId;
    string courseName;
    int duration;
    int totalCredits;
    int maxCapacity;
    int studentCount;
    Teacher* teacher;

public:

    // setting the values to variables
    Course(int courseId, string courseName, int duration,
           int totalCredits, int maxCapacity) {

        this->courseId = courseId;
        this->courseName = courseName;
        this->duration = duration;
        this->totalCredits = totalCredits;
        this->maxCapacity = maxCapacity;
        studentCount = 0;
        teacher = nullptr;
    }

    void assignTeacher(Teacher* teacher) {
        this->teacher = teacher;
    }

    // method to add student based on capacity
    // of class
    void addStudent() {

        if (studentCount < maxCapacity) {
            studentCount++;
        }
        else {
            cout << "Course is full." << endl;
        }
    }

    // remove student
    void removeStudent() {

        if (studentCount > 0) {
            studentCount--;
        }
    }

    // get course name
    string getCourseName() {
        return courseName;
    }

    // display course details
    void displayCourse() {

        cout << "Course ID : "
             << courseId << endl;

        cout << "Course Name : "
             << courseName << endl;

        cout << "Duration : "
             << duration << " Years" << endl;

        cout << "Credits : "
             << totalCredits << endl;

        cout << "Students : "
             << studentCount << "/"
             << maxCapacity << endl;

        if (teacher != nullptr)
            cout << "Teacher : "
                 << teacher->getName() << endl;
    }
};
