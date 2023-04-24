#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase en minuscualas: ";
    getline(cin, frase);
    for (int i = 0; i < frase.length(); i++) {
        frase[i] = toupper(frase[i]);
    }
    cout << "La frase en mayusculas es: " << frase << endl;
    return 0;
}
