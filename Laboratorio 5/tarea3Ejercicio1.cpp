#include <iostream>
#include <vector>
using namespace std;

//Funcion para obtener el mcd
int mcdNumeros(int num1, int num2){    
    //Variables
    vector<int> factores;
    bool seguir = true;
    //Arreglo de numeros que se utilizan para sacar el mcd
    vector<int> numeros = {2, 3, 5, 7};


    while(seguir){
        //Se recorre el arreglo de los numeros posibles para el mcd
        for (size_t i = 0; i < numeros.size(); i++)
        {
            //Se obtiene el valor de la iteracion actual
            int factor = numeros[i];
            /*
              Si el numero actual es divisible entre los dos numeros 
              siendo evaluados se agrega al arreglo de factores y
              los numero evaluados se dividen entre el numero actual
            */ 
            if (num1%factor == 0 && num2%factor == 0)
            {
                //Se iguala la variable booleana a true para que el bucle siga evaluando los numeros
                seguir = true;
                num1 /= factor;
                num2 /= factor;
                factores.push_back(factor);
                //Se utiliza break para volver a repetir la iteracion desde el primer numero del arreglo
                break;
            }else{
                /*
                  Si el numero actual no cumple las condiciones anteriores la variable seguir se iguala 
                  a falso, si ninguna de las interaciones siguientes cumple las condiciones el bucle
                  while finaliza
                */ 
                seguir = false;
            }
                    
        }
        
    }
        /*
            Finalmente se evalua si alguno de los numeros es divisible ente el otro
            de ser asi se agrega al arreglo de factores 
        */
        if(num1 % num2 == 0){
            factores.push_back(num2);
        }else if(num2 % num1 == 0){
            factores.push_back(num1);
        }

        int comun = 1;
        //bucle para multiplicar cada elemento del arreglo y devolver el mcd
        for(size_t n = 0; n < factores.size(); n++){
            comun *= factores[n];
        }
        return comun;
}

int main(){
    //Varibles
    int num1, num2;

    //Mensaje de bienvenida
    cout << "Programa para obtener el maximo comun divisor de dos numeros"<< endl;
    cout << "------------------------------------------------------------------\n"<< endl;

    //Recopilacion de datos
    cout << "Por favor ingrese el primer numero"<< endl;
    cin >> num1;


    cout << "Por favor ingrese el segundo numero"<< endl;
    cin >> num2;

    /*
      Si los numeros ingresados 0 y 0 no se podra obtener un mcd
      si alguno de los numeros es 0 y el otro no, el mcd sera el numero que no es 0
    */
    if(num1 == 0 && num2 == 0){
        cout << "No se puede obtener el mcd de 0 y 0";
    }else if(num1 == 0 && num2 != 0){
        cout << "El mcd es: "<< num2;
    }else if(num2 == 0 && num1 != 0){
        cout << "El mcd es: "<< num1;
    }else{
     cout << "El mcd es: "<< mcdNumeros(num1, num2);
    }
}