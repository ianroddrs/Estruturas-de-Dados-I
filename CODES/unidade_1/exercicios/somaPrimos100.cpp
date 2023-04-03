#include <iostream>

using namespace std;

int main(){
    int soma = 0, count = 0;
    for(int i = 1; i <= 100; i++){
        bool isPrime = true;

        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if (isPrime && i > 1){
            soma += i;
        }
    }

    cout << "soma: " << soma << endl;
}