#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, y = 0, contador = 0, orientacion = 0;
    char v, a, g;
    cin >> n; //cuantas variables vas a colocar
    while (contador < n)
    {
        cin >> v;
        if (v == 'a')
        {
            if (orientacion == 360)
            {
                orientacion = 0;
            }
            else if (orientacion == 0)
            {
                x = x + 2;
            }
            else if (orientacion == 90)
            {
                y = y + 2;
            }
            else if (orientacion == 180)
            {
                x = x - 2;
            }
            else if (orientacion == 270)
            {
                y = y - 2;
            }
        }
        if (v == 'g')
        {
            orientacion = orientacion + 90;
        }
        contador++;
    }
    cout << "(" << x << "," << y << ")";
    return 0;
}