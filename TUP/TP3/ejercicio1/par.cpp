#include <iostream>
using namespace std;

/*Hacer un programa en C++, que diga si un número es par o impar.*/

int main(){
    int num;
    cout << "Ingrese un numero" << endl;
    cin >> num;
    
    if (num % 2 == 0){
        cout << "Es numero par" << endl;
    } else {
        cout << "No es par" << endl;
    }

    return 0;
}