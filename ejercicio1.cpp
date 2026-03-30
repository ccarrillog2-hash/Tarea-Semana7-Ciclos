#include <iostream>
#include <string>

using namespace std;

int main() {
    string usuario;
    int contrasena;
    int intentosFallidos = 0;

    cout << "Nombre del estudiante: Cindy Julissa Carrillo Guarcas"<< endl;
    while (true) {
        cout <<"\nIngrese usuario:";
        cin >>usuario;

        cout <<"Ingrese contrasena:";
        cin >> contrasena;

        if (usuario == "admin" && contrasena == 2026) {
            break;
        } else {
            cout << "Datos incorrectos.\n";
            intentosFallidos++;
        }
    }
    cout << "Bienvenido al sistema.\n";
    cout << "Acceso concedido.\n";
    cout << "Intentos incorrectos: " << intentosFallidos << endl;
    return 0;
}