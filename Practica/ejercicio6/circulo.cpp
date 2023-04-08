#include <iostream>
using namespace std;

/*Escribir un programa que calcule el perímetro y el área de un círculo, dependiendo del radio que
ingrese el usuario.*/

int main(){
    const float pi = 3.14159f;
    float radio;
    cout << "Ingrese el radio" << endl;
    cin >> radio;
    cout << "El perimetro del circulo es: " << 2 * pi * radio << endl;
    cout << "El area del circulo es: " << pi * radio * radio << endl;
    return 0;
}