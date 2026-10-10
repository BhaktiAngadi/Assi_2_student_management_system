# class Semester

class Semester:

    def __init__(self, semesterNo):

        self.semesterNo = semesterNo
        self.subject = None

    # add subject
    def addSubject(self, subject):

        self.subject = subject

    # remove subject
    def removeSubject(self):

        self.subject = None

    # get subject
    def getSubject(self):

        return self.subject

    # display semester details
    def displaySemester(self):

        print("Semester : " + str(self.semesterNo))

        if self.subject is not None:
            self.subject.displaySubject()
