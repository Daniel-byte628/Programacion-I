#include <iostream>
using namespace std;
void inicializarArreglo(int arreglo[], int t, int valor)
{
    for (int i = 0; i < t; i++)
    {
        arreglo[i] = valor;
    }
}
int buscarCaracter(char cadena[], char letra, int posiciones[])
{
    int cont = 0;
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == letra)
        {
            posiciones[cont] = i;
            cont++;
        }
    }
    return cont;
}
void imprimirResultados(int posiciones[], int t)
{
    cout << "Se encontro " << t << " veces" << endl;
    for (int i = 0; i < t; i++)
    {
        cout << posiciones[i] << '\t';
    }
    cout << endl;
}
void cambiarcaracter(char cadena[],int posiciones[], char letra){
    for (int i = 0; posiciones[i] !=-1; i++)
    {
     cadena[posiciones[i]]=letra;
    }
    
}
int main()
{
    const int TAM = 30;
    char cadena[TAM] = "Holaaaaaa";
    int posiciones[TAM];
    inicializarArreglo(posiciones, TAM, -1);
    int cantVeces = buscarCaracter(cadena, 'a', posiciones);
    imprimirResultados(posiciones, cantVeces);
    cambiarcaracter(cadena,posiciones,'x');
    cout<< cadena <<endl;
    return 0;
}