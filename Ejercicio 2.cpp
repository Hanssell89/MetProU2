
#include <iostream>

using namespace std;

int main(){
    char letra;
    cout << "Ingresa una letra: ";
    cin >> letra;

    char letra_anterior = letra - 1;
    char letra_posterior = letra +1;

    cout << "La letra anterior de " << letra << " es " << letra_anterior << endl;
    cout << "La letra psoterior de " << letra << " es " << letra_posterior << endl;

    return 0;
}