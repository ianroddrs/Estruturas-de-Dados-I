#include <iostream>
#include <string>
// using namespace std;

int main(){
    std::string name = "Escreva o nome completo:";
    std::cout << name << std::endl;

    getline(std::cin, name);

    std::cout << name << std::endl;
    return 0;
}