#include <iostream>
using namespace std;
int main (){
   int numero, cont = 0;
   bool continuar;
   do {
      continuar = false;
      cin.clear();
      if(cont > 0) cin.ignore(1024, '\n');
      cout << "Introduce un numero: ";
      cin >> numero;
      cont++;
      if(cin.fail() && cin.rdstate()){
         cout << "NO ES UN NUMERO" << endl;
         continuar = true;
      }
   } while (continuar);
}
