#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "digite um número: " << endl;
    cin >> a;

    if(a > 0){
        cout << "numero positivo" << endl;
    }else if (a < 0){
        cout << "numero negativo" << endl;
    } else{
        cout << "numero igual a zero" << endl;
    }
    return 0;
}