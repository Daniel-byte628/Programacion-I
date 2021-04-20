#include <iostream>
using namespace std;
int main()
{
    int no=0, edad, frecuencia=0, f1=0, f2=0, f3=0, e1=0, e2=0, e3=0, maximolocal=0, contdatos = 1;
    cout << "Ingrese la cantidad de edades de las personas que estan en el histograma"<<endl;// Es decir si hay 18años,19años,20años,21años. Escribir 4
    cin >> no;
    while (contdatos <= no)
    {
        cout<<"Ingrese una edad"<<endl;
        cin>>edad;
        cout<<"Ingrese la respectiva frecuencia"<<endl;
        cin>>frecuencia;
        
        if (contdatos == 1)
        {
            e1 = edad;
            f1 = frecuencia;
        }
        else if (contdatos == 2)
        {
            e2 = edad;
            f2 = frecuencia;
        }
        else if (contdatos == 3)
        {
            e3 = edad;
            f3 = frecuencia;
            if (f2>f1 && f2>f3)
            {
                cout<<"Maximo local: edad: "<<e2<<" frecuencia: "<<f2<<endl;
            }
        }
        if (contdatos > 3)
        {
            f1=f2;
            e1=e2;
            f2=f3;
            e2=e3;
            f3=frecuencia;
            e3=edad;
              if (f2>f1 && f2>f3)
            {
                cout<<"Maximo local: edad: "<<e2<<" frecuencia: "<<f2<<endl;
            }
             
        }
        
        contdatos++;
    }

    return 0;
}
