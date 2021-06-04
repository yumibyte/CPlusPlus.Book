#include <iostream>

using namespace std;

bool accept() {

    cout << "do you want to proceed (y/n)" << endl;
    char answer = 0;
    cin >> answer;

    if (answer == 'y')
        cout << "t" << endl;
    else 
        cout << "f" << endl;

}

int main() {

    accept();


}