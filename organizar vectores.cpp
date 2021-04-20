#include <iostream>
using namespace std;
const int t = 100;
void progresionaritmetica(int art[], int inicio, int factor, int tamano)
{
	art[0] = inicio;
	for (int i = 1; i < tamano; i++)
	{
		art[i] = factor + art[i - 1];
	}
}
void progresiongeometrica(int art[], int inicio, int factor, int tamano)
{
	art[0] = inicio;
	for (int i = 1; i < tamano; i++)
	{
		art[i] = factor * art[i - 1];
	}
}
void imprimir(int art[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		cout << art[i]<<"	";
	}
	cout << endl;
}
void intercalo(int vec[], int inicio, int factor, int tamano){
	int art[t];
	int geo[t];
	progresionaritmetica(art, 2, 4, 5);
	imprimir(art, 5);
	progresiongeometrica(geo, 2, 4, 5);
	imprimir(geo, 5);
	for (int i = 0; i < tamano; i++)
	{
		vec[i*2]=art[i];
		vec[i*2+1]=geo[i];
	}
}
void organizar(int vec[], int tam)
{
  int aux;
  for (int i = 0; i < tam; i++)
  {
    for (int j = 0; j < tam; j++)
    {
      if (vec[j] > vec[j + 1])
      {
        aux= vec[j];
        vec[j] = vec[j + 1];
        vec[j + 1] = aux;
      }
    }
  }
}
int main()
{
	int inte[t];
	intercalo(inte, 2,4,5);
	imprimir(inte, 5*2);
	organizar(inte,5*2);
	imprimir(inte, 5*2);
	return 0;
}