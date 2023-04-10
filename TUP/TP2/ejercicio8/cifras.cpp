#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, cifras;
    cout << "Ingrese un numero" << endl;
    cin >> num;
    cifras = trunc(log10(num)) + 1;
    cout << "El numero ingresado tiene " << cifras << " cifras" << endl;
    return 0;
}