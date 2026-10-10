from person import Person

# class Teacher
# inherited from class Person
# encapsulation

class Teacher(Person):

    def __init__(self, id, name, phone,
                 email, qualification):

        super().__init__(id, name, phone, email)

        self.qualification = qualification
        self.subject = None

    # assign subject
    def assignSubject(self, subject):

        self.subject = subject

        subject.assignTeacher(self)

    # method to upload marks
    def uploadMarks(self, result, marks):

        result.setMarks(marks)

        result.calculateGrade()

    # marking attendance
    def markAttendance(self, attendance, status):

        attendance.setStatus(status)

    # polymorphism
    def display(self):

        self.displayPerson()

        print("Qualification : " + self.qualification)

        if self.subject is not None:
            print("Subject : " +
                  self.subject.getSubjectName())
