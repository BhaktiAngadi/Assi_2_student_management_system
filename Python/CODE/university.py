# class University

class University:

    def __init__(self, universityId,
                 universityName,
                 location):

        self.universityId = universityId
        self.universityName = universityName
        self.location = location
        self.school = None

    # add school
    def addSchool(self, school):

        self.school = school

    # remove school
    def removeSchool(self):

        self.school = None

    # display university details
    def displayUniversity(self):

        print("University ID : " +
              str(self.universityId))

        print("University : " +
              self.universityName)

        print("Location : " +
              self.location)

        if self.school is not None:
            self.school.displaySchool()
