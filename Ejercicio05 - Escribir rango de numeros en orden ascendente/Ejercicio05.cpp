// 5. Escriba una función escribeNumeros(int ini, int fin) que devuelva en la salida estándar los números del ini al fin.
//    Escriba una versión que escriba los números en orden ascendente.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//PROTOTIPOS
void pedirNumeros(int& inicio, int& fin);
void escribeNumeros(int inicio, int fin);

//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");
    int inicio{}, fin{};

    pedirNumeros(inicio, fin);
    cout << "Secuencia: ";
    escribeNumeros(inicio, fin);

    return 0;
}

//FUNCIONES

void pedirNumeros(int& inicio, int& fin)
{
    cout << "Ingrese el primer número: "; cin >> inicio;
    cout << "Ingrese el segundo número: "; cin >> fin;

    while (fin <= inicio)
    {
        cout << "\nError: el segundo número debes ser mayor al primero.\n";
        cout << "Ingrese el segundo número: "; cin >> fin;
    }
    cout << endl;
}

void escribeNumeros(int inicio, int fin)
{
    if (inicio == fin)
    {
        cout << fin << "." << endl;
    }
    else
    {
        cout << inicio << ", ";
        escribeNumeros((inicio + 1), fin);
    }
}
