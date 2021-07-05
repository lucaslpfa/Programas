#include <iostream>
using namespace std;

int main()
{
  float fMediaGlobal;
  int iFrequencia;

  cout << "Informe a Média Global: ";
  cin >> fMediaGlobal;

  cout << "Informe a Frequência: ";
  cin >> iFrequencia;

  if (fMediaGlobal >= 6.0 && iFrequencia >= 75)
  {
    cout << "Aprovado." << endl;
  }
  else
  {
    cout << "Média Global e/ou Frequência insuficiente." << endl;
  }
}