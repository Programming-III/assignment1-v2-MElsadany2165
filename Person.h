#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

//#write Person class here
class Person{
private:
    string name;
    int id;

public:
void display(){

    cout << "Person's Name: "<< name << endl;
    cout << "Person's ID: " << id << endl;
}
};






#endif
