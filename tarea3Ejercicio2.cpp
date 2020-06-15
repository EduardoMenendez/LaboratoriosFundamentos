#include <iostream>
#include <ctime>

using namespace std;

//Funcion para agregar un segundo
string agregarSegundos(int hora, int min, int seg){
    //Se evaluan los valores ingresados 
    if(hora >= 0 && hora <= 24 && min >= 0 && min < 60 && seg >= 0 && seg < 0){
        //Se agrega el segundo
        seg++;
        //Si se cumplen 60 seg se agrega un minuto
        if(seg == 60){
            seg = 0;
            min++;
            //Si se cumplen 60 min se agrega una hora
            if(min == 60){
                min = 0;
                hora++;
                //Si al agregar la hora esta sobrepasa el rango de 24 horas pasan a ser las 0 horas
                if(hora = 25){
                    hora = 0;
                }
            }
        }
        return "La hora mas un segundo es: "+to_string(hora)+":"+to_string(min)+":"+to_string(seg)+"\n";
    }else{
        return "Los valores ingresados son invalidos \n"; 
    }
    
}


int main(){
    //Variables
    int hora, min, seg;

    //Mensaje de Bienvenida
     cout << "Programa para obtener la hora mas un segundo" << endl;
     cout << "--------------------------------------------------\n" << endl;

     //Recopilacion de datos
     cout << "Ingrese una hora en el formato de 24 horas" << endl;
     cin >> hora;

     cout << "Ingrese los minutos" << endl;
     cin >> min;

     cout << "Ingrese los segundos" << endl;
     cin >> seg;

     //Imprimir resultados 
     cout << agregarSegundos(hora, min, seg);
     system("PAUSE()");


}