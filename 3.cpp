#include <iostream>
using namespace std;
int main()
{
    int maximo = 0, minimo = 0, montancho = 0, valleancho = 0, recorrido = 0, altura = 1, contkm = 0;
    int alturaantes=0, pico1, pico2 ,contsube, contbaja;
    bool sube1=true,sube2=false, baja1=true,baja2=false;
    while (altura > 0)
    {
        cout << "Ingrese altura actual" << endl;
        cin >> altura;
        if (maximo > altura)
        {
            maximo = altura;
        }
        if (minimo < altura)
        {
            minimo = altura;
        }if (altura>alturaantes)
        {
           sube1=false; 
           sube2=true;
        }
        if (sube1==true && baja1==false)
        {
            contsube++;
        }
        if (baja1==false && baja2==true)
        {
            contbaja++;
        }
        
        alturaantes = altura;
        
        contkm = contkm + 1;
    }
cout << "Ud recorrió un total de "<<contkm<<"kilometros"<< endl;
cout << "Su máxima altura fue de "<<maximo<<"msn"<< endl;
cout << "Su mínima altura fue de "<<minimo<<"msn"<< endl;

return 0;
}