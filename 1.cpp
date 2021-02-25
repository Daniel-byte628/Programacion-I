#include <iostream>
using namespace std;
int main(){
int n, numero=0, mayor, menor, negativo=0, suma=0, promedio=0, contador=0,mayordecien=0;
cin>>n;
while (contador<n && n!=0)
{
    contador=contador+1;
    cin>>numero;
    if (contador==1)
    {
        mayor=numero;
        menor=numero;
        if(negativo=numero<0)
        {
            negativo=negativo+1;
        }
        suma=numero+suma;
        if(mayordecien=numero>100){
            mayordecien=mayordecien+1;
        }
    }
    else
    {
        if (mayor=numero>mayor){
            mayor=numero;
        }else
        {
            mayor=mayor;
        }
          if (menor=numero<menor){
            menor=menor;
        }else
        {
            menor=menor;
        }
          if (negativo=numero<0){
            negativo=negativo+1;
        }
        suma=numero+suma;
        if(mayordecien=numero>100){
            mayordecien=mayordecien+1;
        }
        if (promedio=(contador==5))
        {
            promedio=suma/(contador-negativo);
        } 
    }
}
cout<<mayor/n<< menor/n<< negativo/n<< suma/n<< promedio/n<< contador/n<<mayordecien/n;
return 0;
}