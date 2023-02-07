// 2. Realice una función recursiva que sume los primeros n enteros positivos.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//PROTOTIPOS
void pedirNumero(int& numero);
int suma(int numero);
void mostrarResultado(int resultado);


//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");
    int numero{}, resultado{ 0 };

    pedirNumero(numero);
    resultado = suma(numero);
    mostrarResultado(resultado);


    return 0;
}

//FUNCIONES

void pedirNumero(int& numero)
{
    cout << "Ingrese un número positivo: "; cin >> numero;
    while (numero < 0)
    {
        cout << "Error: por favor, ingrese un número positivo: ";
        cin >> numero;
    }
    cout << endl;
}

int suma(int numero)
{
    if (numero == 0)
    {
        numero = 0;
    }
    else
    {
        numero = numero + suma(numero - 1);
    }
    return numero;
}

void mostrarResultado(int resultado)
{
    cout << "La suma total: " << resultado << endl;
}
