#include <iostream>
using namespace std;

int main()
{
    int num;  

    cout << "cuantos numeros de la serie de fibonacci desea que se muestren?" << endl;
    cin >> num;

    int num1 = 0;
    int num2 = 1;
    int count = 0;  
    while (count < num)  
    {
        cout << num1 << endl;  
        
        int nxtnum = num1 + num2;  
        num1 = num2;    
        num2 = nxtnum;   
        count++;         
    }

    return 0;
}