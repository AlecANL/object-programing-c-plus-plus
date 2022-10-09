#include <iostream>
using namespace std;

class Person {
//    attributes
protected:
    string name, lastName, address;
    int phone;

//    Constructor
protected:
    Person() {};

    Person(string name, string lastName, string address, int phone) {
        this->name = name;
        this->lastName = lastName;
        this->address = address;
        this->phone = phone;
    };


//    methods
    void show() {

    }
};