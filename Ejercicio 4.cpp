#include <iostream>
using namespace std;

int main() {
    int numero, recarga;
    cout << "Ingrese el numero telefonico: ";
    cin >> numero;
    cout << "Ingrese el monto de recarga: ";
    cin >> recarga;

    int ultimoDigito = numero % 10;
    switch (ultimoDigito) {
        case 7:
            recarga *= 2;
            break;
        case 9:
            recarga *= 3;
            break;
        case 4:
            recarga *= 5;
            break;
        default:
            break;
    }

    cout << "El saldo disponible es: " << recarga << endl;
    return 0;
}