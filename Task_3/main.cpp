#include <iostream>
#include <string>
#include <vector>
#include "person.h"
using namespace std;


int main() {
    Person bob("Bob", 20);
    Person bob2(bob);

    cout << "Bob's name is: " << bob.name_ << endl;
    cout << "Bob's 2 name  is: " << bob2.name_ << endl;

    bob.name_ = "Bobby";
    cout << "Bob's name is: " << bob.name_ << endl;
    cout << "Bob's 2 name  is: " << bob2.name_ << endl;
}