#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Ingrese el primer número: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo númeero: " << endl;
    cin >> num2;

    if (num1 = num2)
    {
        cout << "Los numeros son iguales";
    }
    else if (num1 < num2)
    {
        cout << "El primer número es menor que el segundo";
    }
    else if (num1>num2)
    {
        cout << "El segundo número es menor que el primero";
    }

    return 0;
}