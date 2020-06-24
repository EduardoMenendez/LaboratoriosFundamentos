#include <iostream>
using namespace std;
int main(){

    int numero;

    cout << "Programa para determinar si un numero es positivo, negativo o cero" << endl;
    cout << "---------------------------------------------------------------------------- \n" << endl;

    cout << "Por favor ingrese el numero a considerar:" << endl;
    cin >> numero;

    if(numero > 0){
        cout << "El numero "<< numero << " es un numero positivo";
    }else if(numero < 0){
        cout << "El numero "<< numero << " es un numero negativo";
    }else{
        cout << "El numero es el numero cero";
    }

    return 0;
    
}