#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Explaining pointers 
int main() {
    int x = 10;

    int &referenceToX = x;

    int copyOfX = x;

    x += 10; 

    cout << "x is now: " << x << endl;
    cout << "referenceToX is: " << referenceToX << endl;
    cout << "copy of x is: " << copyOfX << endl;

    referenceToX += 10; 
    cout << "--------------------------" << endl;
    cout << "x is now: " << x << endl;
    cout << "referenceToX is: " << referenceToX << endl;
    cout << "copy of x is: " << copyOfX << endl;


    cout << "--------------------------" << endl;
    cout << "Pointer example" << endl;
    int *pointerToX = &x;

    *pointerToX = 100; 
    cout << "x is now: " << x << endl;
    cout << "referenceToX is: " << referenceToX << endl;
    


}