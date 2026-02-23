# HeapOfStudents

## UML

'''
classDiagram

class Student{
    firstName: string
    lastName: string
    Address: Address
    birthDate: Date
    gradDate: Date
    creditHours: int
    getLastFirst() string
    Student()
    init(string studentString)
    printStudent()
}

class Address{
    street: string
    city: string
    state: string
    zip: string
    Address()
    init(street, city, state, zip)
    printAddress()

}

class Date{
    month: int
    day: int
    year: int
    Date()
    init(dateString)
    printDate()
}

Student --> Address
Student --> Date
'''
