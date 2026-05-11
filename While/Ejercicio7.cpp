#include <iostream>
using namespace std;
int main()
{

    int num = 0;

    cout << "Ingrese el numero para iniciar cuenta regresiva: " << endl;
    cin >> num;

    while (num > 0)
    {
        cout << "Contador en while: " << num << endl;
        num--; // Incrementa el contador
    }

    return 0;
}
