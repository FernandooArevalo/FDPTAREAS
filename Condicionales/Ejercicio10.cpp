/*Calculadora de Tarifa de envío
Pide el peso de un paquete y cobra $5 si pesa hasta 5kg, $10
si pesa entre 6kg y 10kg, y $15 si pesa mas de 10kg */

#include <iostream>
using namespace std;

int main()
{

    float peso;
    int cobro, billetera = 500;

    cout << "Hola, ingrese el valor del peso del paquete" << endl;
    cin >> peso;

    if (peso > 0 && peso <= 5)
    {
        int cobro = billetera - 5;
        cout << "SU COBRO SE REALIZO CORRECTAMENTE, SU NUEVO SALDO ES DE: " << cobro << endl;
    }

    else if (peso > 6 && peso <= 10)
    {
        int cobro = billetera - 10;
        cout << "SU COBRO SE REALIZO CORRECTAMENTE, SU NUEVO SALDO ES DE: " << cobro << endl;
    }

    else if (peso > 10)
    {
        int cobro = billetera - 15;
        cout << "SU COBRO SE REALIZO CORRECTAMENTE, SU NUEVO SALDO ES DE: " << cobro << endl;
    }

    else
    {
        cout << "datos incorrectos" << endl;
    }

    return 0;
}
