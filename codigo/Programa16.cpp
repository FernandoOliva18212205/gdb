Programas Lenguajes de interfaz 

//Leal Oliva Carlos Fernando 18212205
//Programa 16.- imprimir la tabla de multiplicar hasta 12x12 

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
