#include <iostream>
/*Suma de los Primeros N Números
Solicita un número N al usuario y calcula la suma de los primeros N números naturales.*/
using namespace std;
int main()
{
   int N, suma = 0;
   cout << "Enter a natural number please" << endl;
   cin >> N;

   for (int i = 1; i <= N; i++)
   {
      suma += N;                               // Lo que hice en este apartado es que defini primero suma para despues asignarla como la suma del valor que el usuario ingresara.
      cout << "Your sum is: " << suma << endl; // De aqui el numero se sumaria el numero de veces tambien segun el numero que el usuario ingresara.
   }

   return 0;
}