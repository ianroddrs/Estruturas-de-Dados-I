#include <iostream>
using namespace std;

int main(){
    for(int i = -50; i <= 50; i++){
        if(i % 2 == 1 || i % 2 == -1){
            cout << i << endl;
        }
    }
}