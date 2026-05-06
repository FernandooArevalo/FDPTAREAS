#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, opcion;

    cout << "ingrese el primer numero: ";
    cin >> a;

    cout << "ingrese el segundo numero: ";
    cin >> b;

    cout << "Seleccione el numero de la operacion que desea realizar:  " << endl;
    cout << "1.suma" << endl;
    cout << "2.resta" << endl;
    cout << "3.multiplicacion" << endl;
    cout << "4.division" << endl;
    cout << "5.potencia" << endl;
    cout << "6.modulo" << endl;
    cin >> opcion;

    if (opcion < 1 || opcion > 6)
    {
        cout << "Opción no válida. Por favor, elija una opción del 1 al 6." << endl;
        return 1; // Salida temprana del programa si la opción no es válida
    }

    switch (opcion)
    {
    case 1:
        if (opcion == 1)
        {
            cout << "la suma de los numeros es: " << (a + b) << endl;
        }
        break;

    case 2:
        if (opcion == 2)
        {
            cout << "la resta de los numeros es: " << (a - b) << endl;
        }
        break;

    case 3:
        if (opcion == 3)
        {
            cout << "el producto de los numeros es: " << (a * b) << endl;
        }

    case 4:
        if (opcion == 4)
        {
            cout << "la division de los numeros da: " << (a / b) << endl;
        }
        break;

    case 5:
        if (opcion == 5)
        {
            cout << "la potencia del primer numero al : " << pow(a, b) << endl;
        }
        break;

    case 6:
        if (opcion == 6)
        {
            cout << "el modulo de los numeros es: " << fmod(a, b) << endl;
        }
        break;

        break;

    default:
        cout << "Opción no válida. Por favor, elija una opción del 1 al 6." << endl;
        return 1;
    }

    return 0;
}