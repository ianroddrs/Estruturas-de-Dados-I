#include <iostream>
#include <string>
using namespace std;

int main() {
   int n, i;
   bool ePrimo = true;
   string divisores = "";

   cout << "Digite um número: ";
   cin >> n;

   for (i = 2; i <= n / 2 ; i++) {
      if (n % i == 0) {
         divisores += to_string(i) + " ";
         ePrimo = false;
         break;
      }
   }

   if (ePrimo && n > 1){
      cout << n << " é um número primo" << endl;
   }    
   else if (n <= 1){
      cout << n << " não é primo" << endl;
   }
   else{
      cout << n << " não é um número primo. É divisível por: " << divisores << n << endl;
   }
   return 0;   
}