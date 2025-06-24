#include<iostream>
/*Suma de Números Pares
Solicita un número N al usuario y calcula la suma de los números pares desde 1 hasta N.*/
using namespace std;

int main(){
 
    int numero=0,suma=0;
    cout<<"Please enter a number to make a sum of the even numbers before it"<<endl;
    cin>>numero;

    
   for (int i = 1; i < numero; i++)
   {
    if (i % 2 ==0)
    {
        suma+= i;
        
        
    }
   
   }

    cout<<"The sum of the numbers before "<<numero<<" is "<<suma<<endl;

    return 0;
}
