
# class Attendance

class Attendance:

    def __init__(self):
        # assign status of attendance
        self.status = "Absent"

    # set status
    def setStatus(self, status):
        self.status = status

    # get status
    def getStatus(self):
        return self.status

    # display attendance details
    def displayAttendance(self):
        print("Attendance : " + self.status)
