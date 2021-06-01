#include <iostream>

using namespace std;

int main() {

    // NOTE that you need to declare ea. separately or else it uses an arbitrary #
    int x = 10, a = 10;
    int y = 5, b = 5;
    double d = {2.3};

    // cout << x << " " << y << endl;

    // consider that -> is the same as . in classes
    // x-=y;
    // --a;
    // b--;
    cout << d << endl;
    cout << x << " " << y << " " << a << " " << b << endl;
    // note that if you declare w/ brakets it won't be able to assume types (ex. from dbl to int)

   
}

