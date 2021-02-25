#include <iostream>
using namespace std;
int main()
{
    int multiplicando = 1, multiplicador = 1, resultado;
    while (multiplicando <= 10)
    {
        while (multiplicador <= 10)
        {
            resultado = multiplicando * multiplicador;
            cout << multiplicando<<"*"<< multiplicador<<"=" << resultado << endl;
            multiplicador = multiplicador + 1;
        }
        multiplicando = multiplicando + 1;
        multiplicador=1;
    }

    return 0;
}