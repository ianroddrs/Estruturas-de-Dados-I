#include <iostream>
using namespace std;

bool digito(char c){
    if(c>='0' && c<='9'){
        return true;
    }
    return false;
}

char muda(char c){
     if(c>=97 && c<=122){
        return c-32;
     }
     else if (c>=65 && c<= 90){
        return c+32;
     }
     
}


int main(){
    char c = 0;
    cout << "caracter " << c << ", decimal " << (int) c << endl;

    cout << digito(c) << endl; 

    return 0;
}