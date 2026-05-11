#include <iostream>
using namespace std;

int main()
{
    int num;
    int total = 0;

    while (num != 0)
    {
        cout << "ingrese un numero " << endl;
        cin >> num;

        total = (total + num);
        cout << "la suma actual es " << total << endl;
    }

    cout << "total es : " << (total + num) << endl;
    return 0;
}