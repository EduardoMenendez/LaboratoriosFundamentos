#include <iostream>

using namespace std;

//Funcion para definir si es bisiesto o no
bool definirSiEsBisiesto(int year){
    if(year % 400 == 0){
        return true;
    }else if(year % 4 == 0 && year%100 != 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    //Variables
    int year;

    //Mensaje de bienvenida
    cout << "Programa para definir si un anio es bisiesto" << endl;
    cout << "--------------------------------------------------------\n" << endl;

    cout << "Por favor, ingrese un anio" << endl;
    cin >> year;

    //Condicional para definir si el valor ingresado no es negativo
    if(year > 0){
        //Llamado a la funcion para saber si el valor es bisiesto o no
        definirSiEsBisiesto(year)?cout <<"El anio es bisiesto\n":cout <<"El anio no es bisiesto\n";
    }else{
        cout << "El valor que ingreso no es valido" << endl;
    }

    system("PAUSE()");
    

}