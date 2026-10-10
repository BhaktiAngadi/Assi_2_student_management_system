// class Person
// parent class
// abstraction + inheritance + encapsulation
#include <iostream>
#include <string>
using namespace std;

class Person {

private:
    int id;
    string name;
    string phone;
    string email;

public:

    // assign values
    Person(int id, string name, string phone, string email) {

        this->id = id;
        this->name = name;
        this->phone = phone;
        this->email = email;
    }

    // using get methods to encapsulate
    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    string getPhone() {
        return phone;
    }

    string getEmail() {
        return email;
    }

    // method to update phone no.
    void updatePhone(string phone) {
        this->phone = phone;
    }

    // method to update email id
    void updateEmail(string email) {
        this->email = email;
    }

    // display details
    void displayPerson() {

        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Phone : " << phone << endl;
        cout << "Email : " << email << endl;
    }

    // abstract method display
    virtual void display() = 0;
};
