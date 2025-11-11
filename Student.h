#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
#include "Person.h"
//#write Person class here


class Student : public Person {
private:
    int yearLevel;
    string major;

public:
void display(){
    cout << "Student Info: " << endl;
    cout << "Year Level: "<< yearLevel << endl;
    cout << "Major: " << major << endl;
}

   
};


#endif

