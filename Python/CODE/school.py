# class School

class School:

    def __init__(self, schoolId, schoolName, hod):

        self.schoolId = schoolId
        self.schoolName = schoolName
        self.hod = hod

    # assign HOD
    def assignHOD(self, hod):

        self.hod = hod

    # display school details
    def displaySchool(self):

        print("School ID : " + str(self.schoolId))

        print("School Name : " + self.schoolName)

        print("HOD : " + self.hod)
