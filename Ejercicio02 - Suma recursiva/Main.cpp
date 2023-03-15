// 2. Realice una función recursiva que sume los primeros n enteros positivos.

#include <iostream>
#include <locale>

// Prototipos
void pedirNumero(int& numero);
int  suma(int numero);
void mostrarResultado(int resultado);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    int numero{}, resultado{ 0 };

    pedirNumero(numero);
    resultado = suma(numero);
    mostrarResultado(resultado);

    return 0;
}

// Declaraciones
void pedirNumero(int& numero)
{
    do
    {
		std::cout << "Ingrese un número positivo: "; std::cin >> numero;
        if (numero < 0)
        {
            std::cout << "Error: el número no puede ser negativo.\n";
        }
    } while (numero < 0);
    std::cout << "\n";
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
    std::cout << "La suma total: " << resultado << "\n";
}