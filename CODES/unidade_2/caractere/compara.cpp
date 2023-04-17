#include <iostream>
#include <string.h>
using namespace std;
int compara(char* s1, char* s2){
    int i;
    for(i=0; s1[i] != '\0' && s2[i] != '\0'; i++){
        if(s1[i] < s2[i]){
            return -1;
        }
        if(s1[i] > s2[i]){
            return 1;
        }
    }
    if(s1[i] == s2[i]){
        return 0;
    }else if(s2[i] != '\0'){
        return -1;
    }else{
        return 1;
    }
}

int main(){
    char palavra1[81];
    char palavra2[81];

    cin.get(palavra1, 81);
    cin.ignore();

    cin.get(palavra2, 81);
    cin.ignore();

    cout << compara(palavra1, palavra2) << endl;
    cout << strcmp(palavra1, palavra2) << endl;
}