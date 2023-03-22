#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o segundo numero: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "O maior numero digitado foi: " << num1 << endl;
    } else if(num2 > num1 && num2 > num3){
        cout << "O maior numero digitado foi: " << num2 << endl;
    } else{
        cout << "O maior numero digitado foi: " << num3 << endl;
    }

    return 0;
}
