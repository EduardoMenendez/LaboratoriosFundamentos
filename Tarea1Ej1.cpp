#include <iostream>
using namespace std;

int main(){

    //Declaracion de la variables, se utiliza una variable float ya que al promediar numeros se pueden obetener decimales
    int num1, num2, num3;
    float promedio;

    //Mensaje de bienvenida
    cout << "Programa para promediar tres numeros"<< endl;
    cout << "----------------------------------------------------------- \n"<< endl;

    //Asignacion de valores a las variable
    cout << "Por favor introduzca el primer numero:" << endl;
    cin >> num1;
    cout << "Por favor introduzca el segundo numero:" << endl;
    cin >> num2;
    cout << "Por favor introduzca el tercer numero:" << endl;
    cin >> num3;

    //Promedio de los numeros
    promedio = num1+num2+num3;
    promedio /= 3;

    //Imprimir en pantalla el resultado del promedio
    cout << "El promedio es: " << promedio; 

    return 0;
}