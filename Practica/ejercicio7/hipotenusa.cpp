#include <iostream>
#include <cmath>
using namespace std;

/*Escribir un programa que cuando el usuario ingrese los catetos de un triángulo rectángulo, calcule y
muestre en consola el valor de la hipotenusa. (Teorema de Pitágoras).*/

int main(){
    float catetoA, catetoB;

    cout << "Ingrese el cateto a" << endl;
    cin >> catetoA;

    cout << "Ingrese el cateto b" << endl;
    cin >> catetoB;

    float hipotenusa = pow(catetoA, 2) + pow(catetoB, 2);

    cout << "La hipotenusa es: " << sqrt(hipotenusa) <<endl;
    
    return 0;
}