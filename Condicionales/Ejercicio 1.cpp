#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Ingrese su edad: " << endl;
    cin >> age;

    if (age > 18)
    {
        cout << "el usuario es mayor de edad";
    }
    else
    {
        cout << "El usuario esta chiquito";
    }

    return 0;
}