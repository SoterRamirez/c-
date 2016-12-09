# ARREGLO UNIDIMENSIONAL

[![C|++](http://www.accelerance.com/hs-fs/hubfs/Technology_logos/c_logo.png?t=1476454969933&width=50&name=c_logo.png)](https://soterramirez.blogspot.mx/)

Teoria
----
Los arreglos unidimensionales, son estructuras de datos típicamente estáticas en la mayoria de los lenguajes de programación, usan posiciones de memoria que están contiguas y que se indexan de forma numérica.

En C++ los arreglos se declaran de la siguiente forma:

>Tipodedato nombredelarreglo[tamañodelarreglo];


Como podemos ver, es similar a declarar una variable convencional, solo que se coloca entre corchetes el número de posiciones del arreglo, por lo que todas las posiciones serán del mismo tipo.

Al trabajar cada noche arreglos hacemos referencia a cada posición del arreglo a través de su número de índice, el cual comienza a partir del cero, de tal forma que para almacenar el número 10 en la posición 6 de un arreglo escribiriamos:

x[5]=10;

Problema
----

Realizar una clase que contenga un arreglo unidimensional de 30 números enteros (posiblemente repetidos):

  - Primer método ha de grabar datos en el arreglo
  - Segundo método ha de excluir los repetidos (obtenga como salida ese mismo arreglo pero sin números repetidos)
  - Tercer método ha de mostrar el arreglo sin números repetidos
 
Incluir un método constructor para inicializar el arreglo con un valor de ceros.

Explicacion del uso swap
----

```sh
void Soter::eliminar_dup() {

    for(int i=0; i<len-1; i++)
        for(int j=i+1; j<len; j++) {
            ///Si encontramos un duplicado
            if(arr[i] == arr[j]) {

                ///Lo vamos intercambiando hasta que quede al final
                for(int k=j;k<len-1;k++)
                   swap(arr[k], arr[k+1]);

                ///Disminuimos la longitud en 1, lo que significa
                ///que se elimina un elemento
                len--;

                ///Disminuimos a j para que se quede en el mismo
                ///lugar (vease que el elemento que estaba en esa
                ///posicion fue eliminado, si no disminuimos j en 1
                ///nos saltamos un valor por analizar).
                j--;
            }
      }
}
```

Otro metodo para eliminar números repetidos:

**Contenedor std::set**

`std::set` es un contenedor de la STL que almacena una lista de elementos ordenados y sin duplicados. Su uso es bastante simple:
```sh
    std::set<int> numeros;
    for( int i=0; i<10; i++ )
    {
      int n;
      std::cout << "Introduce un número: ";
      std::cin >> n;
      numeros.insert(n);
    }
    
    std::cout << "Lista de números sin repeticiones:\n";
    for( int numero : numeros )
      std::cout << numero << '\n';
```
**std::vector + std::sort + std::unique**

`std::vector` es el contenedor por excelencia de la STL. Almacena una lista de elementos sin ordenar, admite duplicados y, su gran ventaja, todos los elementos están en posiciones contiguas de memoria, por lo que su acceso es muy rápido al aprovechar las bondades de la caché.

`std::sort` es una utilidad de la STL que permite ordenar un rango de valores.

`std::unique` es una utilidad de la STL que dado un rango de elementos (iteradores de inicio y de final de rango), elimina todas las apariciones contiguas de elementos repetidos. Bueno, realmente no los elimina... los mueve al final del rango. Finalmente te devuelve un iterador al primer elemento duplicado.
```sh
    std::vector<int> numeros;
    for( int i=0; i<10; i++ )
    {
      int n;
      std::cout << "Introduce un número: ";
      std::cin >> n;
      numeros.push_back(n);
    }
    
    // Primero ordenamos la secuencia
    std::sort(numeros.begin(),numeros.end());

    // Despues eliminamos los duplicados
    numeros.erase(std::unique(numeros.begin(),numeros.end()),numeros.end());

    std::cout << "Lista de números sin repeticiones:\n";
    for( int numero : numeros )
      std::cout << numero << '\n';
```
Aunque pueda parecer un método más engorroso, este mecanismo es bastante más rápido que el anterior ante secuencias bastante largas... cuanto más largas mayor diferencia de velocidad.

**Contenedor std::set + std::tie**

Los dos métodos anteriores presentan un inconveniente y es que ordenan la secuencia inicial. Este método está pensado para mantener la secuencia original inalterada pero sin duplicados.

Si revisas la ayuda de `std::set` podrás observar que el método `insert()` devuelve un `std::pair`, que no es más que un objeto que permite almacenar una pareja de valores. El primer valor es un iterador al elemento insertado y el segundo valor es un booleano que indica si el elemento insertado es nuevo en el contenedor o si ya existía.

`std::tie` es una función que permite _explotar_ ese objeto `std::pair` para recuperar sus elementos individuales. La gran ventaja de este método es que permite descartar valores que no nos interesan. Para tu caso particular únicamente te interesa el segundo valor, el booleano: si el mismo es true quiere decir que el elemento no existía en el contenedor.

La idea es combinar `std::set` y `std::tie` para identificar los elementos duplicados y eliminarlos sin necesidad de reorganizar el contenedor original:
```sh
    std::vector<int> entrada{ 1,2,1,6,4,2,2,2,3 };
    std::vector<int> salida;
    std::set<int> detector;
    for( numero : entrada)
    {
      bool nuevo;
      std::tie(std::ignore,nuevo) = detector.insert(numero);
      if( nuevo )
        salida.push_back(numero); // solo se añaden los numeros no duplicados
    }
    
    for( int numero : salida)
      std::cout << numero << '\n';
```
`std::ignore` no es más que una especie de papelera, se usa para descartar valores que no necesitamos.

**Programando todo de cero**

Si tienes una secuencia y quieres eliminar los duplicados puedes optar por recorrer la secuencia de principio a fin y en cada iteración comparar el elemento actual con todos los anteriores... si hay coincidencia el elemento está duplicado y debes eliminarlo:
```sh
    std::vector<int> entrada{ 1,2,1,6,4,2,2,2,3 };
    std::vector<int> salida;
    
    for( auto it = entrada.begin(); it != entrada.end(); ++it )
    {
      bool duplicado = false;
      for( auto it2 = entrada.begin(); it2 != it; ++it2 )
      {
        if( *it == *it2 )
        {
          duplicado = true;
          break;
        }
      }
    
      if( !duplicado )
        salida.push_back(*it);
    }
    
    for( int numero : salida)
      std::cout << numero << '\n';
```
**Simplificando el ejemplo anterior**

También podemos darle un pequeño repaso al ejemplo anterior para aprovechar un poco la STL:
```sh
    std::vector<int> entrada{ 1,2,1,6,4,2,2,2,3 };
    std::vector<int> salida;
    
    for( auto it = entrada.begin(); it != entrada.end(); ++it )
    {
      if( std::count(entrada.begin(),it,*it) == 0 )
        salida.push_back(*it);
    }
  
    for( int numero : salida)
      std::cout << numero << '\n';
```
`std::count` te indica el número de veces que un valor determinado se repite en un rango. En este caso iteramos desde el inicio de la lista hasta el número inmediatamente anterior al que estamos comprobando y el número a buscar es el número actual:
```sh
    //            (1)          (2)  (3)
    std::count(entrada.begin(), it, *it)
    
    // (1): inicio del rango = inicio de la lista
    // (2): fin del rango = posición actual (no se incluye en la búsqueda)
    // (3): valor a buscar = número actual
```


License
----
The MIT License (MIT)
Copyright (c) <2016> <Isaí Ramirez Campero>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


**HAPPYHACKING!!**
