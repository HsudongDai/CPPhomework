#include "orgCourse.h"
#include <algorithm>
using std::string;

orgCourse::orgCourse(const string crsName, int capa)
	: courseName(crsName), capacity(capa), numberOfStudents(0)
{
	students = new std::string[capacity];
}
orgCourse::orgCourse() : courseName("Null"), capacity(0), numberOfStudents(0)
{
	students = new string[1];
}
orgCourse::~orgCourse()
{
	delete [] students;
}

string orgCourse::getCourseName() const
{
	return this -> courseName;
}

void orgCourse::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents += 1;
}

void orgCourse::dropStudent(const string &name)
{
	auto ptr = find(students, students + capacity, name) - students;
	if (ptr > numberOfStudents) {
		return;
	}
	else {
		for (int i = ptr; i < numberOfStudents; i++) {
			students[ptr] = students[ptr + 1];
		}
		--numberOfStudents;
	}
}

string* orgCourse::getStudents() const
{
	return students;
}

int orgCourse::getNumberOfStudents() const
{
	return this -> numberOfStudents;
}
