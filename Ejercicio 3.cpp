#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float salario, inss, descuento;
    inss = 0.07;
    cout << "Dame tu salario: ";
    cin >> salario;
    descuento = salario * inss;
    cout << "Lo que se te descontara de tu saliro de " << salario << " es " << descuento << endl;
    return 0;
}
