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

// note that if you take an input and want to make
// sure it's not a nullptr you can check by
// if(auto n = v.size() )

void accept2() {

    cout << "y/n?" << endl;

    char answer = 0;

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