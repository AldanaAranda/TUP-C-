#include <iostream>
#include <string>

using namespace std;

/*Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas hay en el curso
actual. Diseñar un algoritmo para este propósito. Recuerda que para calcular el porcentaje
puedes hacer una regla de 3 simple. El programa debe solicitar al usuario que ingrese la
cantidad total de niños, y la cantidad total de niñas que hay en el curso.*/

int main(){
    double nenes, nenas, totalNenes, totalNenas;

    cout << "Ingrese cantidad de nenes en el curso" << endl;
    cin >> nenes;

    cout << "Ingrese cantidad de nenas en el curso" << endl;
    cin >> nenas;

    totalNenes = (nenes * 100) / (nenes + nenas);
    totalNenas = (nenas * 100) / (nenes + nenas);

    cout << "El porcentaje de nenes en el curso es: " << totalNenes << endl;
    cout << "El porcentaje de nenas en el curso es: " << totalNenas << endl;
    
    return 0;
}