#include <iostream>

using namespace std;

struct Vector {
    int size;
    double* elem;


};

void vector_init(Vector& v, int s) {
    v.elem = new double[s];     // create array with the size of s

    v.size = s;

}

double find_sum(Vector& v, int s) {

    // for (int i = 0; i != s; i ++) 
    //     cin >> v.elem[i];

    double sum = 0;
    for (int i = 0; i != s; i ++) {
        sum += v.elem[i];
    }
    return sum;

}


int main() {
    Vector v;
    vector_init(v, 10);

    v.elem[0] = 10.234;
    v.elem[1] = 235.134;
    v.elem[2] = 536.2;

    double sum =  find_sum(v, 10);
    cout << sum << endl;
    // cout << v.size << endl;

}