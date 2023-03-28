#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "Escreva o nome completo:";
    cout << name << endl;

    getline(cin, name);

    cout << name << endl;
    
    return 0;
}
