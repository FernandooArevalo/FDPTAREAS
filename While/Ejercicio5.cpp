#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int par = 0;

    cout << "ingrese un numero " << endl;
    cin >> num;

    while ((par + 1) < num)
    {
        par = (par + 2);
        cout << "los numeros pares antes de su numero son: " << endl;
        cout << par << endl;
    }

    return 0;
}