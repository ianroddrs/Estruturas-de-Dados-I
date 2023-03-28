#include <iostream>
using namespace std;

int main(){
    int ano;

    cout << "Escreva um ano: ";
    cin >> ano;

    if(ano % 4 == 0){
        cout << "O ano e bissexto" << endl;
    }
    else{
        cout << "O ano nao e bissexto" << endl;
    }

    return 0;
}