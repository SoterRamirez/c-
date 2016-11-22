#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include<string.h>

#define Color_Green 10
#define Color_Red 12
#define Color_Def 15
#define Color_Yellow 14

using namespace std;
// Inicio de la clase Soter
class Soter {
public:
    int resp;
    void login();
    void leer();
    void creditos();
    void menu1();
};
void Soter::creditos(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
 
cout<<"      _____________________________________________________________________"<<endl;
cout<<"      |                                   ____________________            |"<<endl;
cout<<"      |                                   |                  |___________ |"<<endl;
cout<<"      |        XXXXXXXXXXXXXXXXXXX        | ISAI RAMIREZ     |   CORP    ||"<<endl;
cout<<"      |        SISTEMA DE EVILCORP        | CAMPERO          |   EVIL    ||"<<endl;
cout<<"      |        XXXXXXXXXXXXXXXXXXX        | JUAN FELIPE      |  COMPANY  ||"<<endl;
cout<<"      |  ______________XXX________________| RENTANA LADINO   |  BUSINESS ||"<<endl;
cout<<"      |  |  _    _     XXX   _    _    _  |    __  ____ _    |   ______  ||"<<endl;
cout<<"      |  | | |  | |  _____  | |  | |  | | |       ______     |   |  _ |  ||"<<endl;
cout<<"      |  | |_|  |_|  | | |  |_|  |_|  |_| |       |  | |     |   |  | |  ||"<<endl;
cout<<"      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}

void Soter::leer() 
{
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
void Soter::menu1() 
{
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
    cout<<"                                      (|     | ) "<<endl;
    cout<<"                                     /'\_   _/`\ "<<endl;
    cout<<"      (3)SALIR                       \___)=(___/  "<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
    cout<<"                                  GITHUB REPO utfg"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
    cout<<"      Ingrese Opcion : ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
}
void Soter::login(){
	 string nombre;
	 string pass;
	 int i;
	 for(i=1; i<4; i++){
	 system("cls");
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
	 cout << endl;
	 cout << "___________________________________________" << endl;
	 cout << "*    BIENVENIDO AL SISTEMA DE LOGIN MEXI  *  " << endl;
	 cout << "___________________________________________" << endl;
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
	 cout << endl;
	 cout << "Por favor ingrese su informacion de usuario" << endl;
	 cout << endl;
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
	 cout << "¿Nombre de usuario?" << endl;
	 cin >> nombre;
	 if(nombre == "admin"){//Nombre de usuario
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
	  cout << "Nombre de usuario correcto, por favor ingrese su contrasena:" << endl;
	  cin >> pass;
	  if(pass == "admin123"){//contrasena
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
	   cout << endl;
	   cout << "Contrasena correcta, bienvenido, sera redirigido a la aplicacion" << endl;
	   system("pause>null");
	   exit(0);
	 }
	  else
	   if(pass != "admin123"){//contrasena
	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
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
 



int main() {
	SetConsoleTitle("EQUIPO TROLL");
	int op,op2;
    Soter RC;
    RC.login();
    RC.creditos();
    RC.leer();
    cin>>op;
	switch(op){
		case 1:system("cls");
			do{
			RC.menu1();
			cin>>op2;
			switch(op2){
                                case 1: cout<<"\nIngrese codigo de linea:";
                                        break;
 
                                case 2: 
                                        break;
 
                                case 3: cout<<"\nIngrese codigo de Linea del Producto:";
                                        break; 
                                case 4: 
										break;
 
                                default: cout<<"\nINGRESE UNA OPCION VALIDA...\n"; break;
                            }
                            cout<<endl;
                            system("pause");  system("cls");
                        }while(op2!=4);
                        break;
        case 2:system("cls");
        do{
        	RC.menu1();
        	cin>>op2;    	
        	switch(op2){
        		case 1:
        			break;
        		case 2:
        			break;
        		case 3:
        			break;
        		default: "\n INGRESE UNA OPCION VALIDA...\n"; break;
			}
			cout<<endl;
			system("pause"); system("cls");
        	}while(op2!=3);
                break;
        case 3: system("cls");
		cout<<"\nIngrese codigo de Linea del Producto:";
                break;

        case 4: system("cls");
        RC.creditos();
                break;

        case 5: break;

        default: cout<<"\nINGRESE UNA OPCION VALIDA...\n"; break;

	}
   return 0;
}
