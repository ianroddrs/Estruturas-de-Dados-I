#include <iostream>
#include <string>
using namespace std;

int main() {
   int n, i, count = 0;
   string divisores = "";
   cout << "Digite um número inteiro positivo: ";
   cin >> n;

   for (i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
         divisores += to_string(i) + " ";
         count++;
      }
   }

   if (count == 0 && n != 1)
      cout << n << " é um número primo" << endl;
   else if (n == 1)
      cout << "1 não é nem primo nem composto" << endl;
   else
      cout << n << " não é um número primo. É divisível por: " << divisores << endl;

   return 0;
}