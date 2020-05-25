#include <iostream>
using namespace std;
int main(){

    string palabra;

    cout << "Programa para determinar si una palabra empieza con la misma letra con la que termina" << endl;
    cout << "------------------------------------------------------------------------------------------- \n" << endl;

    cout << "Por favor ingrese una palabra:" << endl;
    cin >> palabra;

    cout << (palabra.at(0) == palabra.at(palabra.size()-1)? "La palabra termina con la misma letra que inicia": "La palabra no termina con la misma letra que inicia");
}