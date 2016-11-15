/*
 * Login
 *
 *      Author: @SoterRamirez
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
void login();
int main(){
 login();
 return 0;
}
void login(){
 string nombre;
 string pass;
 int i;
 for(i=1; i<4; i++){
 system("cls");
 cout << endl;
 cout << "___________________________________________" << endl;
 cout << "*    BIENVENIDO AL SISTEMA DE LOGIN MEXI  *  " << endl;
 cout << "___________________________________________" << endl;
 cout << endl;
 cout << "Por favor ingrese su informacion de usuario" << endl;
 cout << endl;
 cout << "¿Nombre de usuario?" << endl;
 cin >> nombre;
 if(nombre == "admin"){//Nombre de usuario
  cout << "Nombre de usuario correcto, por favor ingrese su contrasena:" << endl;
  cin >> pass;
  if(pass == "admin123"){//contrasena
   cout << endl;
   cout << "Contrasena correcta, bienvenido, sera redirigido a la aplicacion" << endl;
   system("pause>null");
   exit(0);
 }
  else
   if(pass != "admin123"){//contrasena
    cout << "Contrasena incorrecta, por favor ingrese un usuario y contrasena valida" << endl;
    system("pause>null");
   }
 }
 else
  if(nombre != "admin"){//Nombre de usuario
    cout << "Nombre de usuario incorrecto, por favor ingrese su nombre de usuario nuevamente" << endl;
  system("pause>null");
 }

 if(i > 0){
    cout << endl;
    cout << "Ha realizado " << i << "/3 intentos" << endl;
    cout << endl;
    system("pause>null");
   }
 if(i == 3){
   cout << endl;
   cout << "Ha realizado 3 intentos, por seguridad el programa se cerrara..." << endl;
   system("pause>null");
   exit(0);
  }
 }
}
