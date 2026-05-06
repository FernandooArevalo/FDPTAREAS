#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int opcion;

    cout << "Seleccione el numero del día de la semana que quiere saber:  " << endl;
    cout << "1.Lunes" << endl;
    cout << "2.Marrtes" << endl;
    cout << "3.miercoles" << endl;
    cout << "4.3jueves" << endl;
    cout << "5.viernes" << endl;
    cin >> opcion;

    if (opcion < 1 || opcion > 6)
    {
        cout << "Opción no válida. Por favor, elija una opción del 1 al 5." << endl;
        return 1; // Salida temprana del programa si la opción no es válida
    }

    switch (opcion)
    {
    case 1:
        if (opcion == 1)
        {
            cout << "El dia de hoy tiene clase de matematica a las 9:00am" << endl;
        }
        break;

    case 2:
        if (opcion == 2)
        {
            cout << "Hoy tiene clase de fundamentos de programación a las 10:00" << endl;
        }
        break;

    case 3:
        if (opcion == 3)
        {
            cout << "Hoy tiene clase de Fisica II a las 11:00am" << endl;
        }

    case 4:
        if (opcion == 4)
        {
            cout << "Hoy tiene clase de matematica a la 1:00pm"<< endl;
        }
        break;

    case 5:
        if (opcion == 5)
        {
            cout << "Hoy tiene discusión de precalculo a a las 8:00am"<< endl;
        }
        break;


    default:
        cout << "Opción no válida. Por favor, elija una opción del 1 al 5." << endl;
        return 1;
    }

    return 0;
}