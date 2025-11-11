#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;
//#write your code here


class Instructor : public Student {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

public:
void addStudent(const Student& s);
void displayCourseInfo(){
    cout << "Course: " << courseCode << "-" << courseName << endl;;
    cout << "Max Students: " << maxStudents << endl;
    cout << "Current Enrolled: " << currentStudents << endl;
}


};


#endif
