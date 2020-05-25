#include <iostream>
using namespace std;
int main(){

    string palabra, mayorOMenor;
    int cantidad;

    cout << "Programa para determinar la longitud de una palabra" << endl;
    cout << "--------------------------------------------------------- \n" << endl;

    cout << "Por favor ingrese una palabra:" << endl;
    cin >> palabra;

    if(!palabra.empty()){

        cantidad = palabra.size();
        if(cantidad > 10){
            mayorOMenor = "La palabra tiene mas de 10 caracteres";
        }else if(cantidad < 10){
            mayorOMenor = "La palabra tiene menos de 10 caracteres";
        }else{
            mayorOMenor = "La palabra tiene 10 caracteres";
        }
        

        cout << mayorOMenor  << (cantidad % 2 == 0?" y la cantidad de sus caracteres es par":" y la cantidad de sus caracteres es impar");
    }else{

        cout << "Ingrese una palabra valida";

    }

    return 0;
}