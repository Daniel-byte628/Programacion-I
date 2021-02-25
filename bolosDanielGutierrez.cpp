#include <iostream>
using namespace std;
int main()
{
    int turno = 0, tiro1, tiro2, tiro1extra = 0, tiro2extra = 0, puntaje = 0;
    bool media = false;
    bool monona = false; //moñona, creo que el programa no reconoce la "ñ"
    while (turno < 10)
    {
        turno = turno + 1;
        cout << "Inserte el tiro 1" << endl;
        cin >> tiro1;
        cout << "Inserte el tiro 2" << endl;
        cin >> tiro2;
        if (monona == true)
        {
            puntaje = puntaje + tiro1 + tiro2;
            monona = false;
        }
        if (tiro1 == 10)
        {
            monona = true;
        }
        if (media == true)
        {
            puntaje = puntaje + tiro1;
            media = false;
        }
        if (tiro1 + tiro2 == 10 && monona == false)
        {
            media = true;
        }
        puntaje = tiro1 + tiro2 + puntaje;
        if (turno == 10)
        {
            if (media == true)
            {
                cout << "Tiene 1 tiro extra";
                cin >> tiro1extra;
                puntaje = tiro1extra + puntaje;
            }
            else if (monona == true)
            {
                cout << "Tiene 2 tiro extra" << endl;
                cout << "Inserte el 1 tiro" << endl;
                cin >> tiro1extra;
                cout << "Inserte el 2 tiro" << endl;
                cin >> tiro2extra;
                puntaje = tiro1extra + puntaje + tiro2extra;
            }
        }
    }
    cout << "Su puntaje final es: " << puntaje;

    return 0;
}