#include <iostream>
#include <cmath>
using namespace std;

/*Escribir un programa que al ingresar las notas de los 3 parciales del curso, devuelva el valor del
promedio, el valor del promedio redondeado (“round”) y el valor del promedio truncado (“trunc”).*/

int main(){
    float nota1, nota2, nota3;
    cout << "Ingrese la primera nota" << endl;
    cin >> nota1;

    cout << "Ingrese la segunda nota" << endl;
    cin >> nota2;

    cout << "Ingrese la tercera nota" << endl;
    cin >> nota3;

    float promedio = (nota1 + nota2 + nota3) / 3;

    cout << "El promedio redondeado es: " << round(promedio) << endl;
    cout << "El promedio truncado es: " << trunc(promedio) << endl;

    return 0;
}