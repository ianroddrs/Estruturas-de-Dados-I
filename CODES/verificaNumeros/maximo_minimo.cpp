#include <iostream>
using namespace std;

int main(){
    float a, b, maior;

    cout << "digite um número: " << endl;
    cin >> a;
    cout << "digite outro número: " << endl;
    cin >> b;

    if(b > a){
        maior = b;
    }else {
        maior = a;
    }

    cout << "o maior número é: " << maior << endl;

    return 0;
}
