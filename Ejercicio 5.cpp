#include <iostream>

using namespace std;

int verificar_par (int numero){
    int par;
    par = numero % 2; 
}

int main(int argc, char const *argv[])
{
    int numero;
    
    cout << "Dame un numero y yo te dire si es par o impar: ";
    cin >> numero;

    if (verificar_par(numero) == 0) { 
        cout << numero << " es par" << endl;
    }
    else {
        cout << numero << " es impar" << endl;
    }
    return 0;
}
