// Leer un numero entero positivo y evaluar si múltiplo de 8.

#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Dime un numero para saber si es multiplo de 8: ";
    cin >> num;
    if (  num%8 ==0 ){
        cout << num << " es multiplo de 8"<< endl;
    }
    else {
        cout << num << " no es multiplo de 8" << endl;
    }

    return 0;
}

