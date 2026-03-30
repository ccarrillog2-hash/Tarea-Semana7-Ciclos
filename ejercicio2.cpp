#include <iostream>
using namespace std;

int main() {
    double monto;
    double total = 0;
    int contadorCompras = 0;
    int comprasMayorIgual100 = 0;
    int comprasMenor100 = 0;

    cout << "Nombre del estudiante: Cindy Julissa Carrillo Guarcas." << endl;

    while (true) {
        cin >> monto;

        if (monto < 0) { continue;
        }

        if (monto == 0) {
            break;
        }
        total += monto;
        contadorCompras++;

        if (monto >= 100) {
            comprasMayorIgual100++;
        } else {
            comprasMenor100++;
        }
    }
    if (contadorCompras == 0) {
        cout << "No se ingresaron compras validas." << endl;
    } else {
        double promedio = total / contadorCompras;
        cout << "Total acumulado: Q" << total << endl;
        cout << "Cantidad de compras: " << contadorCompras << endl;
        cout << "Promedio de compra: Q" << promedio << endl;
        cout << "Compras mayores o iguales a Q100: " << comprasMayorIgual100 << endl;
        cout << "Compras menores a Q100: " << comprasMenor100 << endl;
    }

    return 0;
}