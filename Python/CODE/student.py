from person import Person


# class Student
# inheritance + abstraction + object references

class Student(Person):

    def __init__(self, id, name, phone,
                 email, address,
                 semester, fee,
                 result, attendance):

        super().__init__(id, name, phone, email)

        self.address = address
        self.semester = semester
        self.fee = fee
        self.result = result
        self.attendance = attendance

        self.course = None

    # register course
    def registerCourse(self, course):

        self.course = course

        # using object reference
        course.addStudent()

    # method to drop course
    def dropCourse(self):

        if self.course is not None:

            self.course.removeStudent()

            self.course = None

    # method for pay fee
    def payFee(self):

        self.fee.payFee()

    # view attendance
    def viewAttendance(self):

        self.attendance.displayAttendance()

    # view result
    def viewResult(self):

        self.result.displayResult()

    # get result
    def getResult(self):

        return self.result

    # get attendance
    def getAttendance(self):

        return self.attendance

    # polymorphism
    def display(self):

        self.displayPerson()

        print("Address : " + self.address)

        if self.course is not None:

            print("Course : " +
                  self.course.getCourseName())

        self.fee.displayFee()
