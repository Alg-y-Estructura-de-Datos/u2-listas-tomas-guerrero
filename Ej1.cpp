/*Implementar una función llamada “printLista” que reciba una lista y una posición “p” e
 imprima los elementos de esa lista a partir de la posición “p”. No debe modificarse la lista
 original. Ej: listaOriginal: 1->2->3->4->5->6->7->8->9->10 con p=5 Por pantalla se verá:
 7->8->9->10*/

#include <iostream>
#include "Lista/Lista.h"

void printLista(Lista<int> &lista, int i);

using namespace std;

int main()
{
  Lista<int> lista;
  Lista<int> lista2;
  int p, d, n;

  cout << " Ingrese el tamanio de la lista: ";
  cin >> p;

  for (int i = 0; i < p; i++)
  {
    cout << 1 + i << " Ingrese un elemento: ";
    cin >> d;
    lista.insertarUltimo(d);
  }
  do
  {
    cout << " Ingrese desde que posicion quiere imprimir la lista: ";
    cin >> n;
  } while (n < 0);

  cout << " Nueva Lista: " << endl;
  printLista(lista, n);
  return 0;
}

void printLista(Lista<int> &lista, int n)
{
  Lista<int> lista2;
  int j;
  int tamanio = lista.getTamanio() - 1;
  for (int i = n; i <= tamanio; i++)
  {
    j = lista.getDato(i);
    lista2.insertarUltimo(j);
  }

  lista2.print();
}