#include <iostream>
using namespace std;
int main(){

    int numero1, numero2;

    cout << "Programa para determinar si un numero es divisible entre otro" << endl;
    cout << "------------------------------------------------------------------ \n" << endl;

    cout << "Por favor ingrese el primer numero:" << endl;
    cin >> numero1;

    cout << "Por favor ingrese el segundo numero:" << endl;
    cin >> numero2;

    cout << "Los numeros "<< numero1 << " y " << numero2 << (numero1 % numero2 == 0 ? " son divisibles." : " no son divisibles.");
    return 0;

}