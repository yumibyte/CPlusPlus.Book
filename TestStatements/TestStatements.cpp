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

void accept2() {

    cout << "y/n?" << endl;

    char answer = 0; // q = does have to = 0?

    cin >> answer;

    switch (answer) {
        case 'y':
            cout << "yes" << endl;
            break;
        case 'n':
            cout << "no" << endl;
            break;
        default:
            cout << "I'll take that as a no!" << endl;
    }
        


}



int main() {

    accept2();


}