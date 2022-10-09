#include <iostream>
#include "customer.cpp"
using namespace std;



int main() {
    string name, lastName, address, tin;
    int phone;

    cout<<"Ingresar NIT: ";
    cin>>tin;
    cout<<"Ingresar nombre: ";
    cin>>name;
    cout<<"Ingresar apellidos: ";
    cin>>lastName;
    cout<<"Ingrear direccion: ";
    cin>>address;
    cout<<"Ingresar numero de telefono: ";
    cin>>phone;

    Customer customer1 = Customer(name, lastName, address, phone, tin);
    customer1.show();

    return 0;
}
