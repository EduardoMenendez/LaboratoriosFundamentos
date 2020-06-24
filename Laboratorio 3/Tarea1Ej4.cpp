#include <iostream>
using namespace std;

int main(){

    //Delcaracion de variables
    string producto;
    float valor, total;
    int cantidad;

    //Mensaje de bienvenida
    cout << "Programa para calcular el total gastado en la compra de un producto" << endl;
    cout << "----------------------------------------------------------------------------- \n" << endl;

    //Asignacion de valores
    cout << "Por favor ingrese el nombre del producto:" << endl;
    cin >> producto;
    cout << "Por favor ingrese el precio unitario del producto:" << endl;
    cin >> valor;
    cout << "Por favor ingrese la cantidad que se comprara:" << endl;
    cin >> cantidad;

    //Multiplicacion para obtener el total gastado
    total = cantidad * valor;

    //Imprimir en pantalla los resultados
    cout << "\nUsted ha comprado " << cantidad << " "+producto+" " << "con un precio unitario de $" << valor << endl;
    cout << "El total a pagar es de: $" << total;
    return 0;

}