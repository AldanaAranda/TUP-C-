#include <iostream>
using namespace std;

/*Hacer un programa en C++, que lea tres números y diga cuál es el mayor.*/

int main(){
    int num1, num2, num3, mayor = 0;
    cout << "Ingrese el primer numero" << endl;
    cin >> num1;
    if(mayor < num1){
        mayor = num1;
    }
    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;
    if (mayor < num2){
        mayor = num2;
    }
    cout << "Ingrese el tercer numero" << endl;
    cin >> num3;
    if(mayor < num3){
        mayor = num3;
    }


    cout << "De los tres numero ingresados el mayor es: " << mayor << endl;

    return 0;
}