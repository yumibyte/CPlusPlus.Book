#include <iostream>
#include <initializer_list>

using namespace std;

void print() {
    int v[] = {0, 1, 2, 3, 4, 5};
    int values[] = {10, 21, 32, 43, 54, 64};

    for (auto x : v)  
        cout << x << '\n';
    
    for (auto x : values) 
        cout << x << '\n';
    
}

int main() {
    /**
    char v[6];
    // cout << v << endl;

    char* p = &v[3];        // points to 4th element in v
    char x = *p;
    cout << x << endl;
    // * sumbolizes contents of
    **/

   // AUTO AND FOR LOOPS

   print();
}