#include <iostream>

using namespace std;

int main(){
    char a[81];
    char b[81];

    cin >> a;
    cout << "nome: " << a << endl;

    cin.ignore();
    
    cin.get(b,81);
    cout << "nome: " << b << endl;
}