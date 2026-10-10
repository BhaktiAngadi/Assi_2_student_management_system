from abc import ABC, abstractmethod

# class Person
# parent class
# abstraction + inheritance + encapsulation

class Person(ABC):

    def __init__(self, id, name, phone, email):

        self.id = id
        self.name = name
        self.phone = phone
        self.email = email

    # using get methods to encapsulate
    def getId(self):
        return self.id

    def getName(self):
        return self.name

    def getPhone(self):
        return self.phone

    def getEmail(self):
        return self.email

    # method to update phone no.
    def updatePhone(self, phone):
        self.phone = phone

    # method to update email id
    def updateEmail(self, email):
        self.email = email

    # display details
    def displayPerson(self):

        print("ID : " + str(self.id))

        print("Name : " + self.name)

        print("Phone : " + self.phone)

        print("Email : " + self.email)

    # abstract method display
    @abstractmethod
    def display(self):
        pass
