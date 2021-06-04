#include <iostream>

using namespace std;

bool accept() {

    cout << "do you want to proceed (y/n)" << endl;
    char answer = 0;
    cin >> answer;

    if (answer == 'y')
        return true;

    return false;

}

int main() {

    accept();


}