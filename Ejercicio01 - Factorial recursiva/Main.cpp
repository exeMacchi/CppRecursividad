// 1. Realizar una función factorial recursiva.

#include <iostream>
#include <locale>

// Prototipos
int  factorial(int numero);
void pedirNumero(int& numero);
void mostrarResultado(int resultado);


// Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    int numero{}, resultado{ 0 };

    pedirNumero(numero);
    resultado = factorial(numero);
    mostrarResultado(resultado);

    return 0;
}

// Declaraciones

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
    do
    {
	std::cout << "Ingrese un número: "; std::cin >> numero;
        if (numero < 0)
        {
            std::cout << "Error: el número factorial no puede ser negativo.\n";
        }

    } while (numero < 0);
    std::cout << "\n";
}

void mostrarResultado(int resultado)
{
    std::cout << "El factorial es: " << resultado << "\n";
}
