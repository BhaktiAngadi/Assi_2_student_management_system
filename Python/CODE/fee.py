# class Fee

class Fee:

    def __init__(self, feeId, amount):

        self.feeId = feeId
        self.amount = amount
        self.status = "Pending"

    # payment status can be paid or pending
    def payFee(self):

        if self.status == "Pending":
            self.status = "Paid"

    # get the status
    def getStatus(self):
        return self.status

    # display fee details
    def displayFee(self):

        print("Fee ID : " + str(self.feeId))

        print("Amount : " + str(self.amount))

        print("Status : " + self.status)
