#include <iostream>

using namespace std;


struct Record {
    string name;
};

void function(int arg) {    // in this scenario arg is local, function is global
    string test = "Who dares wins";

    auto p = new Record();
}


int main() {

    function(2);
}