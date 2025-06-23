#include<iostream>
/*Cuenta Regresiva
Imprime una cuenta regresiva desde 10 hasta 0.*/
using namespace std;

int main(){
    
    int numero=0;
    cout<<"Enter a number between 1 and 10 to print the number backwards"<<endl;
    cin>>numero;
    if (numero >=0 && numero <=10)
    {
        for (int i = numero; i >=0; i--)
    {   
        
        cout<<i<<endl;
    }

    return 0;
    }else{
       cout<<"Please enter a valid number between 1 and 10"<<endl;

    }
    
}