#include <iostream>
using namespace std;
int main()
{
    int ncanicas = 1, diametro, contador = 0, multiplos = 0, contbuena=0, contmala=0, contpotbuena=0;
    cout<< "Ingrese la cantidad de canicas" << endl;
    cin >> ncanicas;
    while (ncanicas > contador)
    {
        cout << "Ingrese el diametro de una canica" << endl;
        cin >> diametro;
        if (diametro % 2 == 0)
        {
            multiplos = multiplos + 1;
        }
        if (diametro % 3 == 0)
        {
            multiplos = multiplos + 1;
        }
        if (diametro % 5 == 0)
        {
            multiplos = multiplos + 1;
        }
        if (multiplos == 1 || multiplos == 2)
        {
            contpotbuena = contpotbuena + 1;
            cout << "Esta canica es pontencialementebuena" << endl;
        }else if (multiplos == 3)
        {
            contbuena = contbuena + 1;
            cout << "Esta canica es buena" << endl;
        }else if (multiplos == 0)
        {
            contmala = contmala + 1;
            cout << "Esta canica es mala" << endl;
        }
        multiplos=0;
        contador++;
    }
    cout<<"De las "<< ncanicas<< " canicas hay ";
    if (contbuena>1)
    {
       cout<< contbuena<<" buenas ";
    }else
    {
        cout<< contbuena<<" buena ";
    }
      if (contpotbuena>1)
    {
       cout<< contpotbuena<<" potencialmente buenas y ";
    }else
    {
        cout<< contpotbuena<<" potencialmente buena y ";
    }
      if (contmala>1)
    {
       cout<< contmala<<" malas ";
    }else
    {
        cout<< contmala<<" mala ";
    }
    return 0;
}