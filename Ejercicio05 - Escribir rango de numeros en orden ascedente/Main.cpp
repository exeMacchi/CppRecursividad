/*
    5. Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva en la 
       salida est�ndar los n�meros del ini al fin. Escriba una versi�n que 
       escriba los n�meros en orden ascendente.
*/

#include <iostream>
#include <locale>

// Prototipos
void pedirNumeros(int& inicio, int& fin);
void escribeNumeros(int inicio, int fin);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    int inicio{}, fin{};

    pedirNumeros(inicio, fin);

    std::cout << "Secuencia: ";
    escribeNumeros(inicio, fin);

    return 0;
}

// Declaraciones
void pedirNumeros(int& inicio, int& fin)
{
    std::cout << "Ingrese el primer n�mero: "; std::cin >> inicio;
    do
    {
        std::cout << "Ingrese el segundo n�mero: "; std::cin >> fin;
        if (fin <= inicio)
        {
            std::cout << "Error: el segundo n�mero no puede ser menor o igual "
                      << "que el primero." << "\n";
        }

    } while (fin <= inicio);
    std::cout << "\n";
}

void escribeNumeros(int inicio, int fin)
{
    if (inicio == fin)
    {
        std::cout << fin << "." << "\n";
    }
    else
    {
        std::cout << inicio << ", ";
        escribeNumeros((inicio + 1), fin);
    }
}