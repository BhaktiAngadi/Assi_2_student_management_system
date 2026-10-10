// class Fee
#include <iostream>
#include <string>
using namespace std;

class Fee {

private:
    int feeId;
    double amount;
    string status;

public:

    // assign values
    Fee(int feeId, double amount) {
        this->feeId = feeId;
        this->amount = amount;
        status = "Pending";
    }

    // payment status can be paid or pending
    void payFee() {

        if (status == "Pending")
            status = "Paid";
    }

    // get the status
    string getStatus() {
        return status;
    }

    // display fee details
    void displayFee() {

        cout << "Fee ID : " << feeId << endl;
        cout << "Amount : " << amount << endl;
        cout << "Status : " << status << endl;
    }
};
