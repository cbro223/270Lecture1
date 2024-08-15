#include <iostream>
#include <string>
#include <vector>

using namespace std;

void AddToAgeWithoutReference(int age) {
    age = age + 5;
}

void AddToAgeWithReference(int &age) {
    age = age + 10;
}

void AddToAgeWithPointer(int *age) {
    *age = *age + 7;
}
int main() {
    int bobAge = 10;

    int janeAge = 10;

    AddToAgeWithoutReference(bobAge);
    AddToAgeWithReference(janeAge);

    AddToAgeWithPointer(&bobAge);

    cout << "Bob is: " << bobAge << endl;
    cout << "Jane is: " << janeAge << endl;


}
