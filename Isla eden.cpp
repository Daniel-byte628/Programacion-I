#include <iostream>
using namespace std;
int main()
{
    long long poblacionA = 0, poblacionB = 0, incrementoa, incrementob;
    double tasaA, tasaB;
    int meses = 0; //tasas de incremento respectivamente
    cout << "Nota: Se le recuerda al usuario, lo siguiente:" << endl;
    cout << "1. La población de rojas (A) es menor que la población de enanas (B)" << endl;
    cout << "2. La tasa de incremento de la poblacion (A) es mayor que la población (B)" << endl;
    cout << "Escriba la poblacion de hormigas rojas(A)" << endl;
    cin >> poblacionA;
    cout << "Escriba la poblacion de hormigas enanas(B)" << endl;
    cin >> poblacionB;
    cout << "Escriba la tasa de incremento de las hormigas rojas(A)" << endl;
    cin >> tasaA;
    cout << "Escriba la tasa de incremento de las hormigas enanas(B)" << endl;
    cin >> tasaB;
    tasaA=tasaA/100;
    tasaB=tasaB/100;
    while (poblacionA < poblacionB)
    {
        if (poblacionA >= 20000)
        {
            tasaA = tasaA/  2;
        }
        else if (poblacionB >= 20000)
        {
            tasaB = tasaB / 2;
        }
        incrementoa = poblacionA * tasaA;
        poblacionA = poblacionA + incrementoa;
        incrementob = poblacionB * tasaB;
        poblacionB = poblacionB + incrementob;
        meses++;
    }
    cout << "Para que A sea mayor que B es necesario los siguientes meses:" << meses << endl;
    cout << "las poblaciones respectivamente al finalizar son las siguientes: " << poblacionA << " y " << poblacionB << endl;
    return 0;
}