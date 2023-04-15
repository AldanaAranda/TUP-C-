#include <iostream>
#include <cctype>
using namespace std;

/*Hacer un programa en C++, que lea una letra y diga si es una vocal.*/

int main(){
    char letra;
    cout << "Ingrese una letra" << endl;
    cin >> letra;

    if(tolower(letra) == 'a' || tolower(letra) == 'e' || tolower(letra) == 'i' || tolower(letra) == 'o' || tolower(letra) == 'u'){
        cout << "Es una vocal" << endl;
    } else{
        cout << "No es una vocal" << endl;
    }

    return 0;
}