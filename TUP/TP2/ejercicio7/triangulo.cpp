#include <iostream>
#include <cmath>
using namespace std;

/*Escribir un programa que calcule el valor de a, c y beta. Sabiendo que b = 4 y upsilon = 60 grados*/

int main(){
    float a, b, c, beta, betaR, upsilon;
    const float pi = 3.14159f;
    b = 4;
    upsilon = 60;
    beta = 180 - (90 + 60);
    betaR = (beta * pi) / 180; //El valor de beta en radianes
    c = b * cos(betaR);
    a = sin(betaR) * c;
    cout <<"c = " << c << endl;
    cout <<"a = " << a << endl;
    return 0;
}