#include <iostream>

using namespace std;


// working with POINTERS
void pointer() {
    
    int x = 25;
    int* p = &x; // where & is the address

    // cout << p << endl;
    // cout << *p << endl;     // this will print the value based on the POINTER

    // dereferencing pointer p
    cout << x << endl;
    cout << *p << endl;

    x = x + 5;
    x = *p + 5;
    *p = *p + 5;

    cout << x << endl;
    cout << &*p << endl; // & will cancel out *

}

int main() {

    pointer();
}
