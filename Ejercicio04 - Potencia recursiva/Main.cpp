/*
    4. Escriba una función recursiva que calcule un número elevado a una 
       potencia entera mayor o igual que cero : x ^ y.
*/

#include <iostream>
#include <locale>

// Prototipos
void pedirDatos(int&, int&);
int  potencia(int x, int y);
void mostrarResultado(int resultado);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    int x{}, y{}, resultado{ 0 };

    pedirDatos(x, y);
    resultado = potencia(x, y);
    mostrarResultado(resultado);

    return 0;
}

// Declaraciones
void pedirDatos(int& x, int& y)
{
    std::cout << "Ingrese la base: "; std::cin >> x;
    do
    {
	std::cout << "Ingrese el exponente: "; std::cin >> y;
        if (y < 0)
        {
            std::cout << "Error: el exponente no puede ser negativo.\n";
        }
    } while (y < 0);
    std::cout << "\n";
}

int potencia(int x, int y)
{
    int resultado{ 1 };

    if (y == 0)
    {
        return resultado;
    }
    else
    {
        resultado = x * potencia(x, (y - 1));
    }

    return resultado;
}

void mostrarResultado(int resultado)
{
    std::cout << "El resultado es: " << resultado << "\n";
}
