#include <iostream>
#include <time.h>
using namespace std;
void inicializarArreglo(int vec[], int t, int valor)
{
  for (int i = 0; i < t; i++)
  {
    vec[i] = valor;
  }
}
void imprimirJuegoPropuesto(int vec[], int tam)
{
  cout << "Lo que se encuentra en el arreglo: " << endl;
  for (int i = 0; i < tam; i++)
  {
    cout << " " << vec[i] << " ";
  }
}
void proponerJuego(int vec[], int limite, int menor, int mayor) //000000
{
  for (int i = 0; i < limite; i++)
  {
    bool se_repite = true;
    int comparacion = 0;
    // 1. Obtener el valor aleatorio
    while (se_repite) // mientras se repita
    {
      comparacion = rand() % (mayor - menor + 1) + menor;
      // 2. Verificar que no se repitan los valores aleatorios y/o mirar si el valor ya existe en el arreglo
      bool existente = false;
      for (int a = 0; a < limite; a++)
      {
        if (comparacion == vec[a]) // 3. Cambiar el numero repetido, unicamente si se repite
        {
          existente = true;
        }
      }
      se_repite = existente;
    }
    // 4. Guardar
    vec[i] = comparacion;
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
  srand(time(NULL));
  const int T = 100;
  int arreglo[T];
  int tam = 6;
  inicializarArreglo(arreglo, tam, 0);
  imprimirJuegoPropuesto(arreglo, tam);
  proponerJuego(arreglo, tam, 1, 43);
  organizar(arreglo,tam);
  imprimirJuegoPropuesto(arreglo, tam);
  proponerJuego(arreglo, tam, 1, 43);
  organizar(arreglo,tam);
  imprimirJuegoPropuesto(arreglo, tam);
  return 0;
}