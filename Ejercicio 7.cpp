#include <iostream>
using namespace std;

int main() {
    int opcion = 0;
    do {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Calcular tabla de multiplicar" << endl;
        cout << "2. Convertir Kb a Mg" << endl;
        cout << "3. Convertir Tb a Gb" << endl;
        cout << "4. Imprimir numeros en un rango" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                int num;
                cout << "Ingrese un numero entre 1 y 11: ";
                cin >> num;
                if(num > 0 && num < 12) {
                    for(int i = 1; i <= 10; i++) {
                        cout << num << " x " << i << " = " << num*i << endl;
                    }
                } else {
                    cout << "El numero ingresado no esta en el rango permitido." << endl;
                }
                break;
            case 2:
                double kb;
                cout << "Ingrese la cantidad en Kb: ";
                cin >> kb;
                cout << kb << " Kb = " << kb/1024 << " Mg" << endl;
                break;
            case 3:
                double tb;
                cout << "Ingrese la cantidad en Tb: ";
                cin >> tb;
                cout << tb << " Tb = " << tb*1024 << " Gb" << endl;
                break;
            case 4:
                int a, b;
                cout << "Ingrese el valor de a: ";
                cin >> a;
                cout << "Ingrese el valor de b: ";
                cin >> b;
                if(a <= b) {
                    for(int i = a; i <= b; i++) {
                        cout << i << endl;
                    }
                } else {
                    cout << "El valor de a debe ser menor o igual que el valor de b." << endl;
                }
                break;
            case 5:
                cout << "Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion no valida. Intente nuevamente." << endl;
                break;
        }
    } while(opcion != 5);
    return 0;
}