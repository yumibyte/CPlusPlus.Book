#include <iostream>
using namespace std; // this will cover having to do std::

// square my number

double squareNumber(double x) {
    return x * x;
}

// print my number

// Note: just because it's printing doesn't mean it returns... needs to be void
void printNumber(double x) {
    cout << "the square of " << x << " is " << squareNumber(x) << "\n";
}
// main method

// int in the main method resembles whether the code could compile or not
int main() {
    printNumber(5);

}

