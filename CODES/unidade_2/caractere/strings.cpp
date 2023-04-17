#include <iostream>

using namespace std;

char maiusculo(char c){
    if(c>='a' && c<='z'){
        c = c - 'a' + 'A';
    }
    return c;
}

int comprimento(char *c){
    int n = 0;
    for (int i = 0; c[i] !='\0'; i++){
        n++;
    }
    return n;
}

int main(){
    char str[4];
    str[0] = 'o';
    str[1] = 'l';
    str[2] = 'a';
    str[3] = '\0';
    cout << str << endl;

    char str2[] = "ola";
    cout << str2 << endl;

    char str3[] = {'o', 'l', 'a', '\0'};
    cout << str3 << endl;

    // comprimento() === strlen() === sizeof(str)
    for(int i = 0; i < comprimento(str3); i++){
        str3[i] = maiusculo(str3[i]);
    }
    
    cout << str3 << endl;
}