#include <iostream>
#include <vector>

using namespace std;

//Funcion para llenar los arreglos
vector<int> llenarArreglo(int* size, bool nuevo){
    //Variables
    vector<int> arreglo;
    //Si la variable booleana es verdadera es porque aun no se ha definido la longitud de los arreglos
    if(nuevo){
        //Se utiliza un bucle debido a que la longitud de los arreglos necesita ser mayor a 0
        do{
            cout << "Ingrese el tamanio del arreglo" << endl;
            cin >> *size;
                if(*size <= 0){
                    cout << "El valor ingresado es invalido\n" << endl;
                }
        }while(*size <= 0);

        //Se solicitan los valores para el arreglo
        for(size_t i = 0; i < *size; i++){
            int num;
            cout << "Ingrese el valor #"<<i+1<<" del primer arreglo" << endl;
            cin >> num;
            arreglo.push_back(num);
        }
    }else{
        //Si la variable booleana era falsa se utiliza la longitud antes ingresada
        for(size_t i = 0; i < *size; i++){
            int num;
            cout << "Ingrese el valor #"<<i+1<<" del segundo arreglo" << endl;
            cin >> num;
            arreglo.push_back(num);
        }
    }

    return arreglo;
}

//Funcion para la suma de los valores en los arreglos
vector<int> sumaArreglos(vector<int> num1, vector<int> num2){
    //variables
    vector<int> suma;

    //for para sumar cada elemento de los dos arreglos
    for (size_t i = 0; i < num1.size(); i++)
    {
        int resultado;
        resultado = num1[i]+num2[i];
        suma.push_back(resultado);
    }
    return suma;

}

//Funcion para imprimir los valores del arreglo resultante
void mostrarArreglo(vector<int> arreglo){
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << "Resultado de la suma #"<<i+1<<": " << arreglo[i] << endl;
    }
    
}

int main(){
    //Variables
    vector<int> num1, num2, suma;
    int size;

    /*
        Llamada a las funciones para llenar los arreglos
        Se utilizan punteros dentro de las funciones ya que fue solicitado que en el metodo main solo se llamen las funciones
    */
    num1 = llenarArreglo(&size, true);
    num2 = llenarArreglo(&size, false);
    //Llamada a la funcion para la suma de arreglos
    suma = sumaArreglos(num1, num2);
    //Llamada a la funcion para imprimir el arreglo resultante
    mostrarArreglo(suma);


}