/* Implementar una función que recibe una lista de números enteros y un número entero “n” y
 que modifique la lista borrando todos los elementos de la lista que tengan el número “n”.
 Imprimir la lista antes de hacer el llamado a la función y luego del llamado a la función para
 mostrar que la lista original cambió. ej: lista: 1->2->3->4->5->3->7->8->3->10 con n=3 debe
 pasar con la función a 1->2->4->5->7->8->10*/
#include <iostream>
#include "Lista/Lista.h"
using namespace std;

void borrarNumero(Lista<int> &lista, int n);
int main()
{
  Lista<int> lista;
  int n, d, f;

  cout << " Ingrese el tamanio de la lista: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << " Ingrese un elemento: ";
    cin >> d;
    lista.insertarUltimo(d);
  }

  cout << " Ingrese el numero a retirar: ";
  cin >> f;

  borrarNumero(lista, f);

  return 0;
}

void borrarNumero(Lista<int> &lista, int n)
{
  int tamanio = lista.getTamanio();
  for (int i = 0; i < tamanio; i++)
  {
    if (lista.getDato(i) == n)
    {
      lista.remover(i);
      tamanio--;
      i--;
    }
  }

  lista.print();
}