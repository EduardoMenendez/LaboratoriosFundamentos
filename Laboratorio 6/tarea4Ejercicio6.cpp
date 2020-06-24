#include <iostream>
#include <vector>

using namespace std;

int main(){
    //Variables
    vector<int> numeros;
    int size, num, repeticiones = 0;

    //Mensaje de bienvenida
    cout << "Programa para definir cuantas veces se repite un numero en un arreglo" << endl;
    cout << "---------------------------------------------------------------------------\n" << endl;

    //Obtecion de la longitud del  arreglo, esta se valida con un bucle que evita que la longitud sea menor o igual a 0
    do{
        cout << "Ingrese el tamanio del arreglo" << endl;
        cin >> size;
        if(size <= 0){
            cout << "El valor ingresado es invalido\n" << endl;
        }
    }while(size <= 0);

    //Bucle para llenar el arreglo
    for (size_t i = 0; i < size; i++)
    {
        int valor;
        cout << "Ingrese el valor #"<<i+1<<" del arreglo" << endl;
        cin >> valor;
        numeros.push_back(valor);
    }

    //Obtecion al numero a evaluar 
    cout << "\nIngrese el numero que desea evaluar en el arreglo" << endl;
    cin >> num;
    
    //Bucle que evalua los numeros dentro del arreglo si coinciden se agrega una unidad a la variable repeticiones
    for (size_t i = 0; i < size; i++)
    {
        if(numeros[i] == num){
            repeticiones++;
        }

    }

    //Impresion de resultados
    cout << "\nLas veces que aparece el numero "<< num << " en el arreglo son: "<< repeticiones << endl;
}