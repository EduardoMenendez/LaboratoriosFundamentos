#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //Declaracion de variables
    int a, b, c, discrminante;
    float x1, x2;

    //Mensaje de bienvenida 
    cout << "Programa para realizar la formula cudratica" << endl;
    cout << "-----------------------------------------------" << endl;

    //Asignacion de valores a las variables
    cout << "Por favor ingrese el valor de a" << endl;
    cin >> a;
    cout << "Por favor ingrese el valor de b" << endl;
    cin >> b;
    cout << "Por favor ingrese el valor de c" << endl;
    cin >> c;

    /*Se utiliza una condicional con el discriminante ya que no existen 
    raices negativas en el conjunto de los numeros reales*/
    discrminante = pow(b, 2) - 4*a*c;

    if (discrminante >= 0){

        //Realizar las operaciones
        x1 = b*-1 + sqrt(discrminante);
        x1 /= 2*a;

        x2 = b*-1 - sqrt(discrminante);
        x2 /= 2*a;

        //Imprimir resultados
        cout << "El primer valor es: " << x1 << endl;
        cout << "El segundo valor es: " << x2 << endl;

    }else{

        cout << "La operacion no tiene respuesta ya que no se puede obtener la raiz cuadrada de un numero negativo";

    }
    
    

    return 0;

}
