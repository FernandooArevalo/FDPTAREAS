#include <iostream> 
using namespace std;

int main(){
    int speed,  multa1=50, multa2=100, wallet=200;

    cout << "ingrese velocidad";
    cin >> speed; 

    if 
    
    
    
    
    (speed < 60)
    {
        cout << "Velocidad permitida" << endl;
        return 1; // Salida temprana del programa si la opción no es válida
    }

    else if (speed >60 && speed <80)
    {
        cout << "excedio el limite de velocidad" <<endl;
        cout << "se aplico multa 1, su billetera ahora tiene: " <<(wallet-multa1) <<endl; 
        return 1;
    }

    else (speed <80)
    {
        cout << "excedio el limite de velocidad" <<endl;
        cout << "se aplico multa 2, su billetera ahora tiene: " <<(wallet-multa2) <<endl;
        return 1; 
    }

    




    return 0; 
}