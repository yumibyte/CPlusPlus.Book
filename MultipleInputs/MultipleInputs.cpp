#include <iostream>

using namespace std;

void print(double d) {
    cout << d << " double" << endl;
}
void print(string d) {
    cout << d << " string" << endl;
}
void print(int d) {
    cout << d << " integer" << endl;
}


int main() {

    print(200);
    print("Dog");
    print(200.2412413);

}