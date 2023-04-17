#include <iostream>
#include <string.h>

using namespace std;

void reverse(char* s){ 
    int j = 0;
    for(int i = sizeof(s); i = 0; i--){
        char aux = s[i-1];
        s[i] = s[j];
        s[j] = aux;
        j++;
    }
    cout << s << endl;
}

// bool palindromo(char* s1, char* s2){
//     reverse(s1);

//     // for(int i; i != '\0' && s2[i] != '\0'; i++){
//     //     if(s1[i] == s2[i]){

//     //     }
//     // }
// }

int main(){
    char a[81];
    char b[81];

    cin.get(a, 81);
    cin.ignore();

    cin.get(b, 81);
    cin.ignore();

    cout << reverse(a) << endl;

    // cout << palindromo(a, b) << endl;
}