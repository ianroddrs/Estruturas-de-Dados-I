#include <iostream> 
#include <math.h>

using namespace std;

int main(){
    bool comprar;
    double preco, dinheiro;

    dinheiro = 200;
    preco = 150;

    comprar = (dinheiro >= preco);

    if(comprar){
        cout << "Você tem dinheiro suficiente. Compre!" << endl;
    }
    else{
        cout << "Você está duro! Sem chance!" << endl;
    }
    return 0;
}