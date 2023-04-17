#include <iostream>
using namespace std;

void copia(char *dst, char *src){
    int i;
    for (i=0; src[i] != '\0'; i++){
        dst[i] = src[i];
    }dst[i] = '\0';
};

int main(){
    char str[100] = "ian";
    char dst[100];

    copia(str, dst);

    cout << dst << endl;

}