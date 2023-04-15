#include <iostream>
using namespace std;

/*Hacer un programa en C++, para una tienda de zapatos que tiene una promoción de descuento para
vender al mayor, esta dependerá del número de zapatos que se compren. Si son más de diez, se les
dará un 10% de descuento sobre el total de la compra; si el número de zapatos es mayor de veinte
pero menor de treinta, se le otorga un 20% de descuento; y si son más treinta zapatos se otorgará un
40% de descuento. El precio de cada zapato es de $8000.*/

int main(){
    int zapatos,compra, precio = 8000;
    cout << "Ingrese la cantidad de zapatos que va a comprar" << endl;
    cin >> zapatos;
    float descuento, total;
    if(zapatos < 10){
        total = precio * zapatos;
    } else if (zapatos >= 10 && zapatos < 20){
        compra = precio * zapatos;
        descuento = (compra * 10) / 100;
        total =  compra - descuento;
    } else if (zapatos >= 20 && zapatos <= 30){
        compra = precio * zapatos;
        descuento = (compra * 20) / 100;
        total = compra - descuento;
    } else{
        compra = precio * zapatos;
        descuento = (compra * 40) / 100;
        total = compra - descuento;
    }

    cout << "Total: $" << total << endl;

    return 0;
}