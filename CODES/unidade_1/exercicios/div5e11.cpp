#include  <iostream>
using namespace std;

int main(){
    int num;

    cout << "Escreva um numero: ";
    cin >> num;

    if(num % 5 == 0 && num % 11 == 0){
        cout << "Numero divisivel por 5 e 11." << endl;
    }
    else{
        cout << "Numero nao e divisivvel por 5 e 11." << endl;
    }

    return 0;
}