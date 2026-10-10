# class Result

class Result:

    def __init__(self):

        self.marks = 0
        self.grade = "NA"

    # set marks
    def setMarks(self, marks):
        self.marks = marks

    # calculate grades based on conditions
    def calculateGrade(self):

        if self.marks >= 90:
            self.grade = "A+"

        elif self.marks >= 75:
            self.grade = "A"

        elif self.marks >= 60:
            self.grade = "B"

        elif self.marks >= 40:
            self.grade = "C"

        else:
            self.grade = "Fail"

    # display result
    def displayResult(self):

        print("Marks : " + str(self.marks))

        print("Grade : " + self.grade)
