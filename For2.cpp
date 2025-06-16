#include <iostream>
/*Números Pares del 1 al 50
Muestra en pantalla los números pares del 1 al 50.*/
using namespace std;

int main()
{

  int evenumber;
  cout << "Program to know the even numbers between 1 and 50 :D" << endl;

  for (int i = 2; i <= 50; i += 2) /*Para este ejercicio hacemos dos variaciones, que comience de 2 para poder empezar desde un numero primo, y luego
     cuando vaya incrementando agregamos "i+=2" para que vaya incrementando de 2 en dos para que se cumpla la propiedad y como limite hasta el num 50*/
  {
    cout << i << endl;
  }

  return 0;
}