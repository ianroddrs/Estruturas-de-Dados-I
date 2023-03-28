#include <iostream>
using namespace std;

int main(){

    int n1, n2, maior;

    cout << "Escreva um numero: ";
    cin >> n1;
    cout << "Escreva outro nuemro: ";
    cin >> n2;

    if(n1 > n2){
        maior = n1;
    }
    else{
        maior = n2;
    }

    cout << "O maior numero é: " << maior << endl;

}