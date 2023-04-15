#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int dia, mes;
    cout << "Ingrese el dia de su nacimiento" << endl;
    cin >> dia;
    cout << "Ingrese el mes de su nacimiento" << endl;
    cin >> mes;
    cout << "Día: " << dia << endl;
    cout << "Mes: " << mes << endl;

        if(mes == 1){
            if(dia >= 1 && dia <= 20){
                cout << "El signo del zodiaco es: Capricornio" << endl;
            } else if(dia >= 21 && dia <= 31){
                cout << "El signo del zodiaco es: Acuario" << endl;
            }
        } else if (mes == 2){
            if (dia >= 1 && dia <= 19){
                cout << "El signo del zodiaco es: Acuario" << endl;
            } else if(dia >= 20 && dia <=29){
                cout << "El signo del zodiaco es: Piscis" << endl;
            }
        } else if(mes == 3){
            if(dia >= 1 && dia <= 20){
                cout << "El signo del zodiaco es: Piscis" << endl;
            } else if(dia >= 21 && dia <= 31){
                cout << "El signo del zodiaco es: Aries" << endl;
            }
        }else if(mes == 4){
            if(dia >= 1 && dia <= 19){
                cout << "El signo del zodiaco es: Aries" << endl;
            } else if (dia >= 20 && dia <= 30){
                cout << "El signo del zodiaco es: Tauro" << endl;
            }
        } else if(mes == 5){
            if(dia >= 1 && dia <= 20){
                cout << "El signo del zodiaco es: Tauro" << endl;
            }else if(dia >= 21 && dia <= 31){
                cout << "El signo del zodiaco es: Geminis" << endl;
            }
        } else if(mes == 6){
            if(dia >= 1 && dia <= 21){
                cout << "El signo del zodiaco es: Geminis" << endl;
            }else if(dia >= 22 && dia <= 30){
                cout << "El signo del zodiaco es: Cancer" << endl;
            }
        }else if(mes == 7){
            if(dia >= 1 && dia <= 22){
                cout << "El signo del zodiaco es: Cancer" << endl;
            }else if(dia >= 23 && dia <= 31){
                cout << "El signo del zodiaco es: Leo" << endl;
            }
        }else if (mes == 8){
            if(dia >= 1 && dia <= 23){
                cout << "El signo del zodiaco es: Leo" << endl;
            }else if (dia >= 24 && dia <= 31){
                cout << "El signo del zodiaco es: Virgo" << endl;
            }
        }else if(mes == 9){
            if(dia >= 1 && dia <= 22){
                cout << "El signo del zodiaco es: Virgo" << endl;
            }else if(dia >= 23 && dia <= 30){
                cout << "El signo del zodiaco es: Libra" << endl;
            }
        }else if(mes == 10){
            if(dia >= 1 && dia <= 22){
                cout << "El signo del zodiaco es: Libra" << endl;
            }else if (dia >= 23 && dia <= 31){
                cout << "El signo del zodiaco es: Escorpio" << endl;
            }
        }else if (mes == 11){
            if(dia >= 1 && dia <= 22){
                cout << "El signo del zodiaco es: Escorpio" << endl;
            }else if(dia >= 23 && dia <= 30){
                cout << "El signo del zodiaco es: Sagitario" << endl;
            }
        }else if (mes == 12){
            if(dia >= 1 && dia <= 21){
                cout << "El signo del zodiaco es: Sagitario" << endl;
            }else if(dia >= 22 && dia <= 31){
                cout << "El signo del zodiaco es: Capricornio" << endl;
            }
        }

        string respuesta;
        cout << "Te gusta festejar tu cumpleaños?" << endl;
        cin >> respuesta;

        if (respuesta == "Si"){
            cout << "Que Bueno!" << endl;
        } else if(respuesta == "No"){
            cout << "Que Lastima." << endl;
        } else {
            cout << "-Vuelva a intentar, solo esta permitido --> el ingreso de 'Si' o 'No'" << endl;
        }

        float invitados;
        cout << "Ingrese la cantidad de invitados a tu cumple: " << endl;
        cin >> invitados;

        float total_invitados = round(sqrt(pow(invitados, 4)));

        cout << "Tus invitados elevado a 4, raiz cuadrada y redondeando el valor, son: " << total_invitados << endl;
        
        return 0;
    }
