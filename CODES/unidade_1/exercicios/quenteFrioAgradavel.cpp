#include <iostream>>
using namespace std;

int main(){

    float temp;
    bool quente, frio, agradavel;

    cout << "Digite a temperatura atual: ";
    cin >> temp;

    agradavel = temp >= 18 && temp <= 28;
    quente = temp > 28;
    frio = temp < 18;

    if(frio){
        cout << "Esta frio."<< endl;
    }
    else if(agradavel){
        cout << "Esta agradavel." << endl;
    }
    else{
        cout << "Esta quente." << endl;
    }
    
    return 0;
}