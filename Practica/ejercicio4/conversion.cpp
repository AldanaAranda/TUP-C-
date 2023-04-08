#include <iostream>
using namespace std;

/*Escribir un programa que realice la conversión de grados a radianes*/

int main(){
    const float pi = 3.14159f;
    float grado;
    cout << "Ingrese un grado" << endl;
    cin >> grado;
    cout << "Resultado de la conversion de grados a radianes: " << (grado * pi) / 180 << endl;
}