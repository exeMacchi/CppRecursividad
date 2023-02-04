// 4. Escriba una función recursiva que calcule un número elevado a una potencia entera mayor o igual que cero : x ^ y.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//PROTOTIPOS
void pedirDatos(int&, int&);
int potencia(int x, int y, int contador);
void mostrarResultado(int resultado);

//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");
    int x{}, y{}, contador{ 1 }, resultado{ 0 };

    pedirDatos(x, y);
    resultado = potencia(x, y, contador);
    mostrarResultado(resultado);

    return 0;
}


//FUNCIONES

void pedirDatos(int& x, int& y)
{
    cout << "Ingrese el número: "; cin >> x;
    cout << "Ingrese el exponente: "; cin >> y;
    while (y < 0)
    {
        cout << "Error: por favor, increse un exponente positivo: "; cin >> y;
    }
    cout << endl;
}

int potencia(int x, int y, int contador)
{
    int resultado{ 0 };

    if (y == 0)
    {
        resultado = 1;
        return resultado;
    }
    else if (y == 1)
    {
        resultado = x;
        return resultado;
    }


    if (contador == y - 1)
    {
        resultado = x * x;
    }
    else
    {
        contador++;
        resultado = x * potencia(x, y, contador);
    }

    return resultado;
}

void mostrarResultado(int resultado)
{
    cout << "El resultado es: " << resultado << endl;
}
