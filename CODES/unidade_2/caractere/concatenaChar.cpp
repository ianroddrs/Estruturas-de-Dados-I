#include <iostream>
#include <string.h>

using namespace std;

void concatena(char* dst, char* src){
    int i = 0;
    int j;

    while(dst[i] != '\0'){
        i++;
    }
    
    for (j=0; src[j] != '\0'; j++){
        dst[i] = src[j];
        i++;
    }
    
    dst[i] = '\0';
}

int main(){
    char city[81];
    char city2[81];
    char city3[81];

    cout << "cidade: ";
    cin.get(city, 81);
    cin.ignore();

    cout << "estado: ";
    cin.get(city2, 81);
    cin.ignore();

    cout << "país: ";
    cin.get(city3, 81);
    cin.ignore();

    concatena(city, city2);

    cout << city << endl;

}