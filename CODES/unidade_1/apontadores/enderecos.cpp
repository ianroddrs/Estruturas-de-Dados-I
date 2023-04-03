#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int* c;

    cout << "lixo = " << c << endl;

    c = &a;

    cout << "a = " << a << endl;
    cout << "ponteiro a = " << &a << endl;
    cout << "c = " << c << endl;
    cout << "ponteiro c = " << &c << endl;

    (*c) = 20;

    cout << "a = " << a << endl;

    return 0;
}