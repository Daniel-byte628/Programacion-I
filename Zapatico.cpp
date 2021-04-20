#include <iostream>
using namespace std;
void jugadores(string nombres[], int numerodejugadores)
{

    for (int i = 1; i <= numerodejugadores; i++)
    {
        string name;
        cout << "Dime el nombre del jugador " << i << endl;
        cin >> name;
        nombres[i] = name;
    }
}
void inicializadordejuego(char arreglo[], int tam)
{
    char letra = 'd';
    for (int i = 0; i < tam; i++)
    {
        arreglo[i] = letra;
    }
}
void imprimirgame(char vector[], int tama)
{

    for (int i = 0; i < tama; i++)
    {
        cout << vector[i] << endl;
        cout << i << endl;
    }
}
void cambiodepie(char estados[], int malo)
{
    if (estados[malo] == 'd')
    {
        estados[malo] = 'i';
    }
    if (estados[malo] == 'i')
    {
        estados[malo] = 'f';
    }
    /* switch (estados[malo])
        {
        case 'd':
            estados[malo]='i';
            break;
        case 'i':
            estados[malo]='f';
            break;
        default:
            break;
        }*/
}
int zapatico(char estado[], int one, int tamano)
{
    //Almacenar como posicion A a la persona que va iniciar
    int A = one-1; //5
                 //Repetir paso 3 hasta que se acabe el coro
    for (int i = 0; i < 14; i++)
    {
          //Hacer que A sea la siguiente persona
        A = A + 1;
        if (tamano <= A) //5<6
        {
            A = 0;
        }
        //Saltar persona que no esta en juego
        if (estado[A] == 'f')
        {
            i--;
        }
    }
    return A;
}
int jugadoresenjuego(int fronteras, char estado[])
{
    int n;
    for (int i = 0; i < fronteras; i++)
    {
        if (estado[i] != 'f')
        {
            n++;
        }
    }
    return n;
}
void cambiodepies(char estados[], int fronteras)
{
    //Mirar a quien le toco la mala suerte
    // int p = 1; //p es donde va iniciar el juego
    // contador(estados,p);
    // char inicioestado = estados[p];
    // cambiarvalores(inicioestado);
    //cambiar los valores
    //2.Pedirle al usuario con quien comenzar
    int primerapersona;
    cout << "Seria tan amable de indicar con que persona iniciaremos el juego: " << endl;
    cin >> primerapersona;
    //3.Hacer el zapatico
    while (jugadoresenjuego(fronteras, estados) > 1)
    {
        int malo = zapatico(estados, primerapersona, fronteras);
        //4.cambiar de pie
        cambiodepie(estados, malo);
        //5.Repetir los pasos desde el (3-5) hasta que haya un winner
    }
}
void ganador(int tam, char estados[], string names[])
{
    for (int i = 0; i < tam; i++)
    {
        if (estados[i] != 'f')
        {
            cout << "El ganador es " << names[i] << endl;
        }
    }
}
int main()
{
    const int T = 100;
    char estados[T]; // ddddd
    string names[T]; //nombres
    int tam = 0;
    //Personas que van a estar en el juego "nombres"}
    cout << "Numero del total de personas que van a jugar" << endl;
    cin >> tam;
    //nombres de jugadores
    jugadores(names, tam);
    //Poner todos los pies con pie derecho e iniciar su estado con "2"
    inicializadordejuego(estados, tam);
    //silabas contador y cambio de pies
    cambiodepies(estados, tam);
    ganador(tam, estados, names);
    return 0;
}
