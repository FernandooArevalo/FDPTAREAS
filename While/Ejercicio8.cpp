#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int sumanota = 0;
    int count = 0;
    int promedio = 0;

    while (num >= 0)
    {
        cout << "ingrese un numero " << endl;
        cin >> num;

        if (num > 0)
        {
            sumanota += num;
            count++;
            promedio = (sumanota / count);
        }
    }
    cout << "promedio es : " << promedio << endl;

    return 0;
}