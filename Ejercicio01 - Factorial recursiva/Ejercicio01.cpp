// 1. Realizar una función factorial recursiva.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//PROTOTIPOS
int factorial(int numero);
void pedirNumero(int& numero);
void mostrarResultado(int resultado);


//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");
    int numero{}, resultado{ 0 };

    pedirNumero(numero);
    resultado = factorial(numero);
    mostrarResultado(resultado);

    return 0;
}

//FUNCIONES

int factorial(int numero)
{
    if (numero == 0)
    {
        numero = 1;
    }
    else
    {
        numero = numero * factorial(numero - 1);
    }
    return numero;
}

void pedirNumero(int& numero)
{
    cout << "Ingrese un número: "; cin >> numero;
    cout << endl;
}

void mostrarResultado(int resultado)
{
    cout << "El factorial es: " << resultado << endl;
}
