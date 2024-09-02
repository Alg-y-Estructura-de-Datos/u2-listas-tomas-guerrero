/* Escribir un programa que pida al usuario una palabra o frase y la almacene en una Lista
 separando letra por letra, luego pedirá al usuario una vocal que desee contar y, por último, se
 debe imprimir por pantalla la lista y el número de veces que aparece la vocal en la palabra o
 frase. Validar que la Lista no esté vacía y que la letra a contar que introduzca el usuario sea
 una vocal.*/

#include <iostream>
#include <string>
#include <cctype>
#include "Lista/Lista.h"

using namespace std;

int contarLetra(Lista<char> &lista, char a);
bool esVocal(char a);

int main()
{
  Lista<char> lista;
  string f;
  char a, c;

  cout << " Ingrese una frase: ";
  getline(cin, f);

  for (int i = 0; i < f.length(); i++)
  {
    c = f[i];
    lista.insertarUltimo(c);
  }

  if (lista.esVacia())
  {
    cout << " La lista esta vacia, no se puede contar nada... " << endl;
    return 0;
  }
  cout << " Ingrese una vocal a contar: ";
  cin >> a;
  if (!esVocal(a))
  {
    cout << " No es una vocal..." << endl;
    do
    {
      cout << " Ingrese una vocal a contar: ";
      cin >> a;
    } while (!esVocal(a));
  }

  int totalVocal = contarLetra(lista, a);

  cout << " La cantidad de veces que aparece la vocal " << a << " es de : " << totalVocal << endl;

  return 0;
}

bool esVocal(char a)
{

  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
  {
    return true;
  }
  else
  {
    return false;
  }
}

int contarLetra(Lista<char> &lista, char a)
{
  int contar = 0;
  for (int i = 0; i < lista.getTamanio(); i++)
  {
    if (tolower(lista.getDato(i)) == tolower(a))
    {
      contar++;
    }
  }

  return contar;
}