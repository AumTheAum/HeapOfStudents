#include <string>
#include "date.h"
#include "address.h"

#ifndef STUDENTS_H_EXISTS
#define STUDENTS_H_EXISTS

class Student{
	private:
		string firstName;
		string lastName;
		Address(Address);
		birthDate(Date);
		gradDate(Date);
		int creditHours;
	public:
		string getLastFirst();
		Student();
		init(string studentString);
		printStudent();
};

#endif

