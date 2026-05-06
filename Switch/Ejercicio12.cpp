#include <iostream>
using namespace std;


int main (){
    int sc;

    cout << "ingrese su puntuacion:" <<endl;
    cin >> sc;

switch (sc)
{
case 1:
    if (sc == 1)
    {
    cout << "felicidades! esfuerzate un poco mas" <<endl;
    }
    break;

case 2:
    if (sc == 2)
    {
    cout << "felicidades! ganaste 2 estrellas, puedes hacerlo mejor " <<endl;
    }
    break;

case 3:
    if (sc == 3)
    {
    cout << "felicidades! ganaste 3 estrellas, vas por uen camino" <<endl;
    }
    break;

case 4:
    if (sc == 4)
    {
    cout << "felicidades! ganaste 4 estrellas, lo hiciste increible" <<endl;
    }
    break;

case 5:
    if (sc == 5)
    {
    cout << "felicidades! ganaste 5 estrellas, puntaje perfecto" <<endl;
    }
    break;

 default:
        cout << "Opción no válida. Por favor, elija una opción del 1 al 5." << endl;
        return 1;
}


    return 0;
}