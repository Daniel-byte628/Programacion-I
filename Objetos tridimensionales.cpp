#include <iostream>
using namespace std;
int main()
{
    int ncoordenadas, x, y, z, mayorx, mayory, mayorz, menorx, menory, menorz, promediox = 0, promedioy = 0, promedioz = 0, sumax = 0, sumay = 0, sumaz = 0, contador = 0;
    cout << "Me podria decir cuantas coordenas va insertar" << endl;
    cin >> ncoordenadas;
    while (ncoordenadas > contador)
    {
        contador = contador + 1;
        cout << "inserte una coordenada de la siguiente manera (x,enter,y,enter,z)" << endl;
        cin >> x >> y >> z;
        if (contador == 1)
        {
            mayorx = x;
            mayory = y;
            mayorz = z;
            menorx = x;
            menory = y;
            menorz = z;
        }
        else
        {
            if (mayorx > x)
            {
                mayorx = mayorx;
            }
            else
            {
                mayorx = x;
            }
            if (menorx < x)
            {
                menorx = menorx;
            }
            else
            {
                menorx = x;
            }
            if (mayory > y)
            {
                mayory = mayory;
            }
            else
            {
                mayory = y;
            }
            if (menory < y)
            {
                menory = menory;
            }
            else
            {
                menory = y;
            }
            if (mayorz > z)
            {
                mayorz = mayorz;
            }
            else
            {
                mayorz = z;
            }
            if (menorz < z)
            {
                menorz = menorz;
            }
            else
            {
                menorz = z;
            }
        }
        sumax = sumax + x;
        sumay = sumay + y;
        sumaz = sumaz + z;
    }
    promediox = sumax / ncoordenadas;
    promedioy = sumay / ncoordenadas;
    promedioz = sumaz / ncoordenadas;
    cout << "Rango en eje x: " << menorx << "-" << mayorx << endl;
    cout << "Rango en eje y: " << menory << "-" << mayory << endl;
    cout << "Rango en eje z: " << menorz << "-" << mayorz << endl;
    cout << "Centroide:(" << promediox << "," << promedioy << "," << promedioz << ")" << endl;//los promedios toman los enteros, es decir si es 33,8333, el me va tomar el 33.(como son en el promedio de "x" y "y")
    return 0;
}