/* 
 * File:   main.cpp
 * Author: 
 * 
 * Created on 2 de noviembre de 2016, 16:10 PM
 */
#include<iostream>
#define MAX 30

using namespace std;
// Inicio de la clase Soter
class Soter {
public:
    int len, arr[30];
    void leer();
    void eliminar_dup();
    void mostrar();
};
void Soter::leer() {
    len = 0;
    int n;
    do {
    	cout << "**************************************************";
		cout << "\n";
        cout << "\nIntroduzca la cantidad de valores (entre 1 y 30)" << endl;
        cin >> n;
        if(n < 1 || n > MAX)
            cout << "\n***Error***" << endl;
        else
            len = n;
    } while(n < 1 || n > MAX);

    cout << "\n***Escriba los valores***" << endl;

    for(int i=0; i<len; i++)
        cin >> arr[i];
}
void Soter::eliminar_dup() {
    for(int i=0; i<len-1; i++)
        for(int j=i+1; j<len; j++) {
            if(arr[i] == arr[j]) {
                for(int k=j;k<len-1;k++)
                   swap(arr[k], arr[k+1]);
                len--;
                j--;
            }
      }
}
void Soter::mostrar() {
	cout << "**************************************************";
	cout << "\n";
    for(int i=0;i<len;i++)
        cout << arr[i] << "- \n"[i==len-1];
        cout << "\n**************************************************";
		cout << "\n";
}
int main() {
    Soter RC;
    RC.leer();
    RC.eliminar_dup();
    RC.mostrar();
    return 0;
}
