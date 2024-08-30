#include <iostream>
using namespace std;
class User{
    string name;
    string address;
public:
    User(string name, string address) {
        this->name = name;
        this->address = address;
    }

    void information() {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
    }

    ~User() {
        cout<<"Delete "<<name<<endl;
    }

};