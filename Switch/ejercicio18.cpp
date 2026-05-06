#include <iostream>
using namespace std;

int main()
{
    int opcion;
    float amount, resultado;

    cout << "please, enter the amount you want to convert: " << endl;
    cin >> amount;

    cout << "seleccione una opcion" << endl;
    cout << "1.convertir cm a pulgadas" << endl;
    cout << "2.convertir metros a pies" << endl;
    cout << "3.convertir km a millas" << endl;
    cin >> opcion;

    if (opcion < 1 || opcion > 3)
    {
        cout << "Opcion no valida. Por favor, elija una opcion del 1 al 3." << endl;
        return 1; // Salida temprana del programa si la opción no es válida
    }

    switch (opcion)
    {

    case 1:
        if (opcion == 1)
        {
            resultado = amount * 1.32;
            cout << amount << "cm en pulgadas es: " << resultado << endl;
            break;
        }

    case 2:
        if (opcion == 2)
        {
            resultado = amount * 1.83;
            cout << amount << "metros en pies es: " << resultado << endl;
            break;
        }

    case 3:
        if (opcion == 3)
        {
            resultado = amount * 3.4;
            cout << amount << "kilometros en millas son: " << resultado << endl;
            break;
        }

    default:
        cout << "Opción no válida. Por favor, elija una opción del 1 al 3." << endl;
        return 1;
    }
    return 0;
}