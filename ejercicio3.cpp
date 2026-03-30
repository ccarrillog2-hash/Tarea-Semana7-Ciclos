#include <iostream>
using namespace std;

int main() {
    double saldo = 500.0;
    int opcion;

    cout << "Nombre del estudiante: Cindy Julissa Carrillo Guarcas." << endl;

    do {
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
        case 1:
            cout << "Saldo actual: Q" << saldo << "\n";
            break;

        case 2: {
                double deposito;
                cout << "Ingrese monto a depositar: ";
                cin >> deposito;
                if(deposito > 0) {
                    saldo += deposito;
                    cout << "Deposito realizado correctamente.\n";
                } else {
                    cout << "Monto invalido.\n";
                }
                break;
        }

        case 3: {
                double retiro;
                cout << "Ingrese monto a retirar: ";
                cin >> retiro;
                if(retiro > 0) {
                    if(retiro <= saldo) {
                        saldo -= retiro;
                        cout << "Retiro realizado correctamente.\n";
                    } else {
                        cout << "Fondos insuficientes.\n";
                    }
                } else {
                    cout << "Monto invalido.\n";
                }
                break;
        }

        case 4:
            cout << "Gracias por usar el sistema.\n";
            break;

        default:
            cout << "Opcion invalida.\n";
        }

    } while(opcion != 4);

    return 0;
}