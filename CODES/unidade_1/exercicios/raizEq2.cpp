#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c, delta, x1, x2;

    cout << "Digite os valores de a, b e c" << endl;

    cout << "Valor de a: ";
    cin >> a;

    cout << "Valor de b: ";
    cin >> b;

    cout << "Valor de c: ";
    cin >> c;

    delta = pow(b,2)-(4*(a*c));
    x1 = ((-b) + sqrt(delta))/(2*a);
    x2 = ((-b) - sqrt(delta))/(2*a);

    cout << "Raiz 1 = " << x1 << endl << "Raiz 2 = " << x2 << endl;

    return 0;
}