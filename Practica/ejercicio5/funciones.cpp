#include <iostream>
#include <cmath>
using namespace std;

/*Calcular el valor del coseno, seno y tangente de un ángulo (entero) en grados, ingresado por el
usuario. Recuerde que las funciones “cos”, “sin” y “tan” trabajan con ángulos en radianes.*/

int main(){
    const float pi = 3.14159f;
    int grado;
    cout << "Ingrese el angulo en grados" << endl;
    cin >> grado;
    float radianes = (grado * pi) / 180;
    cout << "Coseno: " << cos(radianes) << endl;
    cout << "Seno: " << sin(radianes) << endl;
    cout << "Tangente: " << tan(radianes) << endl;
    return 0;

}