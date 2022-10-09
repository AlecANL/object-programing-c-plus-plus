#include <iostream>
#include "person.cpp"
using namespace std;

class Customer : Person {
private:
    string tin;

//    Constructor

public:
    Customer() {

    }

    Customer(string name, string lastName, string address, int phone, string tin): Person(name, lastName, address,phone) {
        this->tin = tin;
    }

    void setTin(string tin) {
        this->tin = tin;
    }

    void setName(string name) {
        this->name = name;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    void setAddress(string address) {
        this->address = address;
    }

    void setPhone(int phone) {
        this->phone = phone;
    }

    string getTin() {
        return this->tin;
    }

    string getName() {
        return this->name;
    }

    string getLastName() {
        return this->lastName;
    }

    string getAddress() {
        return this->address;
    }

    int getPhone() {
        return this->phone;
    }



    void show() {
        system("cls");
        cout<<endl;
        cout<<"Customer { "<<endl;
        cout<<"  nit: "<<this->tin<<","<<endl;
        cout<<"  nombres: "<<this->name<<","<<endl;
        cout<<"  apellidos: "<<this->lastName<<","<<endl;
        cout<<"  direccion: "<<this->address<<","<<endl;
        cout<<"  telefono: "<<this->phone<<","<<endl;
        cout<<"}"<<endl;
    }
};