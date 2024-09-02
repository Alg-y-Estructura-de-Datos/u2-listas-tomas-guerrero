/* Implementar una función que intercambie los elementos entre 2 listas de números enteros
 que recibe como parámetros. Si los tamaños de las listas son distintos, igual debe cambiar los
 datos y cambiarían los tamaños de cada lista. Ejemplo sea lista1= 15->1->8->35->40->25->12 y
 lista2= 3->4->912->45->66 al ejecutar la función quedarían lista1= 3->4->912->45->66 y
 lista2=15->1->8->35->40->25->12*/

#include <iostream>
#include "Lista/Lista.h"
using namespace std;

void Intercambiar(Lista<int> &lista1, Lista<int> &lista2);

int main()
{
  Lista<int> lista1, lista2;
  int i, f, j;

  cout << " Ingrese el tamanio de ambas listas: ";
  cin >> j;
  cout << endl;

  cout << " Lista 1 " << endl;

  for (int i = 0; i < j; i++)
  {
    cout << i + 1 << " Ingrese un elemento: ";
    cin >> f;
    lista1.insertarUltimo(f);
  }

  cout << " Lista 2 " << endl;

  for (int i = 0; i < j; i++)
  {
    cout << i + 1 << " Ingrese un elemento: ";
    cin >> f;
    lista2.insertarUltimo(f);
  }

  cout << " Lista 1 : " << endl;
  lista1.print();
  cout << " Lista 2: " << endl;
  lista2.print();
  cout << endl;
  cout << " Intercambio: " << endl;
  Intercambiar(lista1, lista2);
  cout << " Lista 1 : " << endl;
  lista1.print();
  cout << " Lista 2: " << endl;
  lista2.print();

  return 0;
}

void Intercambiar(Lista<int> &lista1, Lista<int> &lista2)
{

  int tamanio = lista1.getTamanio();
  Lista<int> aux1, aux2;
  for (int i = 0; i < tamanio; i++)
  {
    aux1.insertarUltimo(lista1.getDato(i));
  }

  for (int i = 0; i < tamanio; i++)
  {
    aux2.insertarUltimo(lista2.getDato(i));
  }

  lista1.vaciar();
  lista2.vaciar();

  for (int i = 0; i < tamanio; i++)
  {
    lista1.insertarUltimo(aux2.getDato(i));
  }

  for (int i = 0; i < tamanio; i++)
  {
    lista2.insertarUltimo(aux1.getDato(i));
  }
}