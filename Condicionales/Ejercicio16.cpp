/* Simula u sistema de autenticación con un usuario
y contraseña, permiteindo hasta 3 intentos.
*/
#include <iostream>
using namespace std;

int main()
{
    string userquemado = "Fernando", pswrdquemada = "Arevalo";
    int intentos = 3;
    string user, pswrd;

    cout << "INGRESE SU USUARIO" << endl;
    cin >> user;

    cout << "INGRESE SU CONTRASENA" << endl;
    cin >> pswrd;

    if (userquemado == user && pswrdquemada == pswrd)
    {
        cout << " BIENVENIDO " << userquemado << endl;
    }
    else
    {
        if (intentos > 0)
        {
            intentos - 1;
            cout << "Acceso denegado, intente otra vez" <<endl;

            cout << "INGRESE SU USUARIO" << endl;
            cin >> user;

            cout << "INGRESE SU CONTRASENA" << endl;
            cin >> pswrd;
        }
        else
        {
            cout << "se ha quedado sin intentos";
        }
    }

    return 0;
}

//Miguel, hasta ahi se puede. Sirve pero no me has enseñado lo demas. 