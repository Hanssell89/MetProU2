#include <iostream>

using namespace std;

main (){

int opcion=0;
do {

        cout << "elija una de las opciones" << endl;
        cout << "1. Registrar Cliente"<< endl;
        cout << "2. Registrar Producto"<< endl;
        cout << "3. Registrar Empleado" << endl; 
        cout << "4. Salir";
        cout << "";
        cin >> opcion;

    switch (opcion){
    case 1:
    cout << "registrar_Usuario";
    char nombre, id;
    cout << "Diga el nombre del usuario: ";
    cin >> nombre;
    cout << "Diga el ID del usuario: ";
    cin >> id;
    cout << nombre << ""<< id << "ha sido registrado correctamente" << endl;
    break;

    case 2: 
    cout << "registrar_Producto";
    char producto, serial;
    cout << "Diga el nombre del producto: ";
    cin >> producto;
    cout << "Diga el serial del producto: ";
    cin >> serial;
    cout << producto << ""<< serial<< "ha sido registrado correctamente" << endl;
    break;

    case 3:
    cout << "registrar_Empleado";
    char empleado, ide;
    cout << "Diga el nombre del Empleado: ";
    cin >> empleado;
    cout << "Diga el id del Empleado: ";
    cin >> ide;
    cout << empleado << ""<< ide << "ha sido registrado correctamente" << endl;
    break;

    case 4:
    cout << "Salida";
    return 0;

    default:
    break;
        }
    }while(opcion != 5);
    return 0;
}