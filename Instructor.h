#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include <string>
using namespace std;

#include "Person.h

class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:

    string display()  {
        cout << "Instructor Info: " << endl;
        cout << "Name: " << display() << endl;
        cout << "Department: " << department << endl;
        cout << "Experience: " << experienceYears << " years" << endl;
    }
};

#endif

