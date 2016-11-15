# c++
[![C|++](http://www.accelerance.com/hs-fs/hubfs/Technology_logos/c_logo.png?t=1476454969933&width=50&name=c_logo.png)](https://soterramirez.blogspot.mx/)

Login
---
Donde están las instrucciones if y else podrán cambiar el usuario ***"admin"*** y la contraseña ***"admin123"*** por las que ustedes deseen.  

```sh
if(nombre == "admin"){//<-- Aqui
  cout << "Nombre de usuario correcto, por favor ingrese su contrasena:" << endl;
  cin >> pass;
  if(pass == "admin123"){//<-- Aqui
   cout << endl;
   cout << "Contrasena correcta, bienvenido, sera redirigido a la aplicacion" << endl;
   system("pause>null");
   exit(0);
 }
  else
   if(pass != "admin123"){//<-- Aqui
    cout << "Contrasena incorrecta, por favor ingrese un usuario y contrasena valida" << endl;
    system("pause>null");
   }
 }
 else
  if(nombre != "admin"){//<-- Aqui
    cout << "Nombre de usuario incorrecto, por favor ingrese su nombre de usuario nuevamente" << endl;
  system("pause>null");
 }
```

El contador de intentos nos asegura que el usuario se puede equivocar solo 3 veces, y de hacerlo, la aplicación se cerrará exit(0).

```sh
if(i > 0){
    cout << endl;
    cout << "Ha realizado " << i << "/3 intentos" << endl;
    cout << endl;
    system("pause>null");
   }
 if(i == 3){//<-- Aqui
   cout << endl;
   cout << "Ha realizado 3 intentos, por seguridad el programa se cerrara..." << endl;
   system("pause>null");
   exit(0);
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