#include <iostream>
#include <math.h> /* fdim*/
using namespace std;
int main()
{
    //Un avion vuela a 900m y un submarino esta a -850m¿cual es la diferencia de altura?
    int x=0, y=0, result=0;
    cout<<"Ingrese la altura del avion"<<endl;
    cin>>x;
    cout<<"Ingrese la altura del submarino"<<endl;
    cin>>y;
    result=fdim(x,y);
    cout<<"la diferencia de altura es: "<<result<<endl;
    return 0;
}
