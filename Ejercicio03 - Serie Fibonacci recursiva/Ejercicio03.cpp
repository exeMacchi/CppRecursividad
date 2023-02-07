// 3. Realice una función recursiva para la serie Fibonacci.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//PROTOTIPOS
void fibonacci(int n1, int n2, int hastaX);

//MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");
    int n1{ 0 }, n2{ 1 };
    int hastaX;
    cout << "Último número aproximado en la serie Fibonacci:  "; cin >> hastaX;
    cout << endl;

    cout << "0 ";
    cout << n1 << " ";
    cout << n2 << " ";
    fibonacci(n1, n2, hastaX);

    return 0;
}

//FUNCIONES

void fibonacci(int n1, int n2, int hastaX)
{
    int n3 = n1 + n2;

    if (n3 == hastaX)
    {
        cout << n3 << endl;
    }
    else if (n3 > hastaX)
    {
        return;
    }
    else
    {
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
        fibonacci(n1, n2, hastaX);
    }
}
