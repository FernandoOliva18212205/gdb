# 2.6 Ejercitar y aplicar GDB (debugger) en su QEMU-Raspbian virtual

En este trabajo vamos a practicar el uso del GDB para comprender como se utiliza.

Primero creamos el codigo del programa.

![](https://github.com/FernandoOliva18212205/gdb/blob/main/Imagenes/imagen1archivo.PNG)

Ahora vamos a la consola y lo preparamos para correrlo.

![](https://github.com/FernandoOliva18212205/gdb/blob/main/Imagenes/imagen2codigo.PNG)
![](https://github.com/FernandoOliva18212205/gdb/blob/main/Imagenes/imagen3mascodigo.PNG)

Ahora usamos el gdb para comprobar si funciono.

![](https://github.com/FernandoOliva18212205/gdb/blob/main/Imagenes/imagen4masymascodigo.PNG)
![](https://github.com/FernandoOliva18212205/gdb/blob/main/Imagenes/imagen5codigoooo.PNG)

Ahora podemos correr en "disas" y luego "stepi"

![](https://github.com/FernandoOliva18212205/gdb/blob/main/Imagenes/imagen8disas.PNG)

Ahora lo probaremos con un codigo de C++.

#include <iostream>
#include <string>
using namespace std;

int main() {

int m;
for (int i = 1; i <= 12; i++)
{
    for (int b = 1; b <= 12; b++)
    {
        m = i * b;

        string resultado = to_string(i) + " x " + to_string(b) + " = " + to_string(m);

        cout << resultado << endl;
        
    }
    cout << "-----------------------------------\n" << endl;
    
}
}

arm

![](https://github.com/FernandoOliva18212205/gdb/blob/main/Imagenes/imagen6codigocpp.PNG)

Y de igual forma vemos los resultados.

![](https://github.com/FernandoOliva18212205/gdb/blob/main/Imagenes/imagen7resultadoscpp.PNG)
