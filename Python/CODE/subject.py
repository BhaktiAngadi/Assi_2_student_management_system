# class Subject

class Subject:

    def __init__(self, subjectId, subjectName, credits):

        self.subjectId = subjectId
        self.subjectName = subjectName
        self.credits = credits
        self.teacher = None

    # assign teacher
    def assignTeacher(self, teacher):

        self.teacher = teacher

    # get subject name
    def getSubjectName(self):

        return self.subjectName

    # display subject details
    def displaySubject(self):

        print("Subject ID : " + str(self.subjectId))

        print("Subject : " + self.subjectName)

        print("Credits : " + str(self.credits))

        if self.teacher is not None:
            print("Teacher : " + self.teacher.getName())
