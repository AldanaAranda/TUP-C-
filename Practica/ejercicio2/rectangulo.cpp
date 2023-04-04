#include <iostream>
using namespace std;

/*Solicitar al usuario que ingrese la base y altura de un rectángulo, y calcular y mostrar por
pantalla el área y perímetro del mismo
area = base * altura
perimetro = 2 * altura + 2 * base.*/

int main(){
    double base, altura;

    cout << "Ingrese la base del rectangulo" << endl;
    cin >> base;

    cout << "Ingrese la altura del rectangulo" << endl;
    cin >> altura;

    cout << "El area del rectangulo es: " << base * altura << endl;
    cout << "El perimetro del rectangulo es: " << (2 * altura) + (2 * base) << endl;

    return 0;
}