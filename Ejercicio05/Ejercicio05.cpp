// 5. Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva en la salida est�ndar los n�meros del ini al fin.
//    Escriba una versi�n que escriba los n�meros en orden ascendente.

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
    cout << "Ingrese el primer n�mero: "; cin >> inicio;
    cout << "Ingrese el segundo n�mero: "; cin >> fin;

    while (fin <= inicio)
    {
        cout << "\nError: el segundo n�mero debes ser mayor al primero.\n";
        cout << "Ingrese el segundo n�mero: "; cin >> fin;
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
