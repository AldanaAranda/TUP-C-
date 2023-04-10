#include <iostream>
#include <cmath>
using namespace std;

/*Escribir un programa que calcule la raíz cuadrada de un número ingresado por el usuario. Tener en
cuenta que no puede ser un número negativo, por lo tanto, solucionar ese problema usando alguna
función de <cmath>.*/

int main(){
    float num;
    cout << "Ingrese un numero" << endl;
    cin >> num;
    float raiz = sqrt(abs(num));
    cout << "La raiz cudrada del numero numero ingresado es: " << raiz << endl;
    return 0;
}