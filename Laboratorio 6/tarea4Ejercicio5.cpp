#include <iostream>
#include <vector>

using namespace std;

vector<int> llenarVector(){
    //Vector para guardar todos los numeros impares
    vector<int> numeros;
    //for que llena el vector y evalua cuantos numeros tiene en el, al tener 100 termina el ciclo
    for(size_t i = 1; numeros.size() < 100; i += 2){
        numeros.push_back(i);
    }
    return numeros;
}

int main(){
    //Variables
    vector<int> numeros;

    //Mensaje de bienvenida
    cout << "Programa que muestra 100 numeros impares a partir del 1" << endl;
    cout << "--------------------------------------------------------------------\n" << endl;

    //LLamado a la funcion para obtener los numeros
    numeros = llenarVector();
    //For para imprimir en pantalla los numeros de forma descendente
    for (int i = 99; i > -1; i--)
    {
        cout << numeros[i] << endl;
    }
    
}