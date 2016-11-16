# C++
[![C|++](http://www.accelerance.com/hs-fs/hubfs/Technology_logos/c_logo.png?t=1476454969933&width=50&name=c_logo.png)](https://soterramirez.blogspot.mx/)

Validar datos entrados por el usuario en C++
---
Validación de tipos de datos sin usar aritmética binaria en c++.  
Para poder hacer la comprobación efectivamente es necesario el uso de la librería ***"iostream"***. El estado de flujo se puede comprobar por medio de los bits de la clase ***"ios"***. La cual es la  ***clase base de istream, ostream e iostream,*** estás son las más utilizadas para el flujo de Entrada y Salida en C++.

```sh
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
```

La instrucción ***cin.clear();*** borra y establece el flujo a ***goodbit***; Cuando se establece gootbit todos los flags de error son limpiados.
```sh
do {
      continuar = false;
      cin.clear();
```
La instrucción ***cin.ignore(1024, '\n')*** Ignorar hasta 1024 caractéres introducidos hasta encontrar un ENTER o viceversa, lo que primero ocurra.  
```sh
if(cont > 0) cin.ignore(1024, '\n');
```
La instrucción ***cin.fail()*** retorna true si una operación de flujo a fallado y es posiblie realizar una recuperación de esos errores.
```sh
if(cin.fail() && cin.rdstate()){
   //Code
}
```
La instrucción ***cin.rdstate()*** retorna true si el estado de flujo es correcto.
```sh
if(cin.fail() && cin.rdstate()){
   //Code
}
```


License
----
The MIT License (MIT)
Copyright (c) <2016> < Isaí Ramirez Campero >

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


**#HAPPYHACKING!!**

**Free Software**