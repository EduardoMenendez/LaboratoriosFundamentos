#include <iostream>
using namespace std;

int main(){

    int numero;

    cout << "Programa para determinar si un numero es par o impar" << endl;
    cout << "----------------------------------------------------------- \n" << endl;


    cout << "Por favor ingrese el numero a considerar:" << endl;
    cin >> numero;

    cout << "El numero " << numero << (numero%2==0 ? " es par " : " es impar");

    return 0;
    
}