#include<iostream>
/*Factorial de un Número
Pide un número al usuario y calcula su factorial.*/
using namespace std;

int main(){

  int numero=0,factorial=1;

  cout<<"Please enter a number to determine his factorial number"<<endl;
  cin >> numero;

  for (int i = 1; i <= numero; i++)
  {
    factorial*=i;
  
} 
 cout<<"Your factorial number is: "<<endl;
 cout<<factorial<<"!"<<endl;

return 0;
}