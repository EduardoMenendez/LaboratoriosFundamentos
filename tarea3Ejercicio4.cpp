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

//Funcion para modificar la fecha ingresada
string fechaSiguiente(int day, int month, int year){
    if(day > 0 && day <= 31 && month > 0 && month <= 12 && year > 0){

        //Se listan los meses que tienen 31 dias
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            //Si el dia ingresado es 31 se suma un mes y el dia vuelve a uno
            if((day+1) == 32){
                day = 1;
                month++;
                //Si el mes es diciembre se agrega una unidad a year
                if(month == 13){
                    year++;
                    month = 1;
                }
            //Si no se cumplen las condiciones anteriores simplemente se agrega un dia
            }else{
                day++;
            }
            //retorno de la funcion
            return "La fecha mas un dia es: "+to_string(day)+"/"+to_string(month)+"/"+to_string(year)+"\n";
        }

        if(month == 4 || month == 6 || month == 9 || month == 11){
             if((day+1) == 31){
                day = 1;
                month++;
            //Si no se cumplen las condiciones anteriores simplemente se agrega un dia
            }else{
                day++;
            }
            //retorno de la funcion
            return "La fecha mas un dia es: "+to_string(day)+"/"+to_string(month)+"/"+to_string(year)+"\n";
        }

        if(month == 2){
            day++;
            if(definirSiEsBisiesto(year)){
                if(day > 29){
                    day = 1;
                    month++;
                }
            }else{
                if(day > 28){
                    day = 1;
                    month++;
                }
            }
            return "La fecha mas un dia es: "+to_string(day)+"/"+to_string(month)+"/"+to_string(year)+"\n";
        }



    }else{
        return "Los valores ingresados so invalidos\n";
    }
    
}


int main(){
    //Variables
    int day, month, year;

    //Mensaje de bienvenida
    cout << "Programa para obtener el dia siguiente a una fecha ingresada" << endl;
    cout << "---------------------------------------------------------------------\n" << endl;

    //Recopilacion de datos;
    cout << "Por favor, ingrese un dia" << endl;
    cin >> day;
    
    cout << "Por favor, ingrese un mes" << endl;
    cin >> month;
    
    cout << "Por favor, ingrese un anio" << endl;
    cin >> year;

    //Impesion de los resultados
    cout << fechaSiguiente(day, month, year);
    system("PAUSE()");
    
}