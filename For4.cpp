#include <iostream>
/*Tabla de Multiplicar
Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.*/
using namespace std;

int main()
{

    int numero = 0;

    cout << "Please enter a number between 1 and 10 to show his multiplication table" << endl;
    cin >> numero;

    if (numero >= 1 && numero <= 10) //If en dado caso el usuario no ingresa un valor valido entre 1 y 10.
    {
        cout << "Your multiplication table is: " << endl;
        for (int i = 1; i <= 10; i++) //Ira incrementado una unidad hasta llegar al 10. 
        {

            cout << numero << "x" << i << endl; //Una x para poder identificar la multiplicacion.
        }
    }
    else
    {
        cout << "Please enter a valir number between 1 and 10" << endl; //En dado caso el usuario no ingrese un valor valido. 
    }

    return 0;
}
