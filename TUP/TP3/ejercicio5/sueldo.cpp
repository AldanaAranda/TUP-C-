#include <iostream>
using namespace std;

/*Hacer un programa en C++, para ayudar a un trabajador a saber cuál será su sueldo semanal, se sabe
que si trabaja 40 horas o menos, se le pagará $1000 por hora, pero si trabaja más de 40 horas
entonces las horas extras se le pagarán a $2000 por hora.*/

int main(){
    int hora, extra;
    float sueldoSemanal;
    cout << "Ingrese las horas trabajadas en la semana" << endl;
    cin >> hora;
    if (hora <= 40){
        sueldoSemanal = hora * 1000;
    } else{
        extra = hora - 40;
        sueldoSemanal = (40 * 1000) + (extra * 2000);
    }

    cout << "El sueldo semanal es: $" << sueldoSemanal << endl;

    return 0;
}