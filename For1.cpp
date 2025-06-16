#include <iostream>
/*Contador del 1 al 10
Escribe un programa que imprima los números del 1 al 10 utilizando un ciclo for.*/
using namespace std;

int main()
{

   cout << "Program to print the numbers between 1 and 10 :D" << endl;

   for (int i = 0; i <= 10; i++)
   {
      cout << i << endl; /*Funcion for para poder crear un bucle entre el primer numero y que el siguiente sea la continuedad del anterio
     usando i++ para poder incrementar de uno en uno, hasta llegar al 10.*/
   }

   return 0;
}