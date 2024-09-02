/* Crear un programa que pida al usuario dar elementos a una Lista de números enteros. Luego
 cree una función que reciba una lista int L1 y devuelva otra lista int L2 conteniendo los
 elementos repetidos de L1. Por ejemplo, si L1 almacena los valores 5->2->7-> 2->5->5->1, debe
 construirse una lista L2 con los valores 5->2. Si en L1 no hay elementos repetidos se debe
 indicar al usuario que no hay elementos repetidos en L1, de lo contrario imprimir ambas listas*/

#include <iostream>
#include "Lista/Lista.h"
using namespace std;

Lista<int> r(Lista<int> &lista);
int main()
{

  Lista<int> lista, lista2;
  int j, l;

  cout << " Ingrese la cantidad de elementos que tendra la lista: ";
  cin >> j;

  for (int i = 0; i < j; i++)
  {
    cout << i + 1 << ". Ingrese un elemento: ";
    cin >> l;
    lista.insertarUltimo(l);
  }
  lista2 = r(lista);

  cout << " La lista original es: " << endl;
  lista.print();
  cout << endl;
  cout << " La lista de los repetidos es: " << endl;
  lista2.print();

  return 0;
}

Lista<int> r(Lista<int> &lista)
{
  Lista<int> yaVistos, repetidos, l2;

  for (int i = 0; i < lista.getTamanio(); i++)
  {
    bool visto = 0, repetido = 0;
    for (int j = 0; j < yaVistos.getTamanio(); j++)
    {
      if (yaVistos.getDato(j) == lista.getDato(i))
      {
        visto = true;
        break;
      }
    }
    if (visto == true)
    {
      for (int j = 0; j < repetidos.getTamanio(); j++)
      {
        if (repetidos.getDato(j) == lista.getDato(i))
        {
          repetido = true;
          break;
        }
      }
    }

    if (repetido == false && visto == true)
    {
      l2.insertarUltimo(lista.getDato(i));
      repetidos.insertarUltimo(lista.getDato(i));
    }
    else if (visto == false)
    {
      yaVistos.insertarUltimo(lista.getDato(i));
    }
  }

  return l2;
}