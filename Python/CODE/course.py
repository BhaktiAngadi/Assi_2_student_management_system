# class Course

class Course:

    def __init__(self, courseId, courseName, duration,
                 totalCredits, maxCapacity):

        self.courseId = courseId
        self.courseName = courseName
        self.duration = duration
        self.totalCredits = totalCredits
        self.maxCapacity = maxCapacity
        self.studentCount = 0
        self.teacher = None

    # assign teacher
    def assignTeacher(self, teacher):
        self.teacher = teacher

    # method to add student based on capacity
    def addStudent(self):

        if self.studentCount < self.maxCapacity:
            self.studentCount += 1

        else:
            print("Course is full.")

    # remove student
    def removeStudent(self):

        if self.studentCount > 0:
            self.studentCount -= 1

    # get course name
    def getCourseName(self):
        return self.courseName

    # display course details
    def displayCourse(self):

        print("Course ID : " + str(self.courseId))

        print("Course Name : " + self.courseName)

        print("Duration : " + str(self.duration) + " Years")

        print("Credits : " + str(self.totalCredits))

        print("Students : " +
              str(self.studentCount) +
              "/" +
              str(self.maxCapacity))

        if self.teacher is not None:
            print("Teacher : " + self.teacher.getName())
