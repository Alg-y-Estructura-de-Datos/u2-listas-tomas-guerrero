/* Sistema de Monitor Publicitario Circular
Desarrolla un programa para gestionar un monitor publicitario que debe mostrar frases de
 anuncios de manera circular. Para lograr esto, implementarás una solución utilizando una lista
 circular simplemente enlazada.
 Requisitos:
 1.
 Frases de Anuncios:
 ○ Cadafrase deanuncio será un texto simple que el monitor debe mostrar por
 vez.
 2. Mostrar Circularmente:
 ○ Lasfrases deben mostrarse en un formato circular, es decir, una vez que se ha
 mostrado la última frase, el monitor debe volver a mostrar la primera y así
 infinitamente.
 3. Implementación:
 ○ Utiliza una lista circular simplemente enlazada para gestionar el almacenamiento
 y la visualización de las frases. La lista circular debe permitir el recorrido
 continuo de los elementos.
 4. Operaciones Básicas:
 ○ Agregar Frases: Capacidad para añadir nuevas frases a la lista circular.
 ○ Eliminar Frases: Capacidad para eliminar frases específicas de la lista.
 ○ MostrarFrases: Implementa una función para mostrar las frases en el monitor
 de manera continua, recorriendo circularmente la lista e infinitamente.*/

#include <iostream>
#include "lista/CircList.h"
#include <string>
using namespace std;

void mostrarLista(CircList<string> &lista);

int main()
{
  CircList<string> lista;
  string frase;
  int j;

  cout << " Ingrese la cantidad de frases que tendra la lista: ";
  cin >> j;
  cin.ignore();

  for (int i = 0; i < j; i++)
  {
    cout << " Ingrese una frase: ";
    getline(cin, frase);
    lista.insertarUltimo(frase);
  }

  mostrarLista(lista);

  return 0;
}

void mostrarLista(CircList<string> &lista)
{

  int pos = 0;
  while (true)
  {
    if (pos > lista.getTamanio() - 1)
    {
      pos = 0;
      cout << lista.getDato(pos) << endl;
    }
    else
    {
      cout << lista.getDato(pos) << endl;
    }
    pos++;
  }
}
