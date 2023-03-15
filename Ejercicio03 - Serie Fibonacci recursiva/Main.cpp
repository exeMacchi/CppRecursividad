// 3. Realice una función recursiva para la serie Fibonacci.

#include <iostream>
#include <locale>

// Prototipos
int  pedirNumeroLimite();
void fibonacci(int n1, int n2, int hastaX);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    int n1{ 0 }, n2{ 1 };
    int hastaX{ pedirNumeroLimite() };

    fibonacci(n1, n2, hastaX);

    return 0;
}

// Declaraciones
int pedirNumeroLimite()
{
    int hastaX{};
    do
    {
	std::cout << "Cantidad de números de la serie Fibonacci:  "; 
        std::cin >> hastaX;
        if (hastaX < 0)
        {
            std::cout << "Error: el número no puede ser negativo.\n";
        }

    } while (hastaX < 0);
    std::cout << "\n";

    return hastaX;
}

void fibonacci(int n1, int n2, int hastaX)
{
    int n3{ n1 + n2 };

    if (hastaX == 0)
    {
        return;
    }
    else
    {
        std::cout << n1 << " ";
        n1 = n2;
        n2 = n3;
        fibonacci(n1, n2, (hastaX - 1));
    }
}
