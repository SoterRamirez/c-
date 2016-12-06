/*
	Name:SISTEMA DE MEXI
	Copyright: MIT
	Author: Isai Ramirez Campero,Juan Felipe Rentana Aladino 
	Date: 02/12/16 09:42
*/
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include<string.h>
//color
#define Color_Green 10
#define Color_Red 12
#define Color_Def 15
#define Color_Yellow 14
//Login
#define USER "c++"
#define PASS "java"
#define ENTER 13
#define BACKSPACE 8
using namespace std;
// Inicio de la clase Soter
class Soter {
public:
    int resp;
    void login();
    void leer();
    void creditos();
    void menu1();
    void linea();
    void mantenimiento();
};
void Soter::mantenimiento(){;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
	cout<<"         ,-.                    .'\ _"<<endl;
	cout<<"       ,'   \                 .'   (_)"<<endl;
	cout<<"      J     '-._ /\         .'     (,_)"<<endl;
	cout<<"     /  _  /   ,'# )_       _\_     (_)"<<endl;
	cout<<"    /  '_Y'   /_.,'  \     (  _')     \        DISCULPE"<<endl;
	cout<<"    | _ /   ,'\/  .   |    '.  __)     \       LAS  "<<endl;
	cout<<"    |'.Y   / # ) --'  /  _.-'  __)    .'     MOLESTIAS"<<endl;
	cout<<" _._\,'  ,'__,'      /  _\    / \   .'"<<endl;
	cout<<"   ,'-_ /           _.-' _\  /   \.'"<<endl;
	cout<<"  '    (_       _.-' _.-'  \/"<<endl;
	cout<<"         \  _.-' _.-' '-.     ./ "<<endl;
	cout<<"          -'  .-'        '-.-'/"<<endl;
	cout<<"          |   \o     _.-'####/"<<endl;
	cout<<"          |    \o_.-' \#####/"<<endl;
	cout<<"          |_.-#\       \###/"<<endl;
	cout<<"          ######\       \/'"<<endl;
	cout<<"          # #####`-.	"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
	cout<<"o     o                o                o          o                o"<<endl;     
	cout<<"8b   d8                8                                            8         "<<endl;
	cout<<"8`b d'8 .oPYo. odYo.  o8P .oPYo. odYo. o8 ooYoYo. o8 .oPYo. odYo.  o8P .oPYo."<<endl;
	cout<<"8 `o' 8 .oooo8 8' `8   8  8oooo8 8' `8  8 8' 8  8  8 8oooo8 8' `8   8  8    8 "<<endl;
	cout<<"8     8 8    8 8   8   8  8.     8   8  8 8  8  8  8 8.     8   8   8  8    8"<<endl;
	cout<<"8     8 `YooP8 8   8   8  `Yooo' 8   8  8 8  8  8  8 `Yooo' 8   8   8  `YooP'"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
};
void Soter::linea(){;
system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);	
	cout<<"                                ______________________________________"<<endl;
	cout<<"                               |     +Ciudad. Azteca                  |"<<endl;
	cout<<"                    _.---------|.--. Quinto Sol                       |"<<endl;
	cout<<"                 .-'  `       .'/  ``Josefa Ortiz                     |"<<endl;
	cout<<"              .-'           .' |    /Industrial                       |"<<endl;
	cout<<"           .-'         |   /   `.__//+UNITEC                          |"<<endl;
	cout<<"        .-'           _.--/        / A. Torres                        |"<<endl;
	cout<<"       |        _  .-'   /        /  Zodiaco                          |"<<endl;
	cout<<"       |     ._  \      /     `  /   Adolfo Lopez Mateos               |"<<endl;
	cout<<"       |        ` .    /     `  /    +Vocacional 3                    |"<<endl;
	cout<<"       |         \ \ '/        /     Valle de Ecatepec                  |"<<endl;
	cout<<"       |        - \  /        /|     Las Americas                      |"<<endl;
	cout<<"       |        '  .'        / |     +Hospital                        |"<<endl;
	cout<<"       |          '         |.'|     Aquiles Serdan                   |"<<endl;
	cout<<"       |                    |  |     Palomas                          |"<<endl;
	cout<<"       |                    |  |     19 de Septiembre                 |"<<endl;
	cout<<"       |                    |.'|     +Central de Abastos              |"<<endl;
	cout<<"       |                    /  |     Las torres                       |"<<endl;
	cout<<"       |                   /   |     Hidalgo                          |"<<endl;
	cout<<"       |                  /    |     Cuauhtemoc Sur                   |"<<endl;
	cout<<"       )                 /|    |     Esmeralda                        |"<<endl;
	cout<<"    .A/`-.              / |    |     +Ojo de Agua       + = Express   |"<<endl;
	cout<<"   AMMMA. `-._         / /     |______________________________________|"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
	cout<<"  AMMMMMMMMA. `-.     / /Lunes a Domingo de 4:30 a 0:30 Hrs   "<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
};
void Soter::creditos(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
cout<<"      _____________________________________________________________________"<<endl;
cout<<"      |                                   ____________________            |"<<endl;
cout<<"      |                                   |                  |___________ |"<<endl;
cout<<"      |        XXXXXXXXXXXXXXXXXXX        |*ISAI RAMIREZ     |    CORP   ||"<<endl;
cout<<"      |        SISTEMA DE EVILCORP        | CAMPERO          |    EVIL   ||"<<endl;
cout<<"      |        XXXXXXXXXXXXXXXXXXX        |*JUAN FELIPE      |  COMPANY  ||"<<endl;
cout<<"      |  ______________XXX________________| RENTANA LADINO   |  BUSINESS ||"<<endl;
cout<<"      |  |  _    _     XXX   _    _    _  |    __  ____ _    |   ______  ||"<<endl;
cout<<"      |  | | |  | |  _____  | |  | |  | | |       ______     |   |  _ |  ||"<<endl;
cout<<"      |  | |_|  |_|  | | |  |_|  |_|  |_| |       |  | |     |   |  | |  ||"<<endl;
cout<<"      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}
void Soter::leer(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
    cout<<"      ---------------------------------------------------------------------\n";
    cout<<"              <<<<<<<<<<  SISTEMA DE MEXIBUS MEXICABLE    >>>>>>>>>>";
    cout<<"\n      ---------------------------------------------------------------------\n\n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
    cout<<"                                         .--. "<<endl;
    cout<<"      (1)MEXIBUS                        |o_o | "<<endl;
    cout<<"      (2)MEXICABLE                      |:_/ | "<<endl;
    cout<<"      (3)ADMIN                         //   \ \ "<<endl;
    cout<<"      (4)CREDITOS                     (|     | ) "<<endl;
    cout<<"                                     /'\_   _/`\ "<<endl;
    cout<<"      (5)SALIR                       \___)=(___/  "<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
    cout<<"                                  GITHUB REPO utfg"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
    cout<<"      Ingrese Opcion : ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
}
void Soter::menu1(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
    cout<<"      ---------------------------------------------------------------------\n";
    cout<<"              <<<<<<<<<<MEXI-->>  RECARGA Y VENTA DE TARJETA>>>>>>>>>>";
    cout<<"\n      ---------------------------------------------------------------------\n\n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
    cout<<"                                         .--. "<<endl;
    cout<<"      (1)RECARGAR                       |o_o | "<<endl;
    cout<<"      (2)VENTA  DE                      |:_/ | "<<endl;
    cout<<"          TARJETA                      //   \ \ "<<endl;
    cout<<"      (3)MAPA                         (|     | ) "<<endl;
    cout<<"      (4)TORNIQUETE                  /'\_   _/`\ "<<endl;
    cout<<"      (5)SALIR                       \___)=(___/  "<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
    cout<<"                                  GITHUB REPO utfg"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
    cout<<"      Ingrese Opcion : ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
}
void Soter::login(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
	string usuario, password;
   int contador = 0;
   bool ingresa = false;
   do {
      system("cls");
      cout << "\t\t\tLOGIN DE USUARIO" << endl;
      cout << "\t\t\t----------------" << endl;
      cout << "\n\tUsuario: ";
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
      getline(cin, usuario);
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
      cout << "\tPassword: ";
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
      // getline(cin, password);
      char caracter;
      caracter = getch();
      password = "";
      while (caracter != ENTER) {
         if (caracter != BACKSPACE) {
          password.push_back(caracter);
          cout << "*";
   } else {
    if (password.length() > 0) {
     cout << "\b \b";
     password = password.substr(0, password.length() - 1);
    }
   }
   caracter = getch();
      }
      if (usuario == USER && password == PASS) {
         ingresa = true;
      } else {
      	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
         cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
         cin.get();
         contador++;
      }
   } while (ingresa == false && contador < 3);
 
   if (ingresa == false) {
   	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
      cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
      cout << endl;
	  cout << "Ha realizado 3 intentos, por seguridad el programa se cerrara..." << endl;
	  system("pause>null");
	  exit(0);
   } else {
   	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
      cout << "\n\n\tBienvenido al sistema" << endl;
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
   }
}

int main (void){
    SetConsoleTitle("EQUIPO TROLL");
    int op,op2,dato;
    Soter RC;
    RC.login();
        do{ 
		RC.creditos();
        RC.leer();
            cin>>op;
            switch(op){
                /*-------------  MEXIBUS ---------------*/
                case 1: system("cls");
                        do{
                            RC.creditos();
                            RC.menu1();
                            cin>>op2;
 
                            switch(op2){
                                case 1: cout<<"\nIngrese codigo:";
                                        cin>>dato;
                                        break;
 
                                case 2: 
                                        break;
 
                                case 3: RC.linea();
                                        
                                        break;
 
                                case 4: cout<<"\nIngrese codigo:";
                                        
                                        break;
 
                                case 5: break;
 
                                default: cout<<"\nINGRESE UNA OPCION VALIDA...\n"; break;
 
                            }
                            cout<<endl;
                            system("pause");  system("cls");
                        }while(op2!=5);
                        break;
 
                /*-------------  MEXICABLE ---------------*/
                case 2: system("cls");
                        do{
                            RC.mantenimiento();
                            system("pause");  system("cls");
                        }while(op2!=5);
                        break;
 
                /*-------------  ADMIN ---------------
                case 3: system("cls");
                        do{
                            titulo();
                            menu4();
                            cin>>op2;
 
                            switch(op2){
                                case 1: 
                                        break;
 
                                case 2: cout<<"\n\n\t\t[  LISTAR VENTAS REALIZADAS ]\n";
                                        cout<<"\t\t------------------------\n";
                                       
                                        break;
                                case 3: cout<<"\n\n\t\t[    DETALLES DE VENTA    ]\n";
                                        cout<<"\t\t------------------------\n";
                                        break;
 
                                case 5: break;
 
                                default: cout<<"\nINGRESE UNA OPCION VALIDA...\n"; break;
 
                            }
                            cout<<endl;
                            system("pause");  system("cls");
                        }while(op2!=5);
                        break;*/
                /*-------------  CREDITOS ---------------*/
                case 4: system("cls");
                        RC.creditos();
                        break;               
                case 5: return 0;
                default: cout<<"\nINGRESE UNA OPCION VALIDA...\n"; break;
            }
            cout<<endl;
            system("pause");  system("cls");
        }while(op!=5);
        system("pause");
    return 0;
}
