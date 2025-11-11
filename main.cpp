#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

using namespace std;

// ==================== Person Class Implementation =========================

Person::Person() {
    name = "";
    id = 0;
}

Person::Person(string n, int i) {
    name = n;
    id = i;
}

void Person::display() const {
    cout << "Name: " << name << " (ID: " << id << ")" << endl;
}

// ==================== Student Class Implementation ====================

Student::Student() : Person() {
    yearLevel = 0;
    major = "";
}

Student::Student(string n, int id, int year, string m) : Person(n, id) {
    yearLevel = year;
    major = m;
}

void Student::display() const {
    cout << "Name: " << name << endl;
    cout << "Year: " << yearLevel << endl;
    cout << "Major: " << major << endl;
}

// ==================== Instructor Class Implementation ====================

Instructor::Instructor() : Person() {
    department = "";
    experienceYears = 0;
}

Instructor::Instructor(string n, int id, string dep, int exp) : Person(n, id) {
    department = dep;
    experienceYears = exp;
}

void Instructor::display() const {
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Experience: " << experienceYears << " years" << endl;
}

// ==================== Course Class Implementation ====================

Course::Course(string code, string name, int max, const Instructor& inst)
{
    courseCode = code;
    courseName = name;
    maxStudents = max;
    instructor = inst;

    students = new Student[maxStudents];
    currentStudents = 0;
}

void Course::addStudent(const Student& s) {
    if (currentStudents < maxStudents) {
        students[currentStudents] = s;
        currentStudents++;
    }
}

void Course::displayCourseInfo() const {
    cout << "Course: " << courseCode << " - " << courseName << endl;
    cout << "Max Students: " << maxStudents << endl;

    cout << "Currently Enrolled: ";
    if (currentStudents > 0) {
        cout << students[0].name << " (ID: " << students[0].id << ")" << endl;
    } else {
        cout << "None" << endl;
    }

    cout << endl << "Instructor Info:" << endl;
    instructor.display();

    if (currentStudents > 0) {
        cout << endl << "Student Info:" << endl;
        students[0].display();
    }
}

Course::~Course() {
    delete[] students;
}

// ==================== Main Function ====================
int main() {
    
    Instructor instructor("Dr. Lina Khaled", 9001, "Computer Science", 5);
    Student s1("Omar Nabil", 2202, 2, "Informatics");

    Course course("CS101", "Introduction to Programming", 3, instructor);
    course.addStudent(s1);

    course.displayCourseInfo();

    return 0;
}
