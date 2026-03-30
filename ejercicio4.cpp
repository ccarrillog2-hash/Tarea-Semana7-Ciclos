#include <iostream>
using namespace std;

int main() {
    int calificacion;
    int total = 0;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    cout << "Nombre del estudiante: Cindy Julissa Carrillo Guarcas." << endl;

    do {
        cout << "\nIngrese calificacion (1=Malo, 2=Regular, 3=Bueno, 4=Excelente, 0=Salir): ";
        cin >> calificacion;

        if(calificacion == 1) {
            count1++;
            total++;
        } else if(calificacion == 2) {
            count2++;
            total++;
        } else if(calificacion == 3) {
            count3++;
            total++;
        } else if(calificacion == 4) {
            count4++;
            total++;
        } else if(calificacion == 0) {

        } else {
            cout << "Opcion invalida. Intente nuevamente.\n";
        }

    } while(calificacion != 0);

    if(total == 0) {
        cout << "No se ingresaron respuestas validas.\n";
    } else {
        cout << "Total de respuestas: " << total << "\n";
        cout << "Malo: " << count1 << "\n";
        cout << "Regular: " << count2 << "\n";
        cout << "Bueno: " << count3 << "\n";
        cout << "Excelente: " << count4 << "\n";
    }

    return 0;
}