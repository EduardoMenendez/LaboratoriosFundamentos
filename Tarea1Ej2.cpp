#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main(){

    //Declaracion de variables
    float radio, area, perimetro;

    //Mensaje de bienvenida
    cout << "Programa para calcular el area y perimetro de un circulo" << endl;
    cout << "-------------------------------------------------------------------- \n" << endl;

    //Asignacion de valores
    cout << "Por favor ingrese el valor del radio:" << endl;
    cin >> radio;

    //Operaciones para obtener el perimetro y el area (M_PI es el valor de la constante pi)
    perimetro = 2 * radio * M_PI;
    area= pow(radio, 2) * M_PI;

    //Imprimir en pantalla los valores del area y el perimetro
    cout << "\nEl valor del perimetro es: " << perimetro << "\nEl valor del area es: " << area;

}